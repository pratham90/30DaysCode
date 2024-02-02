#include<stdio.h>
int main(){
    char name[100];
    int a;
    printf("Enter your name \n");
    scanf("%s",&name);
    
    printf("Enter your age \n");
    scanf("%d",&a);
printf("welcome %s your age is %d",name ,a);
return 0;
}