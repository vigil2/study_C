//반복문(iteration statement)(loop)
#include <stdio.h>

int main(void)
{
    printf("H W\n");
    printf("H W\n");
    printf("H W\n");
    printf("H W\n");
    printf("H W\n");
    printf("H W\n");
    printf("H W\n");
    printf("H W\n");
    printf("H W\n");
    printf("H W\n");
    printf("H W\n");


    // ++ = add 1


    int b = 10;

    printf("a is %d\n", ++b);
    printf("b is %d\n", b++);
    printf("b is %d\n", b);

    int i = 1;
    printf("H W%d\n", i++);
    printf("H W%d\n", i++);
    printf("H W%d\n", i++);
    printf("H W%d\n", i++);
    printf("H W%d\n", i++);
    printf("H W%d\n", i++);
    printf("H W%d\n", i++);
    printf("H W%d\n", i++);


    // loop 
    // for, while, do while

    //for (선언 ; 조건 ; 증감)
    //    (init-expression ; cond-expression ; loop-expression)

    for(int i = 1; i <= 10 ; i++)
    {
        printf("H W %d\n", i);
    }

    // while (조건) {}
    while (i<=10)
    {
        printf("hello%d\n", i++);
        // i++; 여기다 적어도 가능
    }

    // do {} while (조건);

    do {
        printf("H W %d\n", i++);
    } while (i <=10);

    // 이중반복문
    for(int i = 1 ; i <= 3; i++)
    {
            printf("%d\n", i);
        for(int j = 1 ; j <= 10 ; j++)
            {
                printf("%d\n", j);
            }   
    }

    // QUIZ 구구단 만들기 2단
    for(int g = 2, gg = 1 ; gg<=9 ; gg++ )
    printf("%d * %d = %d\n)", g, gg, g * gg);
    // Q 2단부터 9단까지
    for(int gt = 2; gt <= 9 ; gt++)
    {
        for(int h = 1; h <= 9; h++)
            {
            printf("%d * %d = %d\n", gt, h, gt*h);
            }
    }

    // * 갯수 늘리기
  
    for(int j = 1; j <= 10; j++)
    {
        for(int z = 1; z<=j; z++)
        {
                printf("*");
        }
            printf("\n");
    }

    /////// my solution??????
    // for(int c = 1; c <= 10; c++) 
        // {
        //     printf(char("*" * c));
        // }<<

    // * 갯수 늘리기 오른쪽 정렬로
    for (size_t v = 1; v <= 10; v++)
    {
        for (size_t ie = v; ie <= 9 ; ie++)
        {
            printf(" ");
        }
        for (size_t yy = 1; yy <= v; yy++)
        {
            printf("*");
        }

    
        
        printf("\n");
    }
    
    int floor;
    printf("몇층으로 쌓겠느냐?");
    scanf("%d층입니다", floor);

    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    


    return 0;
}
