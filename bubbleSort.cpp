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
	for(int i=0; i<n-1; i++){	//�Ƚ�����
		for(int j=0; j<n-i-1; j++){	//ÿ�˽�������Ԫ�رȽ�
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

//���ӱ�־λ 
void bubbleSort2(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int flag = 0;	//��־λ
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag=1;		//�����˽��� 
			}
		}
		if(flag==0){	//û�з�������������������
			break;
		}
	}
}
