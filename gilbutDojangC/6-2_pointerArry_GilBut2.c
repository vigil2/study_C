#include <stdio.h>



int main(void)
{


    int  numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 배열을 포인터에 넣기

    int *numPtr = numArr;

    printf("%d\n", *numPtr);
    printf("%d\n", *numArr);
    printf("%d\n", numArr);

    printf("%d\n", numPtr[5]);

    printf("%d\n", sizeof(numArr));
    printf("%d\n", sizeof(numPtr));

    


    return 0;

}