#include<stdio.h>
#define SIZE 10
#define MENMORY 100
int array_m[MENMORY];
//分治策略生动形象的例子《归并排序》
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

//假设我们得待排序列为10，2，9，3，6，4，5，8，7，1
//然后我们该怎么分，折半得分解。
//根据分治策略我们需要将序列分解到长度唯一，才停止。



//无需返回值，需要知道分解哪个序列，序列开始位置，分解位置，结束位置。
//应该说是从哪个数开始，到哪个数结束。
void mergesort(int* array, int start, int end) {
	if (array == NULL || start >= end) {
		//printf("%3d\n", array[start]);  输出结果证明递到位了，但是归存在问题。
		return;
	}
        //折半分解
	    int mid=(start+end)/2;
        //分解当前问题前部分
		mergesort(array, start, mid);
		//分解当前问题后部分
		mergesort(array, mid + 1, end);
		//合并解
		merge(array, start, mid, end);

		printf("%2d\n", array[start]);
 }


//知道操作序列，合并前部分，合并后部分
//不断更新合并的开始位置，和结束位置。
//如何排序。
//不断更新存储得序列。
void merge(int* array, int start, int mid, int end) {
	//更新前段开始位置
	int s = start;
	int m = mid + 1;
	//更新后半段结束位置
	//存放更新数据	
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



