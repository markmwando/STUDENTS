#include <stdio.h>
int main()
{
float principle;
float rate;
float time;
float simple_interest;

printf("Enter the principle:");
scanf("%f",&principle);
printf("principle is %.2f\n",principle);

printf("Enter rate:");
scanf("%f",&rate);
printf("rate is &.2f\n",rate);

printf("Enter time:");
scanf("%f",&time);
printf("time is %f.2\n",time);

simple_interest=(principle*time*rate)/100;

printf("simple_interest=%.2f",simple_interest);
	
	return 0;
}