#include<stdio.h>
int main(){
	printf("============= TEMPERATURE CONVERSION ================");
	float Celsius=37.5;
	float Fahrenhite=(Celsius*9.0/5.0)+32.0;
	float Kelvin=Celsius+273.15;
	printf("\nTemperature in Celsius:\t\t%.2f",Celsius);
	printf("\nTemperature in Fahrenhite:\t%.2f",Fahrenhite);
	printf("\nTemperature in Kelvin:\t\t%.2f",Kelvin);
	printf("\n==============================================\n");
	return 0;
}