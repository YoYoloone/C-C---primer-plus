#include<stdio.h>

//对指针的操作
int main(void) {
	int urn[5] = { 100,200,300,400,500 };

	int* prt1, * prt2,  * prt3;
    
	//将一个地址赋给指针
	prt1 = urn;
     
    //将另一地址赋给指针
	prt2 = &urn[2];
	                       
	//解引用指针，以及获取指针得地址
	printf("pointer value , dereferenced pointer,pointer address:\n");

	printf("prt1=%p,*prt1=%d,&prt1=%p\n", prt1, *prt1, &prt1);
   
	//指针加法
	prt3 = prt1 + 4;
	printf("\n nadding an int to prt1\n");
	printf("prt1+4=%p,*(prt1+4)=%d,\n", prt1+4,*(prt1+4));
    
	prt1++;//指针递增

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

    //指针减去另一指针
	printf("\n substracting one pintor to anther\n");
	printf("prt2=%p,prt1=%p,prt2-prt1=%td,look at the lost one ,it's just a integer.not a address\n",prt2,prt1,prt2-prt1);

    //指针减去一个整数
	printf("\n subsracting an int from a pointer:\n");
	printf("prt3=%p,prt3-2=%p\n",prt3,prt3-2);


	return 0;
}