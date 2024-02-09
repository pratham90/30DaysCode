#include<stdio.h>
int main(){
    int arr[100];
    int n;
    int k;
    printf("enter no.of elements in array \n");
    scanf("%d",&n);
    printf("Enter elements of array \n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter the element to find \n");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            printf("Entered number %d is at index %d",k,i);
        }
    }
    return 0;
}