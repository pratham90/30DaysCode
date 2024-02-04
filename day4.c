#include<stdio.h>
 int factorial( int n){
    int i;
     int fact = 1;
if(n==0 || n ==1){
    printf("factorial of %d is 1 \n",n);
}
else{
   for( i=1;i<=n;i++){
fact = fact * i;
   }
   printf("factorial of %d is %d",n,fact);
}
}
int main(){
    int fact;
    int num =5;
// printf("enter number to find factorial \n");
// scanf("%d",&num);
factorial(num);


}