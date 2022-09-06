#include <stdio.h>



int main(void)
{

    // 배열을 활용하여  10진수를 2진수르 변환하기
    // 13 을 2진법으로 표현하면 1101

    int decimal = 13; // int로 변수를 선언하고 13을 할당
    int binary[20] = {0, }; // 배열을 선언, 크기는 20, 0으로 초기화

    int position = 0; // int로 변수를 선언하고 0으로 초기화

    while (1) // 1을 지정해서 무한루프로 만듬
    {
        binary[position] = decimal %2; // 2로 나눴을때 나머지를 저장
        decimal = decimal / 2; // 나눴을때 몫을 값으로 저장 
        
        position++;

        if(decimal==0)
        {
            break;
        }
    }
    
    for (int i = position - 1 ; i >=0 ; i--)
    {
        printf("%d\n", binary[i]);
    }
    
    // 2차원배열
    // 대괄호를 두번 사용함
    // 자료형 배열이름 [세로크기][가로크기] = {{값, 값, 값},{값, 값, 값}}
    int numArr[3][4] = { // 초기화
        {11, 22, 33, 44},
        {55, 66, 77, 88},
        {99, 110, 121, 132} //세로줄 3개
    };

    printf("%d\n", numArr[0][0]);
    printf("%d\n", numArr[1][2]);
    printf("%d\n", numArr[2][0]);
    printf("%d\n", numArr[2][3]);
    
    // 2차원 배열 초기화
    int numArr2[3][4] = { 0, };

    printf("%d\n", numArr2[0][0]);
    printf("%d\n", numArr2[1][2]);
    printf("%d\n", numArr2[2][0]);
    printf("%d\n", numArr2[2][3]);

    // 2차원 배열요소에 값 할당하기

    int numArr3[3][4];

    numArr3[0][0]=11;
    numArr3[0][1]=22;
    numArr3[0][2]=33;
    numArr3[0][3]=44;
    numArr3[1][0]=55;
    numArr3[1][1]=66;
    numArr3[1][2]=77;
    numArr3[1][3]=88;
    numArr3[2][0]=99;
    numArr3[2][1]=110;
    numArr3[2][2]=121;
    numArr3[2][3]=132;
    numArr3[3][0]=143;
    numArr3[3][1]=154;
    numArr3[3][2]=165;
    numArr3[3][3]=176;

    printf("%d\n", numArr3[0][0]);
    printf("%d\n", numArr3[1][2]);
    printf("%d\n", numArr3[2][0]);
    printf("%d\n", numArr3[2][3]);

    // 2차원 배열에서 범위를 벗어난다면?
    // 컴파일 에러가 발생하진 않지만  
    printf("%d\n", numArr3[-1][-1]);
    printf("%d\n", numArr3[0][4]); // 가로인덱스가 범위를 벗어나면 그다음 줄로 감
    printf("%d\n", numArr3[4][0]);
    printf("%d\n", numArr3[5][5]);

    return 0;

}
