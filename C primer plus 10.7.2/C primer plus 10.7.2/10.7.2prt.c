#include<stdio.h>
//ָ�������
#define CLONE 4
#define ROW 4
int main(void) {

	int arrayone[ROW][CLONE] = {
		{1,2,3,4},
	    {1,2,3,4},
        {1,2,3,4},
		{1,2,3,4}
	};
	int arraytwo[ROW][CLONE] = {
		{1,2,3,4},
	    {1,2,3,4},
        {1,2,3,4},
		{1,2,3,4}
     };
	 //ָ������
	int* prt;
	double* pint;
	int data = 2;
	double datas = 2.55;
	int(*pat)[4];   //ָ���ں��ĸ�int���ݵ�ָ��
	int arr1[2][4];
	int(*pit)[2];   //ָ���ں�����int���ݵ�ָ��
	int** pionter;  //ָ��ָ���ָ��
	//ָ������ԣ�ʵ��
	prt = &data;
	prt = &datas;   //double�������ݵ�ַ��ֵ��int ����ָ��
    
	pint = &data;   //int �������ݵ�ַ��ֵ��double����ָ��
	pint = &datas;
    
	pat = arrayone;  
	pat = &arrayone; //arrayone�����ǵ�ַ��������ȡ��ַ���������˼���ǣ��洢�õ�ַ�ĵ�ַ
	                 //����˵��&arrayone��pat����ͬһ���͡��޷����и�ֵ
	pat = &arr1;
	pat = arr1;
	pit = arrayone;
	pit = &arrayone;
    
	pionter = pat;  //����ͬ��pionter��ָ��ָ���ָ�룬���ǿ��Խ�����ʽ��дΪ
	                //��дΪ��int (*pionter)*(�������Լ��Ķ�׫�ģ���������int (*pionter)[4];���Զ�����ָ�����ǲ�ͬ��
	 
	//const����(һ�仰����Ҫ�ѿ��޸ĵĶ����ĵ�ַ����ֵ�����޸ĸ�ֵ�ĵ�ַ��
	const int number = 1;
	int* change;
	change = number;

	//��֮��������÷ǳ��鷳
    /*���⣬��C��C++�У�ָ��ļ����ԣ�����const���ԣ������������죬��C�У�
     ���ǽ�constָ�븳ֵ����constָ�룬C��������ֻ�ᷢ�����棬������C++�У�
	 �������ǲ�����ġ�
	 ���ң����ǽ�constָ�븳ֵ���˷�constָ�룬���Ƕ�ָ����ָ���ָ������޸ģ��õ���ֵ��δ����ġ���δ֪�ģ�

	*/

	





 
 return 0;
}

void show(int* prt, int n) {


}