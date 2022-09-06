#include <stdio.h>



int main()
{
    // Constant
        // 변하지 않는 값을 뜻함
        
        // 상수와 리터럴(literal)을 구분해야함
        // 리터럴(literal)은 값 그자체를 뜻함
        // 상수는 변수처럼 리터럴(literal)이 저장된 공간

    const int con1 = 10; // con1 상수, 10 리터럴(literal)

    // 프로그램을 만들때 변수에 저장된 값을 의도하지 않게 바꿀 가능성이 있음
    // 상수는 값이 의도하지 않게 바뀌는 것을 방지하기 위해 사용 
    // ex)
        // mile 을 m 단위로 변한다고 하면 1 mile은 1.61km
        // 여기서 1.61을 상수로 사용하여
        // 코드의 의도를 명확하게 할 수 있다.
        
    // literal
        // source code에서 입력한 값 그 자체
        // literal은 표기법을 지켜야함
    
    printf("%d\n", 10); // 10 가 literal
    printf("%f\n", 0.1f); // 0.1f 가 literal
    printf("%c\n", 'a'); // 'a' 가 literal
    printf("%s\n", "Hello, world!"); // "hello world" 가 literal

    // 정수 lteral 표기 방법
        printf("%d\n", 19); // 10진수 - 그대로 표기
        printf("0%o\n", 017); // 8진수 - 숫자 앞에 0을 붙임
        printf("0x%X\n", 0x1F); // 16진수 - 숫자 앞에 0x를 붙임

        // 8진수는 0~7을 사용
        // 16진수는 0~9를 사용하고 추가로 A~F를 사용하여 표현

    // 실수 literal 표기 방법
        
        //실수 literal이 float크기면 f,F를 붙이고
        //long double 크기면 l, L를 붙인다.
        printf("%f\n", 0.1f);
        printf("%f\n", 0.1F);
        printf("%f\n", 0.1e-5f);
        printf("%f\n", 0.1E-5F);

    // 상수 사용하기
        // const 자료형 상수이름 = 값; 
        const int con2 = 1;
        const float con3 = 0.1f;
        const char con4 = 'a';

        // con2 = 2; // const가 되면 더이상 값을 할당할 수 없음. 완전히 고정.

        printf("%d, %f, %c\n", con2, con3, con4);




    return 0;
}