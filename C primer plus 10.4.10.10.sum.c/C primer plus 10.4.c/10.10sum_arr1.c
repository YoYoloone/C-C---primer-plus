#include<stdio.h>
#define SIZE 6
int sum(int[], int);
int sum(int*, int);
int sum(int ar[], int n);
int sum(int* ar, int n);
int main(void) {
    int array[SIZE] = { 1,2,3,4,5,6 };
    int total;
    total = sum(array, SIZE);
    printf("the array totally are %2d\n", total);
    printf("the array are %zd bytes.\n", sizeof array);//想想这里为什么是24字节
	return 0;

}

int sum(int ar[], int n) {
    int index,total=0;
    for (index = 0;index < SIZE;index++) {
        total += ar[index];
    }
    printf("the ar are %zd bytes.\n", sizeof ar);//为什么这里是8字节。
    return total;
}