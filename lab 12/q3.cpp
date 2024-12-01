#include<stdio.h>
#include<stdlib.h>

void add(float** i,int* x,int* y){
	if(*x== *y){
		*y *=2;
		*i = realloc(*i, *y * sizeof(float));

	}
	printf("\n Enter Number : ");
	scanf("%f",&(*i)[*x]);
	(*x)++;
}

void display(float* i,int x){
	for(int j=0;j<x;j++){
		printf("\n Element %d : %.2f",i+1,i[j]);
	}
}

void removeLast(float** i,int* x,int* y){
	if(*x>0){
		(*x)--;
		if(*x< *y /2 && *y>4){
		*y /=2;
		*i=realloc(*i,*y * sizeof(float));
	}
	}else{
		printf("\n Array is already empty");
	}
}
void freeMemory(float* i){
	free(i);
}

int main(){
	float* arr;
	int n=4;
	arr=(float*)malloc(n * sizeof(float));
	if(arr==NULL){
		printf("\n Memory Allocation Failed ");
		return 0;
	}
	int b=0 , choice=0;
	printf("\n\nMenu:");
        printf("\n1. Add number");
        printf("\n2. Display numbers");
        printf("\n3. Remove last number");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(&arr, &b, &n);
                break;
            case 2:
                display(arr, b);
                break;
            case 3:
                removeLast(&arr, &b, &n);
                break;
            case 4:
                freeMemory(arr);
                printf("\nExiting program. Memory freed.");
                break;
            default:
                printf("\nInvalid choice! Try again.");
        }
    } while (choice != 4);
    return 0;
}
