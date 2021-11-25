#include<stdio.h>

void countSort(int a[], int b[], int len, int k);

void countSort(int a[], int b[], int len, int k){
	int c[k+1]={0}, i, value, index;

	for(i=0; i<len; i++){
		c[a[i]]++;	//c数组把value当数组下表 
	}
	
	for(i=1; i<=k; i++){	//统计排了多少个 
		c[i] = c[i] +c[i-1];
	}
	
	//开始排序 
	for(i=len-1; i>=0; i--){
		value = a[i];
		index = c[value];
		b[index-1] = value;	//数组下标是从0开始的，所以减一 
		c[value]--;	//个数减一 
	} 
}

int main(){
	int a[8] = {2,5,3,0,2,3,0,3}, b[8], i;
	countSort(a, b, 8, 5);
	for(int k=0; k<=7; k++){
		printf("%d ", b[k]);
	} 
	return 0;
}
