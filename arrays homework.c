//in an array of numbers find out how many times does a number'x' occurs
#include <stdio.h>
int countNum(int arr[], int n, int num);

int main(){
    int arr[]={1, 2, 2, 2, 3, 3, 5, 5, 7, 6, 6, 6, 8, 6};
    printf("%d", countNum(arr, 14, 8));
    return 0;
}
int countNum(int arr[], int n, int num){
    
int count=0;
    
for (int i=0; i<n; i++){
    if (arr[i]==num){
    count++;
  }
}
return count;
}
