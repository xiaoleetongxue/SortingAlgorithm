#include<stdio.h>

void swap_heap(int arr[], int i, int len);
void swap(int *a, int *b);
void heap_sort(int arr[], int len);

int main(){
	int arr[] = {3, 6, 2, 4, 2, 13, 9, 21, 11};
	heap_sort(arr, 9);
	for(int k=0; k<9; k++){
		printf("%d ", arr[k]);
	} 
	return 0;
}


void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

//构建大顶堆 
void swap_heap(int arr[], int i, int len){
	int k = i;	//父节点
	int left = 2*i+1;	//左节点
	int right = 2*i+2;	//右节点
	
	//寻找最大的节点下标 
	if(left<len && arr[left]>arr[k]){
		k = left;
	} 
	if(right<len && arr[right]>arr[k]){
		k = right;
	}
	
	if(k!=i){
		swap(&arr[k], &arr[i]);
		swap_heap(arr, k, len);
	} 
}

void heap_sort(int arr[], int len){
	int last_node = len - 1;
    int parent = (last_node-1)/2;
	//构建大顶堆 
	for(int i=parent; i>=0; i--){
		swap_heap(arr, i, len);
	} 
	//大顶堆构造完成后，最大值在arr[0]
	for(int j=len-1; j>0; j--){
		//把最大值放到末尾 
		swap(&arr[0], &arr[j]);
		//重新构造堆
		swap_heap(arr, 0, j); 
	} 
}
