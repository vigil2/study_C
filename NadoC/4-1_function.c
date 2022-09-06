#include <stdio.h>

void p(int numnum);//선언
 
// 선언(declaration) : 메모리 비할당
// 정의(definition)  : 메모리 할당 
// 선언은 메모리 영역 상에 올리지 않기 때문에 중복되어도 문제가 되지 않으며 두 번 이상 할 수 있습니다.

int main(void)
{
    //function

    // 계산기
    
    int num = 2;
    printf("num은 %d 입니다\n", num);

    // 2 + 3
    
    num = num +3;
    printf("num은 %d 입니다\n", num);

    // 5 - 1

    num -= 1;
    printf("num은 %d 입니다\n", num);

    //mutiply

    num *= 3;
    printf("num은 %d 입니다\n", num);

    //divide
    num /= 6;
    printf("num은 %d 입니다\n", num);




 // 선언 p라는 함수를 선언

 
    int numnum = 2;
    // printf("num은 %d 입니다\n", numnum);
    p(numnum);
    
    // 2 + 3
    numnum = numnum +3;
    // printf("num은 %d 입니다\n", numnum);
    p(numnum);
    
    // 5 - 1
    numnum -= 1;
    // printf("num은 %d 입니다\n", numnum);
    p(numnum);

    //mutiply
    numnum *= 3;
    // printf("num은 %d 입니다\n", numnum);
    p(numnum);


    //divide
    numnum /= 6;
    // printf("num은 %d 입니다\n", numnum);
    p(numnum);



    


    return 0;
}

//정의 -> 메인함수 아래쪽에서 정의를 내리면 된다.
void p(int numnum) // 정의  // p = 함수의 이름 (전달값)
{
    printf("numnum 은 %d입니다\n", numnum);
}