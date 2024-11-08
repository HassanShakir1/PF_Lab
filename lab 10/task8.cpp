#include<stdio.h>
void count(int num[],int n,int i){
	if(i<=n){
		printf("\n element %d : %d ",i+1,num[i]);
		i+=1;
	}else{
		return ;
	}
	count(num,n,i);
}
int main(void){
	int num[50],n,i=0;
	printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
	
count(num,n-1,i);
}