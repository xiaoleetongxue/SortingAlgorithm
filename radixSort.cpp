#include<stdio.h>
#include<math.h>

void sort(int arr[], int len, int loop);

void radixSort(int arr[], int len, int max){
	int loop = 0;
	while(max!=0){
		loop++;
		max = max/10;
	}
	for(int i=1; i<=loop; i++){
		sort(arr, len, i);
	}
}

void sort(int arr[], int len, int loop){
	int buckets[10][5] = {0};
	int temp = pow(10, loop-1);
	//将数据放入桶中 
	for(int i=0; i<len; i++){
		int index = (arr[i]/temp)%10;
		for(int j=0; j<5; j++){
			if(buckets[index][j]==0){
				buckets[index][j] = arr[i];
				break;
			}
		}
	}
	//将桶中的数据倒回原数组
	int k=0;
	for(int i=0; i<10; i++){
		for(int j=0; j<5; j++){
			if(buckets[i][j] !=NULL){
				arr[k++] = buckets[i][j];
				buckets[i][j]=0;
			}
		}
	} 
}

int main(){
	int arr [] = {3,325,118,10,324,326,13,20,100,11};
    //基数排序
    radixSort(arr, 10, 326);
    for(int k=0; k<10; k++){
		printf("%d ", arr[k]);
	} 
    return 0;
}
