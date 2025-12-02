/*Rifaah Memon
Roll no 41 UIN 251P119
Comp eng Div-D
*/
#include <stdio.h>

struct student {
    char Name[20];
    int Roll;
    float Marks;
};

int main() {
    struct student s[5];
    int i, Topper=0;
    
    for(i=0;i<5;i++){
        printf("Enter Student's Name %d: ",i + 1);
        scanf("%s",s[i].Name);
        printf("Enter Roll Number: ");
        scanf("%d",&s[i].Roll);
        printf("Enter Total Marks: ");
        scanf("%f",&s[i].Marks);
        printf("\n");
    }
    
    for(i=1;i<5;i++) {
        if(s[i].Marks>s[Topper].Marks){
            Topper=i;
        }
    }
    
    printf("Details about Topper\n");
    printf("Name:%s\n",s[Topper].Name);
    printf("Roll Number:%d\n",s[Topper].Roll);
    printf("Marks:%f\n",s[Topper].Marks);    
    
    return 0;
}
