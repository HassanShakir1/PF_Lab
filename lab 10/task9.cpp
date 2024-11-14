#include <stdio.h>
#include <string.h>
#define max 100

struct details {
    int  id;
    char name[50];
    char department[50];
    float salary;
};



void add(int j) {
    struct details detail[j];
    for(int i=0;i<j;i++){
    printf("Enter employee id: ");
    scanf("%d", &detail[i].id);

    printf("Enter name: ");
    scanf("%s", detail[i].name);

    printf("Enter department: ");
    scanf("%s", detail[i].department);

    printf("Enter salary: ");
    scanf("%f", &detail[i].salary);
    printf("Employee added successfully!\n\n");
	}
	for (int i = 0; i < j; i++) {
        printf("%d. ID: %d, Name: %s, Department: %s , Salary: $%.2f\n",
               i + 1, detail[i].id, detail[i].name, detail[i].department, detail[i].salary);
    }
}




int main(void) {
    int n;
    printf("Employee Management System\n");
    printf("Enter number of employees");
    scanf("%d",&n);
    
    add(n);

    return 0;
}

