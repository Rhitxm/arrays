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
