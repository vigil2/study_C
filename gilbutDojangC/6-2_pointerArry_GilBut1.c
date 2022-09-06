#include <stdio.h>



int main(void)
{
    // array (배열) 
    // read 는 좋지만
    // search, add, delete 할때는 좀 느리다. why????
    // 위와 관련된 영상 : https://www.youtube.com/watch?v=NFETSCJON2M

    int  numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 배열의 크기가 달라질때 자동으로 맞춰주는 방법
    // numArr의 크기가 40인 이유는 int 4짜리가 4개가 있기 때문
    // 배열의 크기가 차지하는 공간
    printf("%d\n", sizeof(numArr));
    // = 배열의 크기가 차지하는 전체 공간 / 요소의 크기
    printf("%d\n", sizeof(numArr) / sizeof(int));

    for (int i = 0; i < sizeof(numArr) / sizeof(int) ; i++)
    {
        printf("%d\n", numArr[i]);
    }
    
    //왜 size_t는 안되고 int가 되는지 모르겠다.
    for (int i = sizeof(numArr) / sizeof(int) - 1 ; i >=0  ; i--)
    {
        printf("%d\n", numArr[i]);
    }

    // 배열의 합계 구하는 법
    int sum = 0;

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
    {   
        sum+= numArr[i];
    }
    
    printf("%d\n", sum);

    // 배열의 요소에 저장된 값을 두배로 만들기


    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
    {   
        numArr[i] *= 2;
    }


    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
    {   
        printf("%d\n", numArr[i]);
    }

    return 0;
}