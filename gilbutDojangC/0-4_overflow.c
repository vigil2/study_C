#include <stdio.h>

#include<float.h> //실수형 할때 필요


int main()
{

// 오버플로우란?????? 저장할 수 있는 범위를 넘어 섰을때 발생할 수 있는 현상
    
    // 정수 오버플로우

    char num1 = 128; // 최대값 127
    unsigned char num2 = 256; // 최대값 255

    printf("%d, %d \n", num1, num2);
    // char 에서 overflow 발생 
    // unsigned char 에서 underflow 발생
    // overflow = 최대값에서 값이 더 커지면 최소값에서 시작
    // underflow = 최소값에서 값이 더 작아지면 최대값에서 시작




    
     
    //실수 오버플로우
   
    float real1 = FLT_MIN;
    float real2 = FLT_MAX;

    real1 = real1 / 1000000000000.0f; // 언더플로우가 발생하게 만듬
    real2 = real2 * 1000.0f; // 오버플로우가 발생하게 만듬

    //실수는 언더플로우 발생시 0
    // 오버플로우 발생시 inf가 나타남 (inf = infinity)
    
    printf("%f, %f", real1, real2);


    return 0;
}