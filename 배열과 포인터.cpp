#include<stdio.h>

int main(){
	int x = 5;
	int *p = &x;
	int t = *(p+2);
	int arr[6] = {1,2,3,4,5,6};
//	printf("�����÷����� : %d\n", t);
	printf("�����÷����� : %d\n", &x);
	printf("�����÷����� : %d\n", &x+1);
	printf("�����÷����� : %d\n", arr+2);
	printf("�����÷����� : %d\n", arr[1]);
	printf("�����÷����� : %d\n", *(arr+1));
} 
