#include<stdio.h>
int main(){
	int num[5]={3,5,7,8,2};
	
	for(int i=4;i<sizeof(num)/sizeof(num[0]);i--){
		printf("num[%d]=%d \n",i,num[i]);
	}	
	return 0;
}
