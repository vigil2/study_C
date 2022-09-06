#include <time.h>
#include <stdlib.h> // time.h 로 랜덤함수가 안되는 사람만 사용
#include <stdio.h>

int main(void)
{
    // srand(time(NULL)); // s = seed 라는 뜻으로 이 seed에 따라 rand 값이  바뀌게 됩니다.
    // int i = rand() % 3;

    // if (i == 0)
    // {
    //     printf("가위\n");
    // }
    // else if (i == 1)
    // {
    //     printf("바위\n");
    // }
    // else if (i == 2)
    // {
    //     printf("보\n");
    // }
    // else
    // {
    //     printf("몰라요\n ");
    // }
    
    //switch case 
    // (값)을 받아서 값을 경우에 맞도록 출력함

    // expression은 수식이라는 뜻으로 하나이상의 값으로 표현(reduce)될 수 있는 코드를 말한다.
    // 핵심은 expression는 평가(evaluate)가 가능해서 하나의 "값"으로 환원된다는 것이다
    // statement, 진술 서술 이라는 의미로 프로그래밍에서는 실행가능한(excutalbe) 최소의 독립적인 코드 조각을 일컫는다. 
    //핵심은 statement는 평가(evaluate)가 가능해서 하나의 값으로 환원된다는 것이다.
    
    srand(time(NULL));
    int e = rand() %3;
    switch (e)
    {
    case 0:
        printf("가위\n"); 
        break; 
    case 1:
        printf("바위\n"); 
        break;
    case 2:
        printf("보\n"); 
        break;
    default:
        printf("몰라요\n");
        break;
    }
    
    // 3-1 에서 가져옴 이것을 swrich로 바꾼다면
    
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

    srand(time(NULL));
    int age = 19;
    switch (age)
    {
    case 8 : 
    case 9 : 
    case 10 : 
    case 11 : 
    case 12 :
    case 13 : printf("초등학생입니다.\n"); break;
    case 14 :  
    case 15 :  
    case 16 : printf("중학생입니다\n"); break;
    case 17 :  
    case 18 :  
    case 19 : printf("고등학생입니다\n"); break;
    default : printf("몰라요\n");
    }

//프로젝트 Up and Down game


// 내 풀이

    srand(time(NULL));
    int no = rand() %100 +1; // = 1 ~ 100
    int input;
    int cc = 5;

    printf("숫자 :  %d\n", no); 
    
    for (size_t i = 0; i < cc; i++)
    {
        printf("값을 입력하세요\n");
        scanf(" %d", &input);
        
        if (no > input)
        {
            printf("up\n");
        }
        
        else if (no < input)
        {
            printf("down\n");

        }
        else if (no == input)
        {
            printf("정답입니다\n");
            break;
        }

        if (i == 4)
        {
            printf("탈락\n");
        }
    }
        
// 나도코딩 풀이

    srand(time(NULL));
    int num = rand() %100 +1; // = 1 ~ 100
    int answer;
    int chance = 10;

    while(1)  // while(chance > 0) 대신 1을 넣음?????
    // 1 = 참, 0 = 거짓 -> 참일때는 항상 while 문을 수행하도록 되어있음.
    {
        printf("남은기회 %d \n", chance--);
        printf("숫자를 맞춰보세요 (1 ~ 100) : ");
        scanf("%d", &answer);

        if (answer > num)
        {
            printf("down \n\n");
        }
        else if (answer < num)
        {
            printf("up\n\n");
        }
        else if (answer == num)
        {
            printf("right\n\n");
            break;
        }
        else
        {
            printf("error\n\n");
        }
        if (chance == 0)
        {
            printf("실패");
            break;
        }
    }

    return 0;
}
