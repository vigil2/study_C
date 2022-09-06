#include <stdio.h>
#include <unistd.h> // sleep
#include <time.h>

//레벨 함수 정의

int level; // 레벨 1~5
int waterSpeed; // 물이 줄어드는 시간
int water [6] = {100, 100, 100, 100, 100, 100}; // 어항 6개
int clearTime = 10; // 레벨당 시간
void gameStart();// 게임시작 함수


int main(void)
{
    // 게임시작
    gameStart();

    // 설계
    
    // lv 1 설정
    
    // 숫자 1을 넣고 입력을하면 계속 차게 만들면 될 것 같다.
    while (water == 0)
    {
    printf("click");
    scanf("%d", &water[ ]);    
    }
    //스피드 줄어들기
    while (water[] == 0)
    {
        sleep (2);
        water[1, 2, 3, 4, 5, 6] -= waterSpeed ;
    }

    // 0% 가 되면 물고기가 죽음
    if (water == 0)
    {
        printf("game over"); 
        sleep(2);
        printf("다시하기","나가기");
    }

    return 0;
}

void gameStart()
{
    printf("게임을 시작합니다.");
    sleep (1);
    for (size_t i = 5; i >0 ; i--)
    {
        printf("%d",i);    
        sleep (1);
    }
    printf("start");
}




//간략하게 하려하지말고 풀어쓰더라도 만들어보자