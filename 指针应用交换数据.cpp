#include<iostream>
using namespace std;
void interchange(int*u , int*vu );

int main() {
	int x=1, y=10;
	cout << x <<'\t' << y << endl;
	interchange(&x,&y);               //传递进去x,y的地址
	cout << x <<'\t' << y;
	return 0;
}

void interchange(int*u, int*v ) {   //定义指针变量，传入地址，
	int temp;
	 temp = *u;
	 *u = *v;
	 *v = temp;

}
/*
可以将变量的两类信息传给函数。
function(x);这则是传递的x对应的值
function(&x);这是传递的x的地址。
两个函数内定义的参数类型都必须与传入数据类型对应。
*/
