#include<stdio.h>

//��ָ��Ĳ���
int main(void) {
	int urn[5] = { 100,200,300,400,500 };

	int* prt1, * prt2,  * prt3;
    
	//��һ����ַ����ָ��
	prt1 = urn;
     
    //����һ��ַ����ָ��
	prt2 = &urn[2];
	                       
	//������ָ�룬�Լ���ȡָ��õ�ַ
	printf("pointer value , dereferenced pointer,pointer address:\n");

	printf("prt1=%p,*prt1=%d,&prt1=%p\n", prt1, *prt1, &prt1);
   
	//ָ��ӷ�
	prt3 = prt1 + 4;
	printf("\n nadding an int to prt1\n");
	printf("prt1+4=%p,*(prt1+4)=%d,\n", prt1+4,*(prt1+4));
    
	prt1++;//ָ�����

	printf("\n values after prt1++\n");
	printf("prt1=%p,*prt1=%d,&prt1=%p\n", prt1, *prt1, &(prt1));

	prt2--;
	printf("\n values after prt2--\n");
	printf("prt2=%p, *prt2=%d,&prt2=%p\n",prt2,*prt2,&prt2);

	prt1--;
    printf("\n values after prt1--\n");
	printf("prt1=%p,*prt1=%d,&prt1=%p\n", prt1, *prt1, &(prt1));
	prt1++;
	--prt1;
    printf("\nfrom prt1++->--prt1 values after --prt1\n");
	printf("prt1=%p,*prt1=%d,&prt1=%p\n", prt1, *prt1, &(prt1));

    //ָ���ȥ��һָ��
	printf("\n substracting one pintor to anther\n");
	printf("prt2=%p,prt1=%p,prt2-prt1=%td,look at the lost one ,it's just a integer.not a address\n",prt2,prt1,prt2-prt1);

    //ָ���ȥһ������
	printf("\n subsracting an int from a pointer:\n");
	printf("prt3=%p,prt3-2=%p\n",prt3,prt3-2);


	return 0;
}