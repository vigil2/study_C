#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int first (int num1);
int second (int num2);
int third (int num3);
int fourth (int num4);
int fifth (int num5);
int math (int num6);


int main(void)
{

    // 문이 다섯개. 각 문제마다 어려운 수식 퀴즈가 출제된다.(랜덤)
    // 맞히면 통과, 틀리면 실패

    srand(time(NULL));
    int door = 5
    
    for (size_t i = 0; i < door; i++)
    {
        if (int first)
        {
            /* code */
        }
        
    
        
    }
    


    

     return 0;

}

int first (int num1)
{
    return (rand() %5);
}

int second (int num2)
{
    return (rand() %10);
}

int third (int num3)
{
    return (rand() %30);
}

int fourth (int num4)
{
    return (rand() %50);
}

int fifth (int num5)
{
    return (rand() %100);
}

int math (int num6)
{
    int arithmetic_operation = int rand() % 3;
    if (arithmetic_operation = 0)
    {
        return 0
    }

    else if (arithmetic_operation = 1)
    {
        return -;
    }
        
    else if (arithmetic_operation = 2)
    {
        return *;
    }

    else if (arithmetic_operation = 3)
    {
        return -;
    }
}