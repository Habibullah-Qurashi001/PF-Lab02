#include<stdio.h>
int main(){
double principal=250000.00;
float rate=8.5;
int time=3;
float I=(principal*rate*time)/100.0;
float A= principal+I;
float MI =A/(time*120);
printf("\n=========== BANK LOAN INTEREST SUMMARY=============");
printf("\nPrincipal Amount:%.2f",principal);
printf("\nAnnual Interest Rate:%.2f%%",rate);
printf("\nLoan Duration:%d years(36 Months)",time);
printf("\n----------------------------------------------------------");
printf("\nTotal Accrued Interest:PKR %.2f",I);
printf("\nTotal Payable Amount:PKR %.2f",A);
printf("\nMonthly Installment:PKR %.2f",MI);
printf("\n===================================================");
return 0;}