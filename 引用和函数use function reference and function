//引用和函数
//定义一个函数利用引用排一下三个数

#include<iostream>
using namespace std;

void referencesort(int &,int &,int&);

int main(){

int a=3,b=2,c=1;
cout<<"排序前"<<a<<b<<c<<endl;
referencesort( a,b,c);
cout<<"排序后"<<a<<b<<c<<endl;

return 0;
}

void referencesort(int &x,int &y,int &z){

int temp;
    if(x>y){
   temp=x;
   x=y;
   y=temp;
   }
   if(x>z){
  temp=x;
  x=z;
  z=temp;
  }
  if(y>z){
   tmep=y;
   y=z;
   z=temp;
   }
}


/*

排序前：3 2 1

排序后：1 2 3
*/



