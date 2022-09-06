#include <stdio.h>



int main(void)
{
    // 포인터(변수) = 메모리 주소.(의 첫 부분을 알려줌)

/////////////////////////////////////////////////////////
    // [철수] : 101호 -> 메모리 공간의 주소
    // [영희] : 201호
    // [민수] : 301호

    // 각 문 앞에 '암호'가 걸려있음.
    int 철수 = 1; // 암호 
    int 영희 = 2;
    int 민수 = 3;

    // 주소연산자(&) : 변수의 메모리주소를 구한다.
    printf("철수네 주소 : %d, 암호  : %d\n", &철수, 철수); 
    printf("영희네 주소 : %d, 암호  : %d\n", &영희, 영희);
    printf("민수네 주소 : %d, 암호  : %d\n", &민수, 민수);


    // 미션맨 ! 

    // 첫번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호를 확인 
    // 포인터 변수의 선언 : 변수의 메모리주소만 가르킴.
    int *미션맨;

    미션맨 = &철수;
    printf("미션맨이 방문하는곳의 주소 : %d, 암호는 : %d\n", 미션맨, *미션맨);

    미션맨 = &영희;
    printf("미션맨이 방문하는곳의 주소 : %d, 암호는 : %d\n", 미션맨, *미션맨);

    미션맨 = &민수;
    printf("미션맨이 방문하는곳의 주소 : %d, 암호는 : %d\n", 미션맨, *미션맨);

    // 두번째 미션 : 각 암호에 3을 곱해라.

    미션맨 = &철수;
    *미션맨 = *미션맨 *3;
    printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

    미션맨 = &영희;
    *미션맨 = *미션맨 *3;
    printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

    미션맨 = &민수;
    *미션맨 = *미션맨 *3;
    printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

    // 스파이의 등장

    //미션맨이 바꾼 암호에서 2를 빼라!

    int *스파이 = 미션맨;
   
    /*
    스파이
            =>  둘 다 동일한 누군가의 아파트 주소를 가르킴
    미션맨 
    */

     printf("\n...스파이가 미션 수행하는 중...\n");
    스파이 = &철수;
    *스파이 = *스파이 -2; // 철수 = 철수 -2;
    printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

    스파이 = &영희;
    *스파이 = *스파이 -2; // 영희 = 영희 -2;
    printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

    스파이 = &민수;
    *스파이 = *스파이 -2; // 민수 = 민수 -2;
    printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

    printf("\n 철수, 영희, 민수는 집에 와서 바뀐 암호를 보고 깜놀 !!\n");

    printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
    printf("철수네 주소 : %d, 암호 : %d\n", &영희, 영희);
    printf("철수네 주소 : %d, 암호 : %d\n", &민수, 민수);
    // 여기까지의 내용으로 알 수 있는 것은
    // 어떤주소값을 가지는 포인터 자체가 변수의 값을 직접 바꿀 수 있다.

    // 참고로 미션맨이 사는 주소는  & 미션맨으로 확인
    // 미션맨이라는 포인터변수 자체도 하나의 변수이기때문에 주소값을 가짐
    printf("미션맨의 주소는 %d\n", &미션맨);
    printf("스파이의 주소는 %d\n", &스파이);


    return 0;
}