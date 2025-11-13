
/*Rifaah Memon
UIN-251P119 Rollno-41
COMPENG Div-D*/#include <stdio.h>

int factorial(int num);  
int recursive(int rec);

int recursive(int rec) {
    rec = rec * factorial(rec - 1);
    return rec;
}

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int a;
    printf("Input number: ");
    scanf("%d", &a);
    printf("The factorial is %d", recursive(a));
    return 0;
}
