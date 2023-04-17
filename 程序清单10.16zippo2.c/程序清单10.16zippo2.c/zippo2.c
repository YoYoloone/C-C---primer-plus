#include<stdio.h>
#define SIZE 6
#define ROW 4
#define CLONE 4
void show(int(*)[4], int,int);
int main(void) {

	int array[ROW][CLONE] = {
		{1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
	};
	

	show(array, ROW,CLONE);


	return 0;
}
void show(int(*prt)[4], int n, int m) {
	int index;
	int indexs;
	for (index = 0;index <ROW;index++) {
		for (indexs = 0;indexs < CLONE;indexs++) {
		printf("the array data is %2d\n",*(*(prt+index)+indexs));
		}
		printf("\n");
	}
	printf("the end\n");
}