#include <stdio.h>


 // 함수의 종류
 // 반홥값이 없는 함수 without retrun value (void)
 // 반환값이 있는 함수 with    retrun value (int, double, float..)
 // 전달값이 없는 함수 without parameter
 // 전달값이 있는 함수 with    ㅏㅁ수
 // with return value & parameter

void p(int numnum); // 이전에 했었던 함수
void function_without_return(); // without retrun value
int function_with_return(); // without retrun value
void function_without_params(); // without parameter
void function_with_params(int no1, int no2, int no3); // with parameter
int apple(int all, int eat ); // with return value & parameter


int main(void)
{
    // without retrun value
    function_without_return();
    
    // with retrun value
    int ret = function_with_return(); // 반홥값이 있어서 받아줘야함
    // 반환값이 잘 나오는지 확인
    p(ret); 
    // 반환값이 잘 나오는지 확인 2
    printf("%d\n",ret);
    
    // without parameter
    function_without_params();
    
    // with parameter
    function_with_params(35, 25, 15);
    
    // with return value & parameter
    int both = apple(5, 2); // 5개 사과중에서 2개를 먹었어요.    
    printf("사과는 몇개가 남았을까요? %d가 남았겠죠\n", both);
    printf("사과 %d개 중에 %d개를 먹으면? %d개가 남아요\n", 10, 4, apple(10,4)); // apple 이란 함수를 직접 호출


    return 0;
}


void p(int numnum) // 정의  // p = 함수의 이름 (전달값)
{
    printf("return value는 %d입니다\n", numnum);
}

// without retrun value
void function_without_return()
{
    printf("반환값이 없는 함수입니다.\n");
}

// with retrun value
int function_with_return()
{
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}

// without parameter
void function_without_params()
{
    printf("전달값이 없는 함수입니다.\n");
}

// with parameter
void function_with_params(int no1, int no2, int no3)
{
    printf("전달값이 있는 함수입니다. parameters are  %d, %d, %d \n", no1, no2, no3);
}

// with return value & parameter
int apple(int all, int eat) // 5개 사과중에서 2개를 먹었어요. 
{   
    printf("전달값과 반환값이 있는 함수입니다.\n");
    printf("총 갯수는 %d개, 먹은 갯수는 %d개, 남은 갯수는 %d개\n", all, eat, all-eat);   
    return all-eat;
}