#include <stdio.h>

#define MAX 10000

// fputs, fgets -> 문자열을 저장, 불러오기 위해서
// fprintf, fscanf -> printf(%d, %s) scanf(%d, %s)와 같이 정형화 포멧에 맞춰서 입력하고 싶을때

int main()
{
    //파일 쓰기
    int num[6] = {0, 0, 0, 0, 0, 0}; // 추첨번호
    int bonus = 0; // 보너스번호

    char str1[MAX];
    char str2[MAX];
    FILE * file = fopen("/Users/vigil/Desktop/Workspace/CWorkspace/NadoC/test2.txt", "wb");
    if (file == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    // 로또 추첨번호 저장
    fprintf(file, "%s %d %d %d %d %d %d \n", "추첨번호", 1, 2, 3, 4, 5, 6);
    fprintf(file, "%s %d \n", "보너스 번호", 7);

    fclose(file); 


    // 파일 읽기
    FILE * file1 = fopen("/Users/vigil/Desktop/Workspace/CWorkspace/NadoC/test2.txt", "rb");
    if (file == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    // 로또 추첨번호 저장
    fscanf(file1, "%s %d %d %d %d %d %d \n", str1,
    &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
    printf("%s %d %d %d %d %d %d\n", str1,
    num[0], num[1], num[2], num[3], num[4], num[5]);
    
    fscanf(file1, "%s %d \n", str2, &bonus);
    printf("%s, %d\n", str2, bonus);
    

    fclose(file1); 

    return 0;
}