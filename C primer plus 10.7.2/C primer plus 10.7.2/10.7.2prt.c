#include<stdio.h>
//指针兼容性
#define CLONE 4
#define ROW 4
int main(void) {

	int arrayone[ROW][CLONE] = {
		{1,2,3,4},
	    {1,2,3,4},
        {1,2,3,4},
		{1,2,3,4}
	};
	int arraytwo[ROW][CLONE] = {
		{1,2,3,4},
	    {1,2,3,4},
        {1,2,3,4},
		{1,2,3,4}
     };
	 //指针类型
	int* prt;
	double* pint;
	int data = 2;
	double datas = 2.55;
	int(*pat)[4];   //指向内含四个int数据的指针
	int arr1[2][4];
	int(*pit)[2];   //指向内含两个int数据的指针
	int** pionter;  //指向指针的指针
	//指针兼容性，实践
	prt = &data;
	prt = &datas;   //double类型数据地址赋值给int 类型指针
    
	pint = &data;   //int 类型数据地址赋值给double类型指针
	pint = &datas;
    
	pat = arrayone;  
	pat = &arrayone; //arrayone不就是地址，我们再取地址，那这个意思就是，存储该地址的地址
	                 //就是说，&arrayone与pat不是同一类型。无法进行赋值
	pat = &arr1;
	pat = arr1;
	pit = arrayone;
	pit = &arrayone;
    
	pionter = pat;  //这里同理，pionter是指向指针的指针，我们可以将其形式改写为
	                //改写为：int (*pionter)*(这是我自己的杜撰的）；类似于int (*pionter)[4];所以二者所指类型是不同的
	 
	//const类型(一句话，不要把可修改的东西的地址，赋值给可修改该值的地址）
	const int number = 1;
	int* change;
	change = number;

	//总之解多重引用非常麻烦
    /*另外，在C与C++中，指针的兼容性（对于const而言），还有所差异，在C中，
     我们将const指针赋值给非const指针，C编译器，只会发出警告，但是在C++中，
	 这样做是不允许的。
	 而且，我们将const指针赋值给了非const指针，我们对指针所指向的指针进行修改，得到的值是未定义的。（未知的）

	*/

	





 
 return 0;
}

void show(int* prt, int n) {


}