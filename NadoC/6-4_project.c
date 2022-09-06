#include <stdio.h>


void printfArray(int arr);   

int main(void)
{

int water [6] = {100, 100, 100, 100, 100, 100}; // 어항 6개

printfArray(water[6] -= 1);

    return 0;
}

void printfArray(int arr)
{
    for (size_t i = 0; i < 6; i++)
    {
        printf("%d, ", water[i]);
    }
}