#include <stdio.h>

int main(void)
{


    // 문자 vs 문자열
    

    //문자는 ' ' (작은 따옴표) 안에 입력을 해야 제대로 출력이 된다.
    char c = 'A';
    printf("%c\n", c);

    // 문자열은 크기를 지정한다.
    char str[6] = "coding";// [c][o][d][i][n][g] 라는 배열을 이루어 문자열이 된다.
    
    // 이것을 출력하면 이상한 문자가 나옴 ->"coding��"
    printf("%s\n",str);
    
    //값을 하나 더 선언하여 널(NULL)이 마지막에 들어가게 한다.
    char strr[7] = "coding";// [c][o][d][i][n][g][\0] 이라고 입력
     
    // 이상한 문자가 사라짐 ->"coding"
    printf("%s\n",strr);

    // 
    char sttr[] = "coding";
    printf("%s\n", sttr);
    //sizeof= 배열형 변수가 가지는 크기를 보여줌
    printf("%d\n", sizeof(sttr));

    for (size_t i = 0; i < sizeof(sttr); i++)
    {
        printf("%c\n", str[i]);
    }
    
    // 한국어를 해보자
    // 영어는 한글자가 1 byte, 한국어는 2 byte or 3 byte
    // CP949와 EUC-KR은 한글 1글자를 2바이트로 저장하는데
    // UTF-8은 한글 1글자를 3바이트로 저장합니다.
    //char 크기 : 1 byte

    char kor[] = "나도코딩";
    
    printf("%s\n", kor);
    printf("%d\n", sizeof(kor));


    // 
    char c_array[7] = {'c','o','d','i','n','g','\0'};
    printf("%s\n", c_array);
    
    // NULL 자리가 없으면 이상한 문자가 나와야하는데 나는 안나온다. 
    char c_arrayy[6] = {'c','o','d','i','n','g'};
    printf("%s\n", c_arrayy);
    
    // 크기를 크게 선언 후 초기화에 더 적게 넣으면?
    
    char c_arrayyy[10] = {'c','o','d','i','n','g'};
    printf("%s\n", c_arrayyy);
    // for문으로 확인해보면 coding 출력 이후에 빈칸으로 출력이된다.
    for (size_t i = 0; i <sizeof(c_arrayyy); i++)
    {
        printf("%c\n", c_arrayyy[i]);
    }
    printf("%s\n", c_arrayyy);
    // %d로 출력을 해보면 ASCII(아스키) 코드값 출력
    // (NULL 문자는 0으로 출력된다.)
    for (size_t i = 0; i <sizeof(c_arrayyy); i++)
    {
        printf("%d\n", c_arrayyy[i]) ;
    }

	char name[256]; // 256으로 넉넉하게 잡아둠
	printf("이름이 뭐에요?: ");
	scanf("%s", name, sizeof(name));

    
    return 0;
}
