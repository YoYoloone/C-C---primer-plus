#include<stdio.h>

#define YEAR 5
#define MOUTHS 12

//统计从2015年开始以来，没年的总降水量，和每个月份的总降水量，以及五年的平均降水量。
int main(void) {

	int years, mouths,average,total=0;
	
	double years_total, mouths_total;

	printf("YEAR   YEARFALL \n ");

	const float rain[YEAR][MOUTHS] = {
		{1,2,3,4,5,6,7,8,9,10,11,12},
		{1,2,3,4,5,6,7,8,9,10,11,12},
		{1,2,3,4,5,6,7,8,9,10,11,12},
		{1,2,3,4,5,6,7,8,9,10,11,12},
		{1,2,3,4,5,6,7,8,9,10,11,12},
	};//定义一个二维数组，来存储数据

      //计算年降水量
	for (years = 0, years_total = 0;years < YEAR;years++) {
		for (mouths = 0, mouths < MOUTHS;mouths++;) {

			printf("%2d ", rain[years][mouths]);
			years_total += rain[years][mouths];
		}
	
		printf("%2d year total is %2f\n", 2015 + years, years_total);
		total += years_total;
	}
	printf("the all years total is  %2d", total);


	return 0;
}