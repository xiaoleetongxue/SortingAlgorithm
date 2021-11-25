#include<stdio.h>

void bubbleSort(int arr[], int n);
void bubbleSort2(int arr[], int n);

int main(){
	int arr[] = {3, 6, 2, 4, 2, 13, 9, 21, 11};
	//bubbleSort(arr, 9);
	bubbleSort2(arr, 9);
	for(int i=0; i<9; i++){
		printf("%d ", arr[i]);
	} 
	return 0;
}


void bubbleSort(int arr[], int n){
	for(int i=0; i<n-1; i++){	//比较趟数
		for(int j=0; j<n-i-1; j++){	//每趟进行相邻元素比较
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

//增加标志位 
void bubbleSort2(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int flag = 0;	//标志位
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag=1;		//发生了交换 
			}
		}
		if(flag==0){	//没有发生交换，数组已有序
			break;
		}
	}
}
