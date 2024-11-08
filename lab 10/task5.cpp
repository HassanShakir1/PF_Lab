#include<stdio.h>
int count(int num[],int i,int sum){
	if(i>=0){
		sum+=num[i];
		i-=1;
	}else{
		return sum;
	}
	count(num,i,sum);
}
int main(void){
	int num[50],n;
	printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
	int sum=0;
	
	printf("\n %d",count(num,n,sum));
}