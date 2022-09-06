#include <stdio.h>


int main()
{
// 문자 character
    
    // signed char
        // 크기 1 바이트, 8 비트 // 범위 : -128~127 // 문자 저장

    // unsigned char
        // 크기 1 바이트, 8 비트 // 범위 : 0~255 // 바이트 단위 데이터 저장  

    // char 자료형은 문자를 바로 저장하지 않고 문자에 해당하는 정수값을 저장함.
    // 그 문자를 정수로 나타내는 규칙을 ASCII 코드라 부름
    
    // 그래서 실제로 변수안에 정수가 들어있고 보여줄때문 ASCII(아스키)코드 규칙에 따라 문자를 보여주는 방식

    // ASCII
        // 65(0X41) ~ 90(0x5A)는 A ~ Z 알파벳 대문자
        // 97(0X61) ~ 122(0x7A)는 a ~ z 알파벳 소문자
        // 나머지 값들은 공백, 숫자, 특수문자, 제어문자 등을 나타냄

    char c1 = 'a';
    char c2 = 'b'; 

    printf("%c, %d\n", c1, c1); // %d 에서 ASCII code 값 출력
    printf("%c, %d\n", c2, c2);

    // ASCII code 16진수 값으로 문자 출력하기
    char c3 = 0x61; 
    char c4 = 0x62; 

    printf("%c, %d, 0x%x\n", c3, c3, c3);  
    printf("%c, %d, 0x%x\n", c4, c4, c4);
    // 16진수를 출력하려면 %x 를 사용한다.
    // %x 만으론 10진수와 구별이 어려워 보통 0x%x 로 표기
    // x means hexadecimal

    
    // 문자 0과 숫자 0은 다르다.
    char c5 = '0'; 
    char c6 = 0; 

    printf("%c, %d, 0x%x\n", c5, c5, c5);  
    printf("%c, %d, 0x%x\n", c6, c6, c6);
    // ASCII code 의 0 은 NULL을 뜻함.
    // NULL 아무것도 들어있지 않은 상태를 의미 > 빈 공간이 출력

    
    
    
// 문자로 연산하기

    printf("%c, %d\n", 'a' + 1, 'a' + 1);
    printf("%c, %d\n", 97 + 1, 97 + 1);

// control character(제어문자) 사용하기 

    // 표기법 : \n 
        // 10진수 : 10, 16진수 : 0x0A, 문자 : LF
        // 설명 : 개행, 라인 피드(line feed), 새 줄(new line), 줄바꿈

    // 표기법 : \r
        // 10진수 : 13, 16진수 : 0x0D, 문자 : CR
        // 설명 : 복귀, 캐리지 리턴(carriage return), 줄의 끝에서 시작 위치로 되돌아감.

    // 표기법 : \t 
        // 10진수 : 9, 16진수 : 0x09, 문자 : TAB
        // 설명 : 수평 탭(horizontal tab)

    char cc1 = 'a';
    char cc2 = 'b';
    char linefeed = '\n'; // control character(제어문자)

    printf("%c%c%c%c", cc1, linefeed, cc2, linefeed);

    //제어문자의 ASCII code

    printf("%d, 0x%x\n", linefeed, linefeed);

    // ASCII code는 전부 외울필요는 없고 C언어 문자가 ASCII code로 저장된다는 것만 알자.



    return 0;
}

