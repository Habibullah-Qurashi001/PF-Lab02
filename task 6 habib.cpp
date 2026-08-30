#include<stdio.h>
int main(){
	float radius=7.5;
	float pi=3.14159;
	float Diameter=2*radius;
	float Circumference=2* pi*radius;
	float Area=pi*radius*radius;
	printf("=============CIRCLE GEOMETRY REPORT=================\n");
	printf("Given Radius:\t%.3fcm.\n",radius);
	printf("Calculated Diameter:\t%.3fcm.\n",Diameter);
	printf("Calculated Circumference:\t%.3fcm.\n",Circumference);
	printf("Calculated Area:\t%.3fsq.cm.\n",Area);
	printf("\n=======================================\n");
	return 0;
}