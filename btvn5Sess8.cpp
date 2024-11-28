#include <stdio.h>
int main(){
	int num[3][4]={{1,9,6,8},{4,5,7,9},{5,9,7,8}};
	int i = 0 , j;
	int sum=0;
	
	while(i<3){
    	j=0;
        while(j<4){
        	if(i==0||i==2||j==0||j==3){
        		sum+=num[i][j];
			}
			j++;
        }
        i++;
    }
    printf("tong duong bien la %d",sum);
	return 0;
}
