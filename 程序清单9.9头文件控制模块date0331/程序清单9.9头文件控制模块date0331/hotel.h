 #pragma once
//hotel.h ͷ�ļ�
//hotel.h���ų��� and hotel.c�ļ�����
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 225.00
#define HOTEL4 335.00
#define DISCOUNT 0.95
#define STARS "****************"
//����ѡ���б�
int menu(void);
//����Ԥ������
int getnights(void);
//���ݷ��ʣ���ס�����������
//����ʾ���
void showprice(double rate, int nights);

