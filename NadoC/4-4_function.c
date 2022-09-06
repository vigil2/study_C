#include <stdio.h>

int add (int num1, int num2);
int sub (int num1, int num2);
int mul (int num1, int num2);
int div (int num1, int num2);

int main(void)
{
    //계산기 함수
    int num = 2;
    
    num = add(num, 3);
    printf("결과는 %d입니다\n", num);

    num = sub(num, 1);
    printf("결과는 %d입니다\n", num);

    num = mul(num, 3);
    printf("결과는 %d입니다\n", num);

    num = div(num, 6);
    printf("결과는 %d입니다\n", num);

    // int add (int num1, int num2);
    // int sub (int num1, int num2);
    // int mul (int num1, int num2);
    // int div (int num1, int num2);

    return 0;
}

int add (int num1, int num2)
{
    return num1 + num2;
}

int sub (int num1, int num2)
{
    return num1 - num2;
}

int mul (int num1, int num2)
{
    return num1 * num2;
}

int div (int num1, int num2)
{
    return num1 / num2;
}