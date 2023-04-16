#include<stdio.h>
#define SIZE 5
#define ROW 5
#define CLONE 5
void showdd(int*, int);
void showdata(int*);
int main(void) {

    
    int array[ROW][CLONE] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,2,3,4,5},
        {1,2,3,4,5}
    };
   
    
    printf("array+0 \t address is %5p the value is %2p\n", array ,array);
    printf("array[0] \t address is %5p the value is %2p\n", &array[0], &array[0]);
    printf("array[0][0] \t address is %5p the value is %2d \n", &array[0][0], array[0][0]);

    printf("array[1][0] \t address is %5p the value is %2d\n", &array[1][0], array[1][0]);
    printf("array+1 \t address is %5p,the value is %2p\n", array + 1,array+1);
    printf("array[1][1] \t address is %5p,the value is %2d\n", &array[1][1],array[1][1]);
	printf("array[1] \t address is %5p the value is %2p\n", array[1], array[1]);
     
    printf("**array \t  is %5d \n", **array);
    printf(" *array[0] \t  is %5d\n", *array[0]);
    printf("  array[1][0] \t is %5d\n", array[1][0]);
	printf(" *array[1] \t is %5d \n", *array[1] );
    





    return 0;

}
void showdd(int* prt, int n) {
    printf("move is %2d,the value is %2d\n",n , *prt+n);


}
void showdata(int* prt) {
    printf("the data is %2d",*prt);
}