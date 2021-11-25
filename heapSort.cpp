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

//�����󶥶� 
void swap_heap(int arr[], int i, int len){
	int k = i;	//���ڵ�
	int left = 2*i+1;	//��ڵ�
	int right = 2*i+2;	//�ҽڵ�
	
	//Ѱ�����Ľڵ��±� 
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
	//�����󶥶� 
	for(int i=parent; i>=0; i--){
		swap_heap(arr, i, len);
	} 
	//�󶥶ѹ�����ɺ����ֵ��arr[0]
	for(int j=len-1; j>0; j--){
		//�����ֵ�ŵ�ĩβ 
		swap(&arr[0], &arr[j]);
		//���¹����
		swap_heap(arr, 0, j); 
	} 
}
