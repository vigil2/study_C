#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
srand(time(NULL)); //난수 촉
printf("\n\n === 아빠는 대머리 게임 === \n\n");
int answer; //사용자 입력값
int treatment = rand() % 4; //발모제 선택 (0~3)
int cntShowBottle = 0; //이번 게임에 보여줄 병 갯수
int precCntShowBottle = 0; //앞 게임에 보여준 병 갯수
// 서로 보여주는 병 갯수를 다르게 하여 정답률 향상 (처음에 2개 -> 다음에 3개 ...)
//3번의 기회 (3번의 발모제 투여 시도)
for(int i = 1; i <= 3; i++)
{
    int bottle[4] = {0, 0, 0, 0}; //4개의 병을 배열로 입력
    do {
      cntShowBottle = rand() % 2 + 2; //보여줄 병 갯수 (0~1 +2 -> 2,3)
    } while(cntShowBottle == precCntShowBottle); //정답률 향상을 위해 현게임과 전게임의 보여준 병 갯수가 같으면 난수 뽑기 반복
    precCntShowBottle = cntShowBottle; //뽑힌 병 갯수를 앞 게임에 보여준 병 갯수에 입력
    int isIncluded = 0; //보여줄 병 중에 발모제가 포함되었는지 여부
    printf("> %d 번째 시도 : ",i);

    // 보여줄 병 종류를 선택
    
    for(int j=0; j <cntShowBottle; j++)
    {
      int randBottle = rand() %4; // 0~3 난수 입력

      // 아직 선택되지 않은 병이면, 선택 처리
      if (bottle[randBottle] == 0)
      {
        bottle[randBottle] =1; //배열의 인덱스 난수번에 1을 입력
        if(randBottle == treatment) //난수가 발모제와 같을때
        {
          isIncluded = 1; //보여줄 병에 발모제가 포함
        }
      }
      //이미 선택된 병이면, 중복이므로 다시 선택
      else
      {
        j--; //한번 더 반복해야하므로 j를 -1
      }
    }
    
    // 사용자에게 문제 표시
    for (int k =0; k<4; k++) //세 번의 문제 표시 0~3
    {
      if(bottle[k] == 1) //배열에 1(보여줄 병)이 있으면
        printf("%d ", k + 1); //해당 병 번호 출력 (1차이나므로 +1)
    }
    
    printf(" 물약을 머리에 바릅니다\n\n");
    
    if (isIncluded == 1) // 발모제가 있을 경우
    {
      printf(" >>성공 ! 머리가 났어요 !!\n");
    }
    else // 발모제가 없을 경우
    {
      printf(" >>실패 ! 머리가 나지 않았어요.. ㅠㅠ\n");
    }
    printf("\n ... 계속 하려면 아무키나 누르세요 ...");
    getchar(); //사용자가 key를 입력할 때 까지 대기
    }
    
    printf("\n\n발모제는 몇 번일까요?");
    scanf("%d", &answer);
    
    if(answer == treatment + 1) //정답을 맞췄을 때, treatment는 난수가 0~3이므로 +1
    {
        printf("\n >> 정답입니다!\n");
    }
    else                                //오답처리
    {
        printf("\n >> 땡 ! 틀렸어요. 정답은 %d 입니다\n", treatment+1);
    }
  return 0;
}