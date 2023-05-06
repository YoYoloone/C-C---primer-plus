#include<stdio.h>
#include<string.h>
char* s_gets(char*, int);
#define MAXTITL 41
#define MAXAUTL 31
//定义book结构体
struct book {//书名，作者，价格，但是我们知道现实的一本书所包含的信息远不止这些。但是我们在这里简化为这样
	char title[MAXTITL];
	char autor[MAXAUTL];
	float value;
};

int main(void) {
	struct book library;
	printf("please enter the book title:");
	s_gets(library.title, MAXTITL);//新函数，这与书上的函数有所不同。
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
	ret_val = fgets(st, n, stdin);//记住这个函数什么意思？
	if (ret_val) {
		find = strchr(st, '\n');//查找换行符
		if (find) {             //如果地址不是NULL
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


//掌握结构体的三个关键步骤：第一为结构体建立一个格式或样式；第二声明一个符合样式的变量；第三访问结构变量的各个部分。




