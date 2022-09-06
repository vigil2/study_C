#include <time.h> // time 함수가 포함되어있는 헤더파일
#include <stdlib.h> // time.h 로 랜덤함수가 안되는 사람만 사용??
// srand, rand 함수가 포함되어있는 헤더파일
#include <stdio.h> 

int main(void)
{
    // rand() % 어떤 수 ex) 3을 넣으면 0 ~ 2 사이의 값 중 하나를 뽑음
    // srand(time(NULL)); // 난수 초기화
    // int num = rand() % 3+1 // 1 ~ 3 
    
    printf("난수 초기화 이전..\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d", rand() %10);
    }

    srand(time(NULL)); // 난수 초기화
    printf("\n\n난수 초기화 이후..\n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d", rand()%10);
    }

    return 0;
}