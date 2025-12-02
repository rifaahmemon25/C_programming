/*Rifaah Memon
ROLl no 41 UIN 251P119
COMPS div D*/
#include <stdio.h>
struct Employee {
    int ID;
    char Name[50];
    float Salary;
};

int main() {
    struct Employee e; 
    FILE*fp;
    int choice;
    do{
    printf("\nEMPLOYEE DATABASE MENU\n");
    printf("!. Add Employee\n");
    printf("2. Display Employees\n");
    printf("3. Exit\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        fp=fopen("employee.txt","a");
        printf("Enter Employee ID:");
        scanf("%d", &e.ID);
        printf("Enter Name:");
        scanf("%s", e.Name);
        printf("Enter Salary:");
        scanf("%f", &e.Salary);
        fprintf(fp, "ID:%d|Name:%s|Salary:%f\n",e.ID,e.Name,e.Salary);
        fclose(fp);
        printf("Employee Added Successfully!\n");
        break;
        case 2:
        fp=fopen("employee.txt","r");
        if (fp== NULL){
        }
        printf("No employee records found.\n");
        break;
        printf("\nEMPLOYEE RECORDS\n");
        while(fscanf(fp,"ID:%d | Name:%s | Salary:%f\n",&e.ID,e.Name,&e.Salary) !=EOF){
        printf("ID:%d | Name:%s | Salary:%f\n",e.ID,e.Name,e.Salary);    
        }
        fclose(fp);
        break;
        case 3:
        printf("Exicting Program.....\n");
        break;
        default:
        printf("\nInvalid choice. Try Again.\n");
        
    }
    }
   while(choice !=3);

    return 0;
}
