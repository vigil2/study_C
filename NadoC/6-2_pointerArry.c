#include <stdio.h>



int main(void)
{
    // 배열 

    int arr[3] = {5, 10, 15};
    int *ptr = arr;
    printf("%d\n", ptr); // arr의 자체 주소의 값
    printf("%d\n", *ptr); // 배열의 0번째 값이 출력
    for (size_t i = 0; i < 3; i++)
    {
        printf("배열 arr[%d]의 값은 : %d\n", i, arr[i]);
    }
    // 배열의 포인터들은 배열 하나하나의 주소값을 그대로 가지고있음. 
    for (size_t i = 0; i < 3; i++)
    {
        printf("포인터 ptr[%d]의 값은 : %d\n", i, ptr[i]);
    }
    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
    // 포인터가 각각 배열 요소에 그대로가서 값을 바꿈
    // 
    for (size_t i = 0; i < 3; i++)
    {
        printf("배열 arr[%d]의 값은 : %d\n", i, arr[i]);
        printf("배열 arr[%d]의 값은 : %d\n", i, *(arr + i));
        // *(arr + i) == arr[i] 똑같은 표현
        // arr은 가장 처음시작되는 주소값을 가지고있는데 그것의 i번째 값을 가져오는 것
    }
    
    for (size_t i = 0; i < 3; i++)
    {
        printf("포인터 ptr[%d]의 값은 : %d\n", i, ptr[i]);
        printf("포인터 ptr[%d]의 값은 : %d\n", i, *(ptr + i));
    } 
    // arr == arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
    printf("arr 자체의 값 : %d\n", arr);
    printf("arr[0] 의 주소 : %d\n", &arr[0]);

    // *(arr + 0)
    printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr);
    // *(arr+0) == *arr
    printf("arr[0] 의 실제 값 : %d\n", *&arr[0]);

    // *& 는 아무것도 없는것과 같다.
    // &는 주소이며 , * 주소의 값이기 때문에
    // *& 는 서로 상쇄된다.
    // *&(value)

    printf("arr[0] 의 실제 값 : %d\n", *&*&*&*&*&arr[0]);
    printf("arr[0] 의 실제 값 : %d\n", arr[0]);

    return 0;
}