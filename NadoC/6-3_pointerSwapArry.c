#include <stdio.h>

void changeArry(int *ptr);  

int main(void)
{
    // 배열일 때 arr2 자체가 주소
    int arr2[3] = {10, 20, 30};
    
    changeArry(arr2); 
    // == changeArry(&arr2[0]); 와 동일
    // 왜 scanf에서 &를 사용하였는지 이유를 알 수 있다.
    
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 0;
}

void changeArry(int *ptr)
{
    ptr[2] = 50;
}