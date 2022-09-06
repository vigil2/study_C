#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

// 문이 다섯개. 각 문제마다 어려운 수식 퀴즈가 출제된다.(랜덤)
// 맞히면 통과, 틀리면 실패


int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{

    srand(time(NULL));
    
    int count = 0; // 맞힌 문제 갯수
    
    for (int i = 1; i <= 5; i++)
    {
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        // printf("%d x %d 의 값은 얼마입니까?", num1, num2)를 함수로
        
        showQuestion(i, num1, num2); 
        
        int answer = -1;
        scanf("%d", &answer);
        if (answer == -1)
    {
        printf("프로그램을 종료합니다\n");
        exit(0); //break;
    }
        else if (answer == num1 * num2)
    {
        success();
        count++;
    }
    else
    {
        fail();
    }
    }

printf("\n\n 5개중 %d개를 맞췄다\n", count);

    return 0;
}

int getRandomNumber(int level)
{
    return rand() % (level * 10) + 1;
} 


void showQuestion(int level, int num1, int num2)
{
    printf("\n\n\n %d번째 비밀번호 \n\n ", level);
    printf("\n\t%d x %d는 ?\n\n?", num1, num2);
    printf("####################\n");
    printf("\n 비밀번호를 입력하세요 (종료 -1) >> ");
    
}


void success()
{
    printf("good\n");
}


void fail()
{
    printf("nono\n");
}