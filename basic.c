//printing marks of three numbers

#include <stdio.h>
int main() {
int marks[3];
    printf("enter phy:\n");
    scanf("%d", &marks[0]);
    printf("enter chem:\n");
    scanf("%d", &marks[1]);
    printf("enter maths\n");
    scanf("%d", &marks[2]);

    printf("phy:%d, chem:%d, maths:%d", marks[0], marks[1], marks[2]);
 
    return 0;
}

//printing prices of three different items including gst
#include <stdio.h>
int main() {
float price[3];
    printf("enter price of three items:\n");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    

    printf("total price: %f", price[0]+(0.18*price[0]));
    printf("total price: %f", price[1]+(0.18*price[1]));
    printf("total price: %f", price[2]+(0.18*price[2]));
    return 0;
}
