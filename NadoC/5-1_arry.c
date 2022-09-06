#include <stdio.h>

int main(void)
{
    // array 배열
    // 선언(declaration)과 초기화(initialization) 과정이 필요한데 한번에 할 수 있고 나눠서 할 수 있다.
    // 초기화를 안하면 dummy라고 할 수 있는 난수가 표현된다
    // 배열(array)은 변수(variable)를 한번에 여러개 만든다.
////////////////////////////////////////////////////////////////
    int subway1 = 30; // 지하철 1호선에 30명이 타고있다
    int subway2 = 40;
    int subway3 = 50;
    
    printf("line 1 %d person\n", subway1);
    printf("line 2 %d person\n", subway2);
    printf("line 3 %d person\n", subway3);
    // ㅁㅁㅁㅁ
/////////////////////////////////////////////////////////////////

// 배열 선언 후 초기화 하기
    int subway_array[3];     // 선언(declaration) 후
    // [0][1][2] - 0 부터 시작, 2 에서 끝
    subway_array[0] = 30;    // 초기화(initialization)를 한다
    subway_array[1] = 40;
    subway_array[2] = 50;

    for (size_t i = 0; i < 3; i++)
    {
        printf("line %d, %d person\n", i+1, subway_array[i]);
    }
    
    // 선언과 초기화를 동시에 하기 (값 설정 방법 - 값을 지정안하고 선언만하면 dummy 발생)
    // array를 사용할때 항상 초기화(initialization)를 해야한다.
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; 

    for (size_t i = 0; i < 10 ; i++)
    {
        printf("%d\n", arr[i]);
    }

    // 배열 크기는 항상 상수로 선언. 배열을 선언할때 변수를 선언할 수 없다.
    // ex) 
    /*
    int size = 10;
    int arr[size];
    */

   // 여러개 중 하나라도 선언을 했으면 나머지 값들은 0으로 들어감.
   int arrr[10] = {1,2};

    for (size_t i = 0; i < 10 ; i++)
    {
        printf("%d\n", arrr[i]);
    }

   //선언시에 배열 크기를 정하지 않고 배열시에 선언 크기를 정할 수 있디.
   
    int arrrr[] = {1,2}; // arr[2]로 선언한것과 동일
    float arrrr_f[] = {1.0f, 2.0f, 3.0f};
    
    for (size_t i = 0; i < 4; i++)
    {
        printf("%.2f\n", arrrr_f[i]);
    }
      

    return 0;
}

