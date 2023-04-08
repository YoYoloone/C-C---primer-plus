#include<stdio.h>
#include"hotel.h"
/*hotel.c--酒店管理函数*/
int menu(void) {
	int code, status;
	printf("\n%s%s\n",STARS,STARS);
	printf("Enter the number of the desired hotel:\n");
	printf("1) Fairfield Arms             2)  Hotel Olympic\n");
	printf("3)Chertwortht Plaza         4)  The Stockon\n");
	printf("5) quit\n");
	printf("%s%s\n", STARS, STARS);
	while ((status = scanf_s("%d", &code)) != 1 || (code < 1 || code>5)) {
		if (status != 1) {
			scanf_s("%*s");//处理非整数输入
			printf("这里是不是有什么问题？");
		  }
		printf("Enter an integer from 1 to 5,please.\n");
	}
	return code;
}


int getnights(void) {
	int nights;
	printf("How many nights are needed?\n");
	while (scanf_s("%d", &nights) != 1) {
		scanf_s("%*s");//处理非整数输入
		printf("Please enter an integer ,such as 2.\n");
	}
	return nights;
}



void showprice(double rate, int nights) {
	int n;
	double total = 0.0;
	double factor = 1.0;
	for (n = 1;n <= nights;n++, factor *= DISCOUNT) {
		total += rate * factor;
	}

	printf("The total cosr will be $%0.2f.\n", total);

} 