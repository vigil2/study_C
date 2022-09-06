#include <stdio.h>
#include <stdint.h> // int8_t와 같은 자료형을 사용할때

/*
data type (자료형)
부호+정수자료형 (signed 와 int만 생략가능)

부호 + short자료형 ((%d)) // ((%u))
c언어에서는 문자를 정수로 취급함  
1. signed char = char
2. unsigned char (생략불가)

부호 + short자료형 ((%d)) // ((%u))
3. signed short int = short 
4. unsigned short int = unsigned short

부호 + 정수자료형 ((%d)) // ((%u))
5. signed int 부호있는 정수 = int 만 써도 되고 signed만 써도 됨
6. unsigned int 부호없는 정수 = unsigned

부호 + long자료형 ((%ld)) // ((%lu))
7. signed long int = long 만쓸수있지만 long int로 많이 씀
8. unsigned long int = unsigned long

부호 + longlong ((%lld)) // ((%llu))
9. signed long long int = long long
9. unsigned long long int = unsigned long long
*/

int main()
{

    // 크기가 표시된 정수(integer)자료형 사용하기
    
    //-> 크기를 정확하게 표현해야되는곳에 사용

    // 보통 파일압축, 암호화, 네트워크프로그래밍을 할때 사용된다.
    // 일반적인 프로그래밍을 할때도 std int를 사용하는 것이 좋다.


    int8_t num1 = -128; //비트크기가 표시된 정수자료형을 사용 // 최대값최소값에 비트단위가 표시되어있다
    int16_t num2 = 32767;
    int32_t num3 = 2147483647;
    int64_t num4 = 9223372036854775807;

    printf("%d %d %d %lld\n", num1, num2, num3 ,num4);

    uint8_t num5 = 255;
    uint16_t num6 = 65535;
    uint32_t num7 = 4294967295;
    uint64_t num8 = 18446744073709551615;

    printf("%u %u %u %llu\n", num5, num6, num7 ,num8);


    // 실수(real number) 자료형 사용하기 

    // 실수는 부동소수점 방식으로 저장
    // IEEE 754 표준 규약
    // 소수점이 떠다닌다해서 (floating point) 자료형 이름이 float
    // double은 float의 두 배 크기라서 double
    // long double은 double 보다 길어서 long double  

    float real1 = 0.1f; // .1f 또는 1.f로 표현 가능
    double real2 = 3867.215820;
    long double real3 = 9.327513l;

    printf("%f, %f, %Lf\n", real1, real2, real3); // L 대문자\

    //실수는 지수표기법으로도 가능
    
    float real4 = 3.e5f; // .1f 또는 1.f로 표현 가능
    double real5 = -1.3827e-2;
    long double real6 = 5.21e+9l;

    printf("%e, %e, %Le\n", real4, real5, real6); // 지수로 출력 가능
    printf("%f, %f, %Lf\n", real4, real5, real6); // 실수로 출력 가능

    // 실수 자료형의 크기



    return 0;
}