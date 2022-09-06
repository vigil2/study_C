
//Condition

#include <stdio.h>

int main(void)
{
    
    // if else
    int age = 101;
    if (100 > age >= 20)
    {
        printf("일반인입니다\n");
    }
    else if (20 > age > 0)
    {
        printf("학생입니다.\n");
    }
        else
    {
        printf("?????\n");
    }
    
    int age1 = 8;
    if(age1 >= 8 && age1 <=13) // 논리연산자 &&(모두가 참 and), ||(하나라도 참이면 참 or ), !(참은 거짓으로 거짓은 참으로 not)
    {
        printf("초등학생\n");
    }
    else if (14 <= age1 <= 16) 
    {
        printf("중학생\n");
    }
    else if (17 <= age1 <=  19) 
    {
        printf("고등학생\n");
    }
    else
    {
        printf("일반인\n");
    }
    

    // break continue // 

    // break는 자신이 포함된 가장 가까운 반복문을 벗어난다
    // continue는 반복문의 끝으로 이동하여 다음 반복으로 넘어간다.
    // continue는 break문과 다르게 반복문 전체를 벗어나지 않고 다음 반복을  계속 수행할 수 있다.

    // 1 ~ 30번까지 중 1 ~ 5번까지 조별발표를 한다
    for (size_t i = 1; i < 30; i++)
    {
        if (i >= 6)
        {
        printf("나머지학생은 집에가세요\n", i);
        break; // 일단 break를 만나면 for 문을 탈출함
        }
        printf("%d번 학생은 조별발표를 하세요\n", i);

    }
    

    // 1~30번까지 있는 반에서 7번 학생은 아파서 결석
    // 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요
    for (size_t i = 1; i < 31; i++)
    {
        if(i>=6 && i<=10)
        {
            if (i == 7)
            {
                printf("%d 결석\n", i);
                continue; //
            }
            printf("%d 조별과제 발표를 하세요\n", i);
        
        }
    }

    //and or //
    // 논리연산자 &&(모두가 참 and operator), ||(하나라도 참이면 참 or operator), !(참은 거짓으로 거짓은 참으로 not operator)
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    if(a == b && c == d)
    {
        printf("a 와 b 는 같고, c 와 d도 같습니다.\n");
    }
    else
    {
        printf("값이 전혀 다르네요\n");
    }


    int e = 10;
    int f = 10;
    int g = 30;
    int h = 40;

    if(e == f || g == h)
    {
        printf("같은 값이 있습니다\n");
    }
    else
    {
        printf("값이 전혀 다르네요\n");
    }

    return 0;
}
