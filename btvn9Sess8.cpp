#include <stdio.h>
int main(){
	int arr[]={1,2,3,4,5,7,9,2,6,9,1,2,3,23};
	int max;
	int maxcount;
	int length = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<length;i++){
		int count=0;
		for(int j=0;j<length;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count>maxcount){
			maxcount=count;
			max=arr[i];
		}
	}
	printf("%d xuat hien nhieu nhat voi so lan %d ",max,maxcount);
	
	return 0;
}
