#include <stdio.h>
#include <limits.h> //정수 최댓값과 최소값을 사용하기 위해서
#include <float.h> //실수 최댓값과 최소값을 사용하기 위해서

int main()
{

//정수 최대값과 최소값



    // 헤더값에 정의된 각 자료형의 최대값과 최소값을 사용하면된다.
    char num1 = CHAR_MIN;
    short num2 = SHRT_MIN;
    int num3 = INT_MIN;
    long num4 = LONG_MIN;
    long long num5 = LLONG_MIN;

    printf("%d, %d, %d, %ld, %lld\n", num1, num2, num3, num4, num5);

    char num6 = CHAR_MAX+1; // 최대값을 넘어서 오버플로우 발생 
    short num7 = SHRT_MAX+1; // 마찬가지로 최소값보다 작아지면 언더플로우 발생
    int num8 = INT_MAX+1;
    long num9 = LONG_MAX+1;
    long long num10 = LLONG_MAX+1;

    

    printf("%d, %d, %d, %ld, %lld\n", num6, num7, num8, num9, num10);

    unsigned char num11 = UCHAR_MAX+1; // 최대값을 넘어서 오버플로우 발생 
    unsigned short num12 = USHRT_MAX+1;
    unsigned int num13 = UINT_MAX+1;
    unsigned long num14 = ULONG_MAX+1;
    unsigned long long num15 = ULLONG_MAX+1;

    printf("%d, %d, %d, %ld, %lld\n", num11, num12, num13, num14, num15);

    //부호없는(unsgined) 정수 자료형은 최소값이 0 





//실수 최대값과 최소값

    float real1 = FLT_MIN;
    float real2 = FLT_MAX;
    double real3 = DBL_MIN;
    double real4 = DBL_MAX;
    long double real5 = LDBL_MIN;
    long double real6 = LDBL_MAX;

    printf("%.40f %.2f\n", real1, real2); // %.40f는 소수점이하 40자리  
    printf("%e %e\n", real3, real4);
    printf("%Le %e\n", real5, real6);




    
    return 0;
}