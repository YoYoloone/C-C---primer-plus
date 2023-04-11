#include<stdio.h>
#define SIZE 11 
// 定义指针参数对数组进行操作

int sump(int*, int*);

int main(void) {
	int array[SIZE] = { 1,2,3,4,5,6,7 };
	sump(array, &array[7]);
		
		
		
		
		
	
	return 0;
}

int sump(int* start, int* end) {

	int total = 0, index;
	for (index = start;index <start+ SIZE;index++) {
		total += *start;
		start++;
}
	printf("the total is %2d.\n", total);
	return total;
}



