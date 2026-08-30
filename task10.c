#include<stdio.h>
int main(){
printf("==============SEMESTER ACADEMIC REPORT=================\n");
float PF_Marks=88.00;
int PF_credit_Hours=3;
float Calculus_Marks=76.5;
int Calculus_credit_Hours=3;
float Applied_physics=82.0;
int Applied_Physics_credit_Hours=2;
float Total_Weightage_Score=(88.0*3)+(76.5*3)+(82.0*2);
int Total_Credit_Hours=8;
float Weightage_Average_Percentage=Total_Weightage_Score/Total_Credit_Hours;
printf("Courses\t\tCredit Hours\t\tObtained Marks\n");
printf("------------------------------------------------------\n");
printf("Programming Fund.\t%d\t\t%.2f\n",PF_credit_Hours,PF_Marks);
printf("Calculus\t\t%d\t\t%.2f\n",Calculus_credit_Hours,Calculus_Marks);
printf("Applied Physics\t\t%d\t\t%.2f\n",Applied_Physics_credit_Hours,Applied_physics);
printf("-------------------------------------------------------\n");
printf("Total Credits:\t%d\tWeightage Average:\t%.2f%%\n",Total_Credit_Hours,Weightage_Average_Percentage);
printf("========================================================");
return 0;


}