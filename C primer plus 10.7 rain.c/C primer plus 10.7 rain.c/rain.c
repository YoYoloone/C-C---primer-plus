#include<stdio.h>

#define YEAR 5
#define MOUTHS 12

//ͳ�ƴ�2015�꿪ʼ������û����ܽ�ˮ������ÿ���·ݵ��ܽ�ˮ�����Լ������ƽ����ˮ����
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
	};//����һ����ά���飬���洢����

      //�����꽵ˮ��
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