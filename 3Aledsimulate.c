#include<reg51.h>
void delay(unsigned int t);
void main(void)
{
while(1)
{
P0++; // Increment Port 1 (Binary Counter)
delay(100);
}
}
void delay(unsigned int t)
{
unsigned int i,j;
for(i=0;i<=t;i++)
for(j=0;j<=1275;j++);
}
