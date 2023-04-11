#include<stdio.h>
#define SIZE 7 
// 定义指针参数对数组进行操作

int sump(int*, int*);

int main(void) {
	int array[SIZE] = { 1,2,3,4,5,6,7 };
	sump(array, array+SIZE);
	return 0;
}

int sump(int* start, int* end) {

	int total = 0, index;
	for ( start;start < end;start++) {
		total += *start;
	}
	printf("the total is %2d\n", total);

	while(start<end){

		total += *start;
		start++;
	}
	printf("the total is %2d.\n", total);
	
	return total;
}


