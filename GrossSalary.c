#include <stdio.h>

int main() {
    float basic, hra, da, gross;
    int category;
    
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    
    // Determine category for switch
    if (basic <= 10000) category = 1;
    else if (basic <= 20000) category = 2;
    else category = 3;
    
    switch(category) {
        case 1:
            hra = basic * 0.10;
            da = basic * 0.15;
            break;
        case 2:
            hra = basic * 0.15;
            da = basic * 0.20;
            break;
        case 3:
            hra = basic * 0.20;
            da = basic * 0.30;
            break;
    }
    
    gross = basic + hra + da;
    printf("Gross Salary = %.2f\n", gross);
    
    return 0;
}