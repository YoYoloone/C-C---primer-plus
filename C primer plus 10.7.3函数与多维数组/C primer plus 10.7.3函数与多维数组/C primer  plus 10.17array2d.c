#include<stdio.h>
//处理二维数组
#define ROWS 4
#define CLONES 4

void show(int ar[][ROWS]);
int main(void) {
      
	int array2[ROWS][CLONES] = {
		{1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
	};

	show(array2);

	return 0;
}
void show(int ar[][ROWS]) {
	int r;
	int c;
	int total=0;
	for (r = 0;r < ROWS;r++) {
		for (c = 0;c < CLONES;c++) {
			printf("the data is %2d \t", ar[r][c]);
			total += ar[r][c];
		}

		printf("\n");
	}
	printf("the total is %3d", total);
 }