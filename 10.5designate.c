#include<stdio.h>
#define SIZE 7
//指定初始化器
int main(void) {
	int nums[SIZE] = {1,2,[5]=6,[1]=4,8};
	int i = 0;
	while (i < SIZE) {
		printf("the nums[%2d] is %2d\n", i, nums[i]);
		i++;
	}
	return 0;
}