#include<stdio.h>

void countSort(int a[], int b[], int len, int k);

void countSort(int a[], int b[], int len, int k){
	int c[k+1]={0}, i, value, index;

	for(i=0; i<len; i++){
		c[a[i]]++;	//c�����value�������±� 
	}
	
	for(i=1; i<=k; i++){	//ͳ�����˶��ٸ� 
		c[i] = c[i] +c[i-1];
	}
	
	//��ʼ���� 
	for(i=len-1; i>=0; i--){
		value = a[i];
		index = c[value];
		b[index-1] = value;	//�����±��Ǵ�0��ʼ�ģ����Լ�һ 
		c[value]--;	//������һ 
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
