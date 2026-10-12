#include <stdio.h>

int main(void) {
    int units;
    double bill;

    printf("Enter electricity units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid units. Please enter a non-negative whole number.\n");
        return 1;
    }

    /* Sample progressive tariff slabs (replace with your assigned rates):
       First 100 units: Rs. 1.50 per unit
       Next 100 units:  Rs. 2.50 per unit
       Next 100 units:  Rs. 4.00 per unit
       Above 300 units: Rs. 6.00 per unit
    */
    if (units <= 100) {
        bill = units * 1.50;
    } else if (units <= 200) {
        bill = (100 * 1.50) + ((units - 100) * 2.50);
    } else if (units <= 300) {
        bill = (100 * 1.50) + (100 * 2.50) + ((units - 200) * 4.00);
    } else {
        bill = (100 * 1.50) + (100 * 2.50) + (100 * 4.00)
               + ((units - 300) * 6.00);
    }

    printf("Units consumed: %d\n", units);
    printf("Electricity bill: Rs. %.2f\n", bill);

    return 0;
}
output:
Enter electricity units consumed: 250
Units consumed: 250
Electricity bill: Rs. 600.00
