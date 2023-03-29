#include<stdio.h>
#define SIZE  10        //宏定义 这是一个很好的编程习惯，要是后面想改变数组的大小，只需要改这里就行了。记住这是一个编程的好习惯。
#define PAR 72

int mian(){

int index,score[SIZE];
int sum=0;

float average;
printf("Enter %d golf score:\n", SIZE);

for( index=0; index<SIZE;index++){         //通过index<SIZE,控制数组边界，从零开始，最大为SIZE-1。

scanf("%d",&score[index]);

}

printf("the scores read is are as follows:\n");  //这也是一个很好的编程习惯，随时跟进数据监测。
for(index=0;index<SIZE;index++){

printf("%5d",score[index]);       

}


return 0；
}


//这个程序是没有写完的，


