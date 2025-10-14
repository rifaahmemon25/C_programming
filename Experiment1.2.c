/*
Name: Rifaah Memon
UIN: 251P119
Class: Comp Eng-D
*/
#include <stdio.h>

int main() {
   int lim;
   int sum=0;
   printf("Enter the Limit:");
   scanf("%d",&lim);
   for(int i=0;i<=lim;i++){
       
       if(i%2!=0){
           sum+=i;
       }
   }
   printf("sum of odd is %d",sum);
   
    return 0;
}
