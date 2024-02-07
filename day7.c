#include<stdio.h>
int main(){
    int arr[100];
    int n;
    int sum=0;
    printf("enter no.of elements in array \n");
    scanf("%d",&n);
    printf("Enter elements of array \n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
  printf("elements of array are: \t");
    for(int i=0;i<n;i++){
        printf("%d \t ",arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf(" \n sum of entered numbers is %d",sum);
    return 0;
}