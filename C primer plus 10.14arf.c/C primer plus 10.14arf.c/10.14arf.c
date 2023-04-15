//处理数值函数
#include<stdio.h>
//一个只需要输出数组数据，一个需要修改数据。
#define SIZE 6
void show(const int arr[], int n);
void add(int arr[], int n);
int main(void) {
    int array[SIZE] = { 1,2,3,4,5,6 };
    
    //调用打印
    show(array, SIZE);
    //调用修改
    add(array, SIZE);

	return 0;
}

void show(const int arr[], int n) {
    int index;
    for (index = 0;index <n ;index++) {
        printf("arr data is %2d\n", arr[index]);
    }
    printf("this is show data\n");
}

void add(int arr[], int n) {
    int index;
    for (index = 0;index < n;index++) {
        arr[index] = arr[index] * 2;
        printf(" this data is %2d\n",arr[index]);
    }
    printf("this is data add");
}



