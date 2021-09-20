/* 
 * File:   first.c
 * Author: Kunal Pradhan
 *
 * Created on 27 July, 2021, 11:50 PM
 */

#include<pic18f4550.h>
#include<string.h>
//-------------------------------------
#define lcd PORTD
#define rs PORTEbits.RE0
#define rw PORTEbits.RE1
#define e  PORTEbits.RE2
//-------------------------------------
void delay_ms(unsigned char);
void BinToVoltage(unsigned int tmp);
void get_adc(void);
void lcd_cmd(unsigned char val);
void lcd_data(unsigned char val);
void InitLCD(void);
void display(void);
void lcdmsg(unsigned char *ch);
//--------------------------------------
unsigned int value_adc_binary;
unsigned int value_adc_binary,n_decimal=0,p_digit=0,my_adresh=0,my_adresl_int=0;
unsigned char my_adresl=0;
//--------------------------------------
void main()
{
	ADCON1 = 0X0e;// selecting +Vref = VDD & -Vref = VSS, AN0 as analog
	//TRISC=0x80;	//c0,c1,c2 output & rc7 rx input
  	TRISD=0;
TRISE=0x00;

	InitLCD();

	while(1)
	{
		get_adc();
	    BinToVoltage(value_adc_binary);
	    display();
		lcd_cmd(0xc0);
	}
}
//-----------------------------------
void delay_ms(unsigned char val)
{
	int i,j;
	for(i=0;i<val;i++)
		for(j=0;j<45;j++);
}
//------------------------------------
void get_adc(void)
{

  	ADCON0 = 0x01; 	//selecting channel 0 ADC made ON
	ADCON2 = 0xae; // acuisition 12TAD ; conversion time = Fosc/64; right justified
    ADCON0bits.GO = 1;
    while(ADCON0bits.DONE==1);
    my_adresl=ADRESL;
	my_adresh=ADRESH;
	my_adresh=my_adresh<<8;
	value_adc_binary=my_adresh|my_adresl;
}
//------------------------------------
void BinToVoltage(unsigned int tmp)
{
	float val ;

	// scale to voltage
	val = (float)(tmp * 5.0) / 1023 ;
	n_decimal = val ;	// integer ratio (digit before decimal pt.)
	p_digit = (val - n_decimal) * 100 ;	// 2 digit decimal part

}
//-----------------------------------
void display(void)
{
	unsigned int n1,n2,n3,n4;
    lcd_cmd(0x80);
	lcdmsg("VOLTAGE") ;
    lcdmsg("=") ;

	n1=n_decimal/10;
	n2=n_decimal%10;

	lcd_cmd(0xc1);//code 4 1st line1st place
	lcd_data(n1|0x30);


	lcd_cmd(0xc2);//code 4 1st line2t place
	lcd_data(n2|0x30);


	lcd_cmd(0xc3);//code 4 1st line3rd place
	lcd_data('.');


	n3=p_digit/10;
	n4=p_digit%10;

	lcd_cmd(0xc4);//code 4 1st line4th place
	lcd_data(n3|0x30);


	lcd_cmd(0xc5);//code 4 1st line5th place
	lcd_data(n4|0x30);

}
void InitLCD(void)
{

	lcd_cmd(0x38);
	lcd_cmd(0x0c);
	//lcd_cmd(0x0E) ;
	lcd_cmd(0x06);
	lcd_cmd(0x01);
	lcd_cmd(0x80);
}
void lcd_cmd(unsigned char val)
{
	lcd=val;
	rs=0;
	rw=0;
	e=1;
	delay_ms(2);
	e=0;
}
void lcd_data(unsigned char val)
{
	lcd=val;
	rs=1;
	rw=0;
	e=1;
	delay_ms(2);
	e=0;
}
void lcdmsg(unsigned char *ch)
{


	while(*ch!=0)
	{
		lcd_data(*ch) ;
		ch++ ;

	}
}