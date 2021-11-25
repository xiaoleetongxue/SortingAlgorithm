#include<stdio.h>

void mergeSort(int arr[], int start, int end);
void merge(int arr[], int start, int mid, int end);

int main(){
	int arr[] = {8,7,2,10,3,9,4,6};
	mergeSort(arr, 0, 7);
	for(int k=0; k<8; k++){
		printf("%d ", arr[k]);
	} 
	return 0;
}

void mergeSort(int arr[], int start, int end){
	if(start >= end){
		return;
	}else{
		int mid = (start+end)/2;
		mergeSort(arr, start, mid);
		mergeSort(arr, mid+1, end);
		merge(arr, start, mid+1, end); 
	}
}

void merge(int arr[], int start, int mid, int end){
	int LEFT_SIZE = mid-start;	//左半边数组长度 
	int RIGHT_SIZE = end-mid+1;	 
	int left[LEFT_SIZE];
	int right[RIGHT_SIZE];
	
	for(int i=start; i<mid; i++){
		left[i-start] = arr[i];
	}
	
	for(int i=mid; i<=end; i++){
		right[i-mid] = arr[i];
	}
	
	//合并
	int i=0, j=0, k=start;
	while(i<LEFT_SIZE && j<RIGHT_SIZE){
		if(left[i]<right[j]){
			arr[k++] = left[i++];
		}else{
			arr[k++] = right[j++];
		}
	} 
	while(i<LEFT_SIZE){
		arr[k++] = left[i++];
	}
	
	while(j<RIGHT_SIZE){
		arr[k++] = right[j++];
	}
}
