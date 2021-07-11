#include <stdio.h>

int main(void)
{
    int num;

    printf("월의 날 수? \n");
    scanf("%d", &num);

    if(num==1 || num == 3 || num == 5 || num ==7 || num ==8 || num ==10 || num ==11)
    printf("31 \n");

    else if(num==4 || num ==6 || num ==9 || num ==12)
    printf("30 \n");

    else if(num==2)
    printf("28 \n");

    return 0;

}