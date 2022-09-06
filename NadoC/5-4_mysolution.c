#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h> // sleep


int main(void)
{
    // 아빠는 대머리 게임
    printf("\n\n == 아빠는 대머리 게임 == \n\n");
    printf("1, 2, 3, 4가 있습니다.\n어느것이 발모제일까요?\n\n");
    srand(time(NULL));

    int treatment = rand() % 4; // 발모제 선택 (0 ~ 3)
    int answer; // 사용자 입력값
    int show = 0; // 2개씩 대머리에 몇번 뿌리는지 확인
    
    // int arr[4] = {0, 1, 2, 3}; // 네개 중 하나는 발모제
    int two[2]; // 2개 뽑기 선언

    
    for (size_t i = 0; i < 5; i++) // 2개를 뽑아 대머리에 발라보기
    {
     
        for (size_t j = 0; j < 2; j++)  // 4개중 2개를 뽑기
        {
            two[j] = (rand() % 4); // two의 초기화

            for (size_t jj = 0 ; jj < j ; jj++)
            {
                if (two[j] == two[jj])
                {
                    j--;
                    break;
                }
            }
        
        }
        // 머리에 임의 추출된 샘플 2개를 발라 본 후에 머리카락이 나는지 확인
        printf("%d, %d\n", two[0], two[1]);
        
        if (two[0] == treatment || two[1] == treatment)
        {
            printf("자란다\n");
        }
        else if (two[0] != treatment && two[1] != treatment)
        {
            printf("아무일이 없다\n");
        }
            
        //개별 딜레이

        sleep (2);

        

    }
    
    printf("발모제는 무엇입니까?");
    scanf("%d", &answer);
    
    if (answer == treatment)
    {
        printf("정답입니다.");
    }
    else if (answer != treatment)
    {
        printf("오답입니다.");
    }
    
    

   
    
    return 0;
}