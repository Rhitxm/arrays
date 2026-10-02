//traversing using pointers

#include <stdio.h>

int main() {
    int aadhar[5];

    //input
    int *ptr= &aadhar[0];
    for (int i=0; i<5; i++){
        printf("%d index:", i);
        scanf("%d", (ptr+i));
    }
    for (int i=0; i<5; i++){
    printf("%d index=%d\n", i, *(ptr+i));
}
    return 0;
}

//printitng without pointers
#include <stdio.h>

int main() {
    int aadhar[5];

    //input
    for (int i=0; i<5; i++){
        printf("%d index:", i);
        scanf("%d", &aadhar[i]);
    }
    //output
    for (int i=0; i<5; i++){
    printf("%d index=%d\n", i, aadhar[i]);
}
    return 0;
}
