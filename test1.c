#include <stdio.h>

int main(void)
{
    int num, dan;
    
    printf("몇 단? ");
    scanf("%d", &dan);

    for(num=1; num<10; num++)
    {
        printf("%d*%d=%d \n", dan, num, dan*num);
    }

    return 0;
}  