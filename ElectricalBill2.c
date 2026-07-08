#include <stdio.h>

int main() {
    float units, bill, total_bill;
    
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);
    
    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = (50 * 0.50) + ((units - 50) * 0.70);
    } else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.70) + ((units - 150) * 1.20);
    } else if (units <= 350) {
        bill = (50 * 0.50) + (100 * 0.70) + (100 * 1.20) + ((units - 250) * 1.50);
    } else {
        bill = (50 * 0.50) + (100 * 0.70) + (100 * 1.20) + (100 * 1.50) + ((units - 350) * 1.75);
    }
    
    total_bill = bill + (bill * 0.20); // 20% surcharge
    printf("Total Electricity Bill = Rs. %.2f\n", total_bill);
    
    return 0;
}