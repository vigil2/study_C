#include <stdio.h>


int main()
{
    // 정수 자료형의 크기
    
    int num1= 0;
    
    int size1;
    int size2;
    int size3;
    int size4;

    size1 = sizeof num1; // 표현식(변수, 상수 배열 등 프로그래머가 만든 요소를 뜻함.)
    size2 = sizeof(num1);// 표현식
    // size3 = sizeof int;  // 잘못된 방법
    size4 = sizeof(int); // 자료형을 괄호로 묶어줘야 한다.


    
    printf("num1의 크기 : %d\n", size1);
    printf("num1의 크기 : %d\n", size2);
    // printf("num1의 크기 : %d\n", size3);
    printf("num1의 크기 : %d\n", size4);


    printf("char : %d, short :%d, int : %d, long : %d, long long : %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long)
    );
    // 64bit체제에서 long 8바이트, 86x에선 4바이트? 인 것 같다.
 
    



    // 실수 자료형의 크기
    float real1 = 0.0f;
    double real2 = 0.0;
    long double real3 = 0.0l;

    printf("float : %d, double: %d, long double : %d\n", sizeof(real1), sizeof(real2), sizeof(real3));




    return 0;
}