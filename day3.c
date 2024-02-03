#include<stdio.h>
int main(){
    int num;
    printf("enter the number to check if it is odd or even \n");
    scanf("%d",&num);
     if(num%2==0){
        printf("Entered number %d is even \n",num);
     }
else{
    printf("entered number %d is odd \n",num);

}
return 0;
}