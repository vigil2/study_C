
//프로젝트 : 피라미드 

#include <stdio.h>

int main(void)
{

    int floor;
    printf("몇층으로 쌓겠느냐?");
    scanf("%d", &floor);

// 내 풀이
    for (size_t i = 1; i <= floor; i++)
    {
        for (size_t fv = i ; fv < floor ; fv++)
        {
            printf("s");
        }
        for (size_t c = 1; c <= i*2; c++)
        {
            printf("*");
        }
        for (size_t rv = i ; rv < floor ; rv++)
        {
            printf("s");
        }
        printf("\n");
        
    }

    // 나도코딩 풀이
    for (size_t i = 0; i < floor; i++)
    {
        for (size_t j = i; j < floor -1 ; j++)
        {
            printf("S");
        }
        for (size_t k = 0; k < i * 2 +1 ; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
