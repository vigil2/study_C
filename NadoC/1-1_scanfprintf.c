#include <stdio.h>

int main(void)
{
    printf("hello world\n");


    // 정수형 변수 intger varialbe

	int age = 12;
	printf("%d\n", age);
    
    age = 13;
    printf("%d\n", age);

    // 실수형 변수 real variable
    float f = 46.5f;
    printf("%d.2\n", f);
    double d = 4.482; 
    printf("%.2lf\n", d);

    // constant no
    const int YEAR = 2000;
    printf("birth : %d\n", YEAR);
    // YEAR = 2001 // 반복되면 인트를 뺌
    
    //What printf

    int add = 3+7;
    printf("3+7 = %d\n", add);
    printf("%d + %d = %d\n", 3, 7 , 3+7);

    // scanf
	// 키보드 입력을 받아서 저장
	int input;
	printf("값을 입력하세요: ");
	scanf("%d", &input);
    printf("입력값: %d\n", input);
        
    int one, two, three;
    printf("3개의 정수를 입력하세요: ");
    scanf("%d %d %d", &one, &two, &three);
    printf("첫번째 값: %d\n", one);
    printf("두번째 값: %d\n", two);
    printf("세번째 값: %d\n", three);

    // 문자(한 글자), 
	char c = 'A';
	printf("%c\n", c);
	
    // string 문자열(한 글자 이상)
    char str[256];
    scanf("%s", str, sizeof(str));
    printf("%s\n", str);
 
    


    return 0;
}