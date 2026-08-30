#include<stdio.h>
int main(){
double basic_salary=85000.00;
float HRA=(0.20*basic_salary);
float MA=(0.10*basic_salary);
float GrossSalary=basic_salary+HRA+MA;
float TD=(0.05*GrossSalary);
float NS=(GrossSalary-TD);
printf("\n=============MONTHLY SALARY SLIP=================");
printf("\nbasic salary:\tPKR%.2f",basic_salary);
printf("\nHRA(20%):\tPKR%.2f",HRA);
printf("\nMA(10%):\t\tPKR%.2f",MA);
printf("\n--------------------------------------------------------------------");
printf("\nGrossSalary:\tPKR%.2f",GrossSalary);
printf("\nTD(5%):\t\tPKR%.2f",TD);
printf("\n---------------------------------------------------------------------");
printf("\nNS:\tPKR%.2f",NS);
printf("\n======================================================================");
return 0;
}