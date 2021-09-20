#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("kp.txt","w");
    if(!fp)
        return(0);
    int x=12345;
    fprintf(fp,"%d\n",x);
    fclose(fp);
    fp=fopen("kp.txt","r");
    int y;
    fscanf(fp,"%d",&y);
    printf("%d",y);
}
