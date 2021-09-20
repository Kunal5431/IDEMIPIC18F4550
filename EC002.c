#include<pic18f4550.h>
void EE_WRT();
unsigned char EE_READ();
void delay(unsigned char tym);
void main()
{
unsigned char x;
TRISD=0;
EEADR=0x30;
EEDATA='I';
EE_WRT();
EEADR=0x31;
EEDATA='N';
EE_WRT();
EEADR=0x32;
EEDATA='D';
EE_WRT();
EEADR=0x33;
EEDATA='I';
EE_WRT();
EEADR=0x34;
EEDATA='A';
EE_WRT();
WREN=0;

while(1)
{
RD=1;
EEADR=0x30;
PORTD=EE_READ();
delay(500);

EEADR=0x31;
PORTD=EE_READ();
delay(500);

EEADR=0x32;
PORTD=EE_READ();
delay(500);

EEADR=0x33;
PORTD=EE_READ();
delay(500);

EEADR=0x34;
PORTD=EE_READ();   
delay(500);
//while(1);
}

}
void EE_WRT()
{
EEPGD=0;
CFGS=0;
WREN=1;
GIE=0;
EECON2=0x55;
EECON2=0xAA;
WR=1;
GIE=1;
while(!EEIF);
EEIF=0;
}
unsigned char EE_READ()
{
EEPGD=0;
CFGS=0;
RD=1;
return(EEDATA);
}
void delay(unsigned char tym)
{
	unsigned char i,j;
	for(i=0;i<tym;i++)
		for(j=0;j<135;j++);
}
