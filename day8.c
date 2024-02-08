#include<stdio.h>
int main(){
    int arr[100];
    int n;
    int j=0;
    int rev[100];
    printf("enter no.of elements in array \n");
    scanf("%d",&n);
    printf("Enter elements of array \n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("elements of array are: \t");
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
  
    for (int i=n-1;i>=0;i--){
        rev[j]=arr[i];
        j++;

    }
      printf(" \n reversed array is  ");
      for(int i=0;i<n;i++){
        printf("%d \t",rev[i]);
    }
  

        return 0;
}