#include<stdio.h>
int main() {
int num,arr[10];
printf("Enter numbers in array:\n");
for(int i=0;i<10;i++){
	scanf("%d",&arr[i]);
}
printf("Elements after left shift are:\n");

for(int i=1;i<10;i++){
	printf("%d ",arr[i]);
}
printf("%d",arr[0]);

  return 0;
}