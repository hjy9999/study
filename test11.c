#include <stdio.h>

int main(void)
{
    int num;
    printf("정수 입력 값: ");
    scanf("%d", &num);

    if(num==0)
    printf("zero  \n");

    if(num>0)
    printf("plus \n");
    
    if(num<0)
    printf("minus \n");

    return 0;
}