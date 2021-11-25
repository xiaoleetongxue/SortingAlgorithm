#include<stdio.h>

void shellSort(int arr[], int n);

int main(){
	int arr[] = {84, 83, 88, 87, 61, 50, 70, 60, 80, 99};
	shellSort(arr, 10);
	for(int i=0; i<10; i++){
			printf("%d ", arr[i]);
		} 
	return 0;
}

void shellSort(int arr[], int n){
	int gap = n/2;
	int count = 1;
	while(gap>0){
		for(int i=gap; i<n; i++){
			int current = arr[i];
			int preIndex = i-gap;
			while(preIndex>=0 && arr[preIndex]>current){
				arr[preIndex+gap] = arr[preIndex];
				preIndex = preIndex-gap;
			}
			arr[preIndex+gap] = current;
		}
		gap = gap/2;
	}
}
