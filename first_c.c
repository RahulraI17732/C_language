/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void SortingArray(int arr[], int n ) {
    for (int i = 0 ; i < n ; i++) {
     int temp = arr[i];
     arr[i] = arr[i+1];
     arr[i+1] = temp ;
 }
}
 
void printArray(int arr[], int n ){
    for(int i = 0 ; i< n ; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = { 4,2, 5 , 8 , 6 } ;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array \n");
    printArray(arr, n);
    SortingArray(arr,n);
    printf("Reversed Array \n");
    printArray(arr, n);
    return 0;
}
