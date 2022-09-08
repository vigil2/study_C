#include <stdio.h>

#define MAX 10000

int main(void)
{
    // 파일 입출력
    // 파일에 어떤 데이터를 저장
    // 파일에 저장된 데이터를 불러오기

// fputs, fgets -> 문자열을 저장, 불러오기 위해서
// fprintf, fscanf -> printf(%d, %s) scanf(%d, %s)와 같이 정형화 포멧에 맞춰서 입력하고 싶을때


//파일에 저장하기
    char line[MAX];  // char line[10000] 와 동일하다 
    FILE * file = fopen("/Users/vigil/Desktop/Workspace/CWorkspace/NadoC/test1.txt", "wb");
    // fopen은 파일을 여는 것
    // r(read 전용) w(write 전용) a(append 전용)
    // 뒤에 붙는것은 t와 b가 있음. t(text), b(binary)를 의미함.
    // \\를 써야 \ 하나로 인식
    if (file == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    fputs("fputs 를 이용해서 글을 적어볼게요\n", file);
    fputs("잘 적히는지 확인해주세요\n", file);

    // 파일을 열고 나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면?
    // 데이터 손실 발생 가능! 그래서 항상 파일을 닫아주는 습관을 들여주세요
    fclose(file); // 파일을 저장하고 닫기

// 파일 읽기
    FILE * file1 = fopen("/Users/vigil/Desktop/Workspace/CWorkspace/NadoC/test1.txt", "rb");
    
    if (file1 == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    while(fgets(line, MAX, file) != NULL)
    {
        printf("%s", line); 
    }

    // fprintf, fscanf

    return 0;
}