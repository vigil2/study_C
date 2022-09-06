#include <stdio.h>

void swap_by_value(int a, int b);
void swap_by_addr(int *a, int *b);

int main(void)
{
    
    // swap 함수
    // 두 변수를 바꾸는 것을 말함
    // 함수는 변수가 가진 값을 받는 것이지 변수를 받는 것이 아니다.
    // 따라서 swap함수를 아래와 같이 구성한다면
    // 전달받은 x와 y의 값이 swap 함수 안에서만 서로 교체된다.
    // 사실상 교체가 되지 않는 것임.
    // -> 실제 a와 b의 값을 변경하고 싶으면 함수에게 바꾸고자 하는 변수의 주소 값을 전달해주면 된다.
    

    int x = 10;
    int y = 20;
    printf("x의 주소는  : %d\n", &x);
    printf("y의 주소는  : %d\n", &y);

    // a 와 b 의 값을 바꾸려면?

/////////////////////////////////////////////////////////////////
    // call by value (값에 의한 복사) -> 값만 복사한다는 의미 
    // 함수 호출시 전달되는 변수의 값을 복사하여 함수의 인자로 전달한다.
    // 복사된 인자는 함수 안에서 지역적으로 사용되는 local value의 특성을 가진다.
    // 따라서 함수 안에서 인자의 값이 변경되어도, 외부의 변수의 값은 변경되지 않는다.
    // 따라서 원본값을 바꿀 필요가 없을때에는 call by value 방식을 사용.
    // 
    // call by reference 
    // call by adress (주소값에 의한 복사)
    // 엄밀히 이야기하면 주소값에의한 복사도 값에 의한 복사기에 call by value이다.
    // c언어에서는 call by reference를 공식적으로 지원하진 않음.
    // 그러나 의미적, 결과적으로 call by adress를 call by reference와 같이 사용할 수 있기때문에 c언어에서 포인터를 이용하여 주소값을 넘기는 방식을 call by reference라 설명하기도 합니다.
    // (내 추측) 즉 global variable을 바꾸고싶을때는 call by reference
    // (내 추측) local variavle을 바꾸고싶을때는 call by reference 아닐까??
    // (궁금한 점)call by reference의 장점이란 무얼까?
/////////////////////////////////////////////////////////////////


    // call by value
    printf("Swap 함수 전 => x : %d, y : %d \n", x, y);
    swap_by_value(x, y);
    printf("Swap 함수 후 => x : %d, y : %d \n", x, y);
    

    // call by reference // call by adress

    // 메모리공간에 있는 주소값 자체를 넘기면?.. 철수네 처럼
    printf("(주소값 전달) Swap 함수 전 => x : %d, y : %d \n", x, y);
    swap_by_addr(&x, &y);
    printf("(주소값 전달) Swap 함수 후 => x : %d, y : %d \n", x, y);


    return 0;
}

void swap_by_value(int a, int b)
{
    // main 공간에서의 x, y 주소와 swap함수 내에서의 x, y 주소가 다르다.
    printf("(Swap 함수 내) x의 주소는  : %d\n", &a); 
    printf("(Swap 함수 내) y의 주소는  : %d\n", &b);

    int temp = a;
    a = b;
    b = temp;
    printf("Swap 함수 내 => x : %d, y : %d \n", a, b);
}

void swap_by_addr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("(주소값 전달)Swap 함수 내 => x : %d, y : %d \n", *a, *b);
}