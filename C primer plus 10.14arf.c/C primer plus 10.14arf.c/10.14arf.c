//������ֵ����
#include<stdio.h>
//һ��ֻ��Ҫ����������ݣ�һ����Ҫ�޸����ݡ�
#define SIZE 6
void show(const int arr[], int n);
void add(int arr[], int n);
int main(void) {
    int array[SIZE] = { 1,2,3,4,5,6 };
    
    //���ô�ӡ
    show(array, SIZE);
    //�����޸�
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



