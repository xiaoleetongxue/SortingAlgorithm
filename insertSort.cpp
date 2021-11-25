#include<stdio.h>

void insertSort(int arr[], int n);

int main(){
	int arr[] = {3, 9, 2, 6, 5, 4};
	insertSort(arr, 6);
	for(int k=0; k<6; k++){
		printf("%d ", arr[k]);
	} 
	return 0;
}

void insertSort(int arr[], int n){
	for(int i=1; i<n; i++){
		int current = arr[i];	//´ý²åÈëÔªËØ
		int preIndex = i-1;
		while(preIndex>=0 && arr[preIndex]>current){
			arr[preIndex+1] = arr[preIndex];
			preIndex--;
		}
		arr[preIndex+1] = current;
	}
}
