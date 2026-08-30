#include<stdio.h>
int main(){
float vi=12.5;
float a=3.2;
float t=6.0;
float vf=vi+(a*t);
float s=(vi*t)+(0.5*a*t*t);
printf("\n=============KINEMATICS MOTION REPORT============");
printf("\nInitial Velocity(vi):\t%.2fm/s",vi);
printf("\nAcceleration(a):\t%.2fm/s^2",a);
printf("\nTime Elapsed(t):\t%.2fs",t);
printf("\n-------------------------------------------------------");
printf("\nCalculated Final Velocity(vf):\t%.2fm/s",vf);
printf("\nCalculated Distance(s):\t%.2fm",s);
printf("\n================================================");
return 0;


}
