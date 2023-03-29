
#include<iostream>
using namesapce std;


int mian()
{

countdown(4);//函数调用     //call the recursive function

return 0;
}

//函数定义
void countdown (int n)
{
cout <<"Counting down..."<<n<<endl;
if(n>0)
     {
     countdown(n-1);      //function calls-itself
     }
     cout<< n << ": kaboom!\n;
}



//输出结果

//Counting down ...4    <level 1; adding levels of recursion
//Counting down ...3    <level 2
//Counting down ...2    <level 3
//Counting down ...1    <level 4
//Counting down ...0    <level 5;final recursion call
//0:kaboom!             <level 5;beginning to back out 
//1:kaboom!             <level 4
//2:kaboom!             <level 3
//3:kaboom!             <level 2
//4:kaboom!             <level 1

  //相同层级的变量地址是一样的，为什么一样，因为在同一层级，函数体内使用的是传进来的同一个变量
  //变量实际上就是地址，传进来的是同一个地址，在地址所对应的数据没有覆盖之前，对应的值也是相同的。
