#include <stdio.h>

void bucketSort(int arr[], int len, int max){
	int tmpArr[max+1] = {0};
	for(int i=0; i<len; i++){
		tmpArr[arr[i]]++;
	}
	
	for(int i=0, j=0; i<max+1; i++){
		while(tmpArr[i]!=0){
			arr[j++] = i;
			tmpArr[i]--;
		}
	}
} 

int main(){
	int a[8] = {2,5,3,0,2,3,0,3};
	bucketSort(a, 8, 5);
	for(int k=0; k<=7; k++){
		printf("%d ", a[k]);
	} 
	return 0;
}
