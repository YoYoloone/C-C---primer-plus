#求N的阶乘，因为别的哥们还不会，所以只能先写这个看看了

#include<iostream>
using namespace std;
 
 int main(){

 int n;
 cout<<"input a integer number:";
 cin>>n;
 cout<<n<<"!="<<fac(n)<<endl;//函数调用
 return 0;
 }
 
 //函数定义
 int fac(int n){
if(n==1){
return 1;
       }
else
return n*fac(n-1);

  statements 2 
  //在递进到最后一层，回归时，对应层级的statement 2永远不会执行。
               }
 
 
