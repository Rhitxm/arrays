//printing 0-6 numbers

#include <stdio.h>

void printNumbers(int arr[], int n);

int main() {
    int arr[]={1, 2, 3 ,4, 5, 6};
    printNumbers(arr, 6);
    return 0;
}

void printNumbers(int arr[], int n){
    for (int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}


//using pointers
#include <stdio.h>

void printNumbers(int *arr, int n);

int main() {
    int arr[]={1, 2, 3 ,4, 5, 6};
    printNumbers(arr, 6);
    return 0;
}

void printNumbers(int *arr, int n){
    for (int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

//function to count number of odd numbers in an array
#include <stdio.h>

int countOdd(int arr[],  int n);
int main(){
    int arr[]={1, 2, 3, 4, 5};
    printf("%d", countOdd (arr, 5));
    return 0;
}
int countOdd(int arr[], int n){
int count = 0;

for (int i =0; i<n; i++){
    if(arr[i] %2 != 0){
        count++;
    }
}
    return count;
}
