#include <stdio.h>
int main() {
    int Tea_Quantity=3;
    float Tea_price=60.00;
    float tea_total=3*60.00;
    int Samosa_Quantity=4;
    float Samosa_price=40.50;
    float Samosa_total=4*40.50;
    int Chicken_Roll_Quantity=2;
    float Chicken_Roll_price=120.00;
    float Chicken_total=2*120.00;
    float Bill_Subtotal=(60.00 * 3) + (40.50 * 4) + (120.00 * 2);
    float GST = 0.16 * Bill_Subtotal;
    float Grand_Total = Bill_Subtotal + GST;
    printf("============ FAST CAFETERIA RECEIPT ===================");
    printf("\nItem\t\tQty\tUnit_Price\tSubtotal");
    printf("\nTea\t\t%d\t%.2f\t\t%.2f",Tea_Quantity, Tea_price, tea_total);
    printf("\nSamosa\t\t%d\t%.2f\t\t%.2f",Samosa_Quantity, Samosa_price, Samosa_total);
    printf("\nChicken Roll\t%d\t%.2f\t\t%.2f", Chicken_Roll_Quantity, Chicken_Roll_price, Chicken_total);
    printf("\n--------------------------------------------------------");
    printf("\nSubtotal\t%.2f", Bill_Subtotal);
    printf("\nGST (16%%)\t%.2f", GST);
    printf("\n--------------------------------------------------------");
    printf("\nGrand Total\t%.2f\n", Grand_Total);
    printf("\n================= THANK YOU FOR VISIT=========================");

    return 0;
}
