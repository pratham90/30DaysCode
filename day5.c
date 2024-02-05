#include<stdio.h>
int main(){
    int term1 = 0;
    int term2 =1;
    int nextTerm =term1 + term2;
    int num = 10;
    printf("fibonacci series \n %d \n %d \n ", term1, term2);
    for(int i =3;i<=num;i++){
     printf("%d \n",nextTerm);
     term1=term2;
     term2 =nextTerm;
     nextTerm = term1 + term2;
    }
    return 0;
} 