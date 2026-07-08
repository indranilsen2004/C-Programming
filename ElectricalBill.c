#include <stdio.h>

int main() {
    float units, bill, total_bill;
    int slab;
    
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);
    
    // Assign slabs since switch requires integers
    if (units <= 50) slab = 1;
    else if (units <= 150) slab = 2;
    else if (units <= 250) slab = 3;
    else if (units <= 350) slab = 4;
    else slab = 5;
    
    switch(slab) {
        case 1: 
            bill = units * 0.50; 
            break;
        case 2: 
            bill = 25 + ((units - 50) * 0.70); 
            break;
        case 3: 
            bill = 95 + ((units - 150) * 1.20); 
            break;
        case 4: 
            bill = 215 + ((units - 250) * 1.50); 
            break;
        case 5: 
            bill = 365 + ((units - 350) * 1.75); 
            break;
    }
    
    total_bill = bill * 1.20; // adding 20% surcharge
    printf("Total Electricity Bill = Rs. %.2f\n", total_bill);
    
    return 0;
}