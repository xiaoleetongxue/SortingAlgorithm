#include<stdio.h>

void quickSort(int arr[], int start, int end);

int main(){
	int arr[] = {8,7,2,10,3,9,4,6};
	quickSort(arr, 0, 7);
	for(int k=0; k<8; k++){
		printf("%d ", arr[k]);
	} 
	return 0;
}

void quickSort(int arr[], int start, int end){
	if(start>=end){
		return;
	}
	int privot = arr[start];
	int low = start;
	int high = end;
	while(low < high){
		while(low < high && arr[high] >=privot){
			high--;
		}
		arr[low] = arr[high];
		
		while(low < high && arr[low] < privot){
			low++;
		}
		arr[high] = arr[low];
	}
	arr[low] = privot;

	quickSort(arr, start, low-1);
	quickSort(arr, low+1, end);
} 
