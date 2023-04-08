 #pragma once
//hotel.h 头文件
//hotel.h符号常量 and hotel.c文件函数
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 225.00
#define HOTEL4 335.00
#define DISCOUNT 0.95
#define STARS "****************"
//返回选择列表
int menu(void);
//返回预定天数
int getnights(void);
//根据费率，入住天数计算费用
//并显示结果
void showprice(double rate, int nights);

