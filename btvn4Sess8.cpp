	#include<stdio.h>
int main(){
	int arr[2][3]={{1,8,3},{4,5,6}};
	int max=arr[0][0];

	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
			
		}
	}
	printf("gia tri lon nhat trong mang la %d",max);

	return 0;
}
