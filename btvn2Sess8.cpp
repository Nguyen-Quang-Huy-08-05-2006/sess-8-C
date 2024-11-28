#include<stdio.h>
int main(){
	int num[5]={3,5,7,8,2};
	int j;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d",&j);
	
	for(int i=5;i<sizeof(num)/sizeof(num[0]);i++){
		if(j!=num[i]){
			printf("khong co phan tu trong mang");
		}else{
			printf("vi tri phan tu trong mang la %d ",i+1);
		}
	}	
	return 0;
}
