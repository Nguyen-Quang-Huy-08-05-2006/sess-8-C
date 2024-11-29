#include<stdio.h>
int main(){
	int m,n;
	printf("nhap vao 1 so nguyen");
	scanf("%d",&m,&n);
	int arr[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
			arr[i][j]=i;
		}
	}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
