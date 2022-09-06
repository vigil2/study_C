

#include <stdio.h>

int main(void)
{
    // 참고 : ASCII 코드? ANSI (미 표준협회)에서 제시한 표준 코드 체계
    // 7 bit로 표시할 수 있고, 총 128 개 코드(0~127)를 가지고있음
    // a: 97 (문자 a의 아스키코드 정수값)
    // A : 65
    // 0 : 48    
    
    printf("%c\n", 'a');
    printf("%d\n", 'a');
    
    printf("%c\n", 'b');
    printf("%d\n", 'b');

    printf("%c\n", 'A');
    printf("%d\n", 'A');

    printf("%c\n", '\0'); // NULL 은 무슨값을 가질까?
    printf("%d\n", '\0');

    printf("%c\n", '0'); 
    printf("%d\n", '0');
    
    printf("%c\n", '1'); 
    printf("%d\n", '1');

    // 참고2 : 0 ~ 127 사이의 아스키코드 정수에 해당하는 문자 확인

    for (int i = 0; i < 128; i++)
    {
        printf("아스키코드 정수 %d : %c\n",i ,i); 
    }
    

    return 0;
}