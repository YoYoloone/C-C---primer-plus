#include<stdio.h>
#include<string.h>
char* s_gets(char*, int);
#define MAXTITL 41
#define MAXAUTL 31
//����book�ṹ��
struct book {//���������ߣ��۸񣬵�������֪����ʵ��һ��������������ϢԶ��ֹ��Щ�����������������Ϊ����
	char title[MAXTITL];
	char autor[MAXAUTL];
	float value;
};

int main(void) {
	struct book library;
	printf("please enter the book title:");
	s_gets(library.title, MAXTITL);//�º������������ϵĺ���������ͬ��
	printf("\nenter the book's autor:");
	s_gets(library.autor, MAXAUTL);
	printf("\nenter the book's value:");
	scanf_s("%f", &library.value);
	printf("%s by %s is %lf\n ", library.title, library.autor, library.value);
	printf("%s:\"%s\"($%2f)\n", library.autor, library.title, library.value);
	printf("Done.\n");
	return 0;
}

char* s_gets(char* st, int n) {
	char* ret_val;
	char* find;
	ret_val = fgets(st, n, stdin);//��ס�������ʲô��˼��
	if (ret_val) {
		find = strchr(st, '\n');//���һ��з�
		if (find) {             //�����ַ����NULL
			*find = '\0';
		}
		else {
			while (getchar() != '\n') {
				continue;
			}
		}
		return ret_val;
	}
}


//���սṹ��������ؼ����裺��һΪ�ṹ�彨��һ����ʽ����ʽ���ڶ�����һ��������ʽ�ı������������ʽṹ�����ĸ������֡�




