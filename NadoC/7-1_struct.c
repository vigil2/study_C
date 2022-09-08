#include <stdio.h>

struct Gameinfo
{
    char * name;
    int year;
    int price;
    char * company;

    struct Gameinfo * friendGame; // 연관업체 게임
};

typedef struct // Gameinformation 없이도 사용가능. GAME_INFO라고 사용가능하다.
{
    char * name;
    int year;
    int price;
    char * company;

    struct Gameinfo * friendGame; // 연관업체 게임
} GAME_INFO; // typedef struct Gameinformation 를 GAME_INFO로 치환하겠다.라는 뜻


int main(void)
{

// 구조체

    // [게임 출시]
        // 이름 : 나도게임
        // 발매년도 : 2017년
        // 가격 : 50원
        // 제작사 : 나도회사

        char * name3 = "나도게임";
        int year3 = 2017;
        int price3 = 50;
        char * company3 = "나도회사";

    // [또다른 게임 출시]
        // 이름 : 너도게임
        // 발매년도 : 2017년
        // 가격 : 50원
        // 제작사 : 너도회사

        char * name2 = "너도게임";
        int year2 = 2017;
        int price2 = 50; 
        char * company2 = "너도회사";

// 구조체 사용
    struct Gameinfo gameinfo1; //struct gameinfo 까지가 자료형, gameinfo1 이 변수명
    gameinfo1.name = "나도게임";
    gameinfo1.year = 2017;
    gameinfo1.price = 50;
    gameinfo1.company = "나도회사";

// 구조체 출력
    printf("--게임출시정보--\n");
    printf("게임명 : %s\n", gameinfo1.name);
    printf("발매년도 : %d\n", gameinfo1.year);
    printf("가격 : %d\n", gameinfo1.price);
    printf("발매회사 : %s\n", gameinfo1.company);

// 구조체를 배열처럼 출력
    struct Gameinfo gameinfo2 = {"너도 게임", 2018, 70, "너도회사"};
    
    printf("--게임출시정보--\n");
    printf("게임명 : %s \n", gameinfo2.name);
    printf("발매년도 : %d\n", gameinfo2.year);
    printf("가격 : %d\n", gameinfo2.price);
    printf("발매회사 : %s \n", gameinfo2.company);
    
// 구조체 배열
    struct Gameinfo gameArray[2] = {
        {"나랑 게임", 2018, 56, "나도회사"},
        {"너랑 게임", 2018, 56, "너도회사"}
    };

// 구조체 포인터
    struct Gameinfo *gamePtr; //미션맨
    gamePtr = &gameinfo1;
    printf("--게임출시정보--\n");
    printf("게임명 : %s \n", (*gamePtr).name);
    printf("발매년도 : %d\n", (*gamePtr).year);
    printf("가격 : %d\n", (*gamePtr).price);
    printf("발매회사 : %s \n", (*gamePtr).company);

    // 조금 더 편한 방법 
    printf("--게임출시정보--\n");
    printf("게임명 : %s \n", gamePtr->name);
    printf("발매년도 : %d\n", gamePtr->year);
    printf("가격 : %d\n", gamePtr->price);
    printf("발매회사 : %s \n", gamePtr->company);
    
//구조체 안의 구조체
    //연관업체 게임

    gameinfo1.friendGame = &gameinfo2;
    printf("--연관업체의 게임출시정보--\n");
    printf("게임명 : %s\n", gameinfo1.friendGame->name);
    printf("발매년도 : %d\n", gameinfo1.friendGame->year);
    printf("가격 : %d\n", gameinfo1.friendGame->price);
    printf("발매회사 : %s\n", gameinfo1.friendGame->company);
    

//typedef
    int i = 1;
    typedef int 정수;
    typedef float 실수;
    정수 정수변수 = 3; //int i = 3;
    실수 실수변수 = 3.23f; //float f = 3.23f
    printf("\n\n정수변수 : %d, 실수변수 : %.2f\n\n", 정수변수, 실수변수);

    typedef struct Gameinfo 게임정보;
    게임정보 game1;
    game1.name = "한글 게임";
    game1.year = 2015; 

    GAME_INFO game2;
    game2.name = "한글 게임2";
    game2.year = 2014;

    /* struct Gameinformation game3;
    game3.name = "한글 게임" */

    return 0;
}