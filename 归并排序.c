#include<stdio.h>
#define SIZE 10
#define MENMORY 100
int array_m[MENMORY];
//���β���������������ӡ��鲢����
void mergesort(int*, int, int);
void merge(int*, int, int, int);

int main(void) {
	int array[SIZE] = { 5,2,9,3,6,4,10,8,7,1 };
    mergesort(array, 0, 9);
	for (int i = 0;i <SIZE ;i++) {
		printf("%2d\t",array_m[i]);
	}
	return 0;
}

//�������ǵô�������Ϊ10��2��9��3��6��4��5��8��7��1
//Ȼ�����Ǹ���ô�֣��۰�÷ֽ⡣
//���ݷ��β���������Ҫ�����зֽ⵽����Ψһ����ֹͣ��



//���践��ֵ����Ҫ֪���ֽ��ĸ����У����п�ʼλ�ã��ֽ�λ�ã�����λ�á�
//Ӧ��˵�Ǵ��ĸ�����ʼ�����ĸ���������
void mergesort(int* array, int start, int end) {
	if (array == NULL || start >= end) {
		//printf("%3d\n", array[start]);  ������֤���ݵ�λ�ˣ����ǹ�������⡣
		return;
	}
        //�۰�ֽ�
	    int mid=(start+end)/2;
        //�ֽ⵱ǰ����ǰ����
		mergesort(array, start, mid);
		//�ֽ⵱ǰ����󲿷�
		mergesort(array, mid + 1, end);
		//�ϲ���
		merge(array, start, mid, end);

		printf("%2d\n", array[start]);
 }


//֪���������У��ϲ�ǰ���֣��ϲ��󲿷�
//���ϸ��ºϲ��Ŀ�ʼλ�ã��ͽ���λ�á�
//�������
//���ϸ��´洢�����С�
void merge(int* array, int start, int mid, int end) {
	//����ǰ�ο�ʼλ��
	int s = start;
	int m = mid + 1;
	//���º��ν���λ��
	//��Ÿ�������	
	int k = 0;
	while (s <= mid && m <= end) {
		if (array[s] < array[m]) {
			array_m[k++] = array[s++];
		}
		else {
			array_m[k++] = array[m++];
		}
	}
	while(s <= mid) {
			array_m[k++] = array[s++];
		
	}
	while(m <= end){
			array_m[k++] = array[m++];
		
	}

}



