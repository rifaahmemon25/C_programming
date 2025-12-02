/*Rifaah Memon
Roll No 41 UIN 251P119
COMP ENG Div D*/

#include <stdio.h>

int SumOfNumbers(int*a,int*b){
    int sum=*a+*b;
    return sum;
}
int main(){
    int num1, num2;
    printf("Enter two Numbers:");
    scanf("%d %d", &num1,&num2);
    
    printf("The Sum of the two numbers is:%d\n",SumOfNumbers(&num1,&num2));

    return 0;
}
