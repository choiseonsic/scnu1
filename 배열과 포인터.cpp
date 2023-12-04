#include<stdio.h>

int main(){
	int x = 5;
	int *p = &x;
	int t = *(p+2);
	int arr[6] = {1,2,3,4,5,6};
//	printf("변수플러스일 : %d\n", t);
	printf("변수플러스일 : %d\n", &x);
	printf("변수플러스일 : %d\n", &x+1);
	printf("변수플러스일 : %d\n", arr+2);
	printf("변수플러스일 : %d\n", arr[1]);
	printf("변수플러스일 : %d\n", *(arr+1));
} 
