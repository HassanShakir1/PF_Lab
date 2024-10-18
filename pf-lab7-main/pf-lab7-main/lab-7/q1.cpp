#include<stdio.h>
int main() {
int arr[]={1,1,1,1,1,1,5,7,7,7};
int num,found=0;
printf("Array:{1,1,1,1,1,1,5,7,7,7}\n");
printf("Enter integer to search:");
scanf("%d",&num);
for(int i=0;i<11;i++){
if(arr[i] == num){
	printf("%d fount at %d\n",num,i);
	found=1;
	break;
}
}
if(!found){
	printf("Number not found");
}
  return 0;
}
