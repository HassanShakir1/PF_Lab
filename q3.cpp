	#include<stdio.h>
	#include<string.h>
	struct employees {
		char name[50];
		char date[50];
		int employeeId;
		char department[50];
		float salary;
	};
	
	void add(struct employees *em){
		printf("\n Enter Employee name : ");
		scanf("%s",em->name);
		printf("\n Enter Date of Birth like dd/mm/yyyy");
		scanf("%s",em->date);
		printf("\n Enter employee ID : ");
		scanf("%d",&em->employeeId);
		printf("\n Enter Department");
		scanf("%s",em->department);
		printf("\n Enter Salary : ");
		scanf("%f",&em->salary);
		getchar();
	}
	
	void display(struct employees *em){
		printf("\n Name : %s",em->name);
		printf("\n Date Of Birth : %s ",em->date);
		printf("\n Employee Id : %d ",em->employeeId);
		printf("\n Department : %s",em->department);
		printf("\n Salary : %f",em->salary);
	}
	
	void remove(struct employees *em,int *count){
		int i=0;
		printf("\n Enter employee index to remove : ");
		scanf("%d",&i);
		for(int j=i;j<(*count)-1;j++){
			em[j]=em[j+1];
		}
		(*count)--;
		printf("\n Employee on index %d removed successfully ",i);
	}
	
	int main(void){
		int i=0;
		struct employees employee[10];
        while(1){
        	int j;
			printf("\n Select 1 till 4 \n 1.Add an Employee \n 2.Delete an Employee \n 3.Display All Employees \n 4.Exit");        	
			scanf("%d",&j);
			if(j>4 || j<=0){
				printf("Invalid Input try again :) : ");
				scanf("%d",&j);
			}
			if(j==1){
				add(&employee[i]);
				i++;
				printf("\n Employee added successfully ");
			}
			if(j==2){
				remove(employee,&i);
			}
			if(j==3){
				for(int k=0;k<i;k++){
				display(&employee[k]);	
				}
			}
			if(j==4){
				printf("\n GoodByee ;)");
				return 0;
			}
		}
	}

