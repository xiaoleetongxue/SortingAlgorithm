#include<stdio.h>

void selectSort(int arr[], int n);

int main(){
	int arr[] = {5, 9, 3, 6, 1, 4};
	selectSort(arr, 6);
	for(int i=0; i<6; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

void selectSort(int arr[], int n){
	
	for(int i=0; i<n-1; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		if(i!=min){
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}
