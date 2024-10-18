#include<stdio.h>
int main() {
int arr[12],sumArray[6];
printf("Enter numbers in array:\n");
for(int i=0;i<12;i++){
	scanf("%d",&arr[i]);
}

printf("After sum array =\n");
for(int i=0;i<6;i++){
	sumArray[i] = arr[2 * i] + arr[2 * i + 1];
	printf("%d ",sumArray[i]);
}


  return 0;
}