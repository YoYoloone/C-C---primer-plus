#include<stdio.h>

#define YEAR 5
#define MOUTHS 12

//ͳ�ƴ�2015�꿪ʼ������û����ܽ�ˮ������ÿ���·ݵ��ܽ�ˮ�����Լ������ƽ����ˮ����
int main(void) {

	int years, mouths,average,total=0;
	
	float years_total, mouths_total;

	printf("YEAR \t           YEARFALL \n");

	const float rain[YEAR][MOUTHS] = {
		{1,2,3,4,5,6,7,8,9,10,11,12},
		{1,2,3,4,5,6,7,8,9,10,11,12},
		{1,2,3,4,5,6,7,8,9,10,11,12},
		{1,2,3,4,5,6,7,8,9,10,11,12},
		{1,2,3,4,5,6,7,8,9,10,11,12},
	};//����һ����ά���飬���洢����


	

      //�����꽵ˮ��
	for (years = 0,years_total = 0;years < YEAR;years++) {
		for (mouths = 0; mouths < MOUTHS;mouths++) {

			years_total += rain[years][mouths];
		}
	
		printf("%d year total is %f\n", 2015 + years, years_total);
		total += years_total;
	}
	printf("the all years total is  %2d\n", total);
	printf("\n");
     //����ÿ�µĽ�ˮ��
	for (mouths = 0, mouths_total = 0;mouths < MOUTHS;mouths++) {
		for (years = 0;years < YEAR;years++) {
			mouths_total += rain[years][mouths];
		}
		printf("%2d mouth total is %f\n", mouths + 1, mouths_total);

	}


	return 0;
}
