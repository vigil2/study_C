//////////

()가 붙은 단어를 함수라고 함

//////////

num1 = 10
c언어에서 ' = '는 10을 num1에 '할당한다'로 쓰임 (수학에서의 같다의 의미가 이니다)
 ex) 변수 = 값; , 변수1 = 변수2; (변수 2의 값이 변수 1에 저장됨)

//////////
변수를 선언하면서 값을 할당하는 과정을 초기화라고 한다.

//////////
디버거는 버그를 제거(de-)하는 도구
F9는 break point를 만듬/삭제
F10은 한단계씩 실행

//////////

//////////
integer, real number

variable, constant

//////////

printf = f means formmatted

서식화된 출력을 지원함


//////////

expression, statement 차이

1. expression
    수식이라는 뜻으로 하나이상의 값으로 표현(reduce)될 수 있는 코드를 말한다.
    핵심은 expression는 평가(evaluate)가 가능해서 하나의 "값"으로 환원된다는 것이다

2. statement
    진술 서술 이라는 의미로 프로그래밍에서는 실행가능한(excutalbe) 최소의 독립적인 코드 조각을 일컫는다. 
    핵심은 statement는 평가(evaluate)가 가능해서 하나의 값으로 환원된다는 것이다.

https://shoark7.github.io/programming/knowledge/expression-vs-statement



////////// 4강 함수

선언(declaration) : 메모리 비할당
정의(definition)  : 메모리 할당 

//////////
argument (전달인자, 인수) : 함수를 호출할 때 사용되는 값
parameter(매개변수, 인자) : 함수를 정의할 때 외부로부터 받아들이는 임의의 값 
                        (전달값)
//////////
4가지 형태의 함수
    전달 인자 有, 반환 값 有
    전달 인자 有, 반환 값 無
    전달 인자 無, 반환 값 有
    전달 인자 無, 반환 값 無

//////////

매개변수는 variable, 전달인자는 value로 보는것이 일반적

ex)
함수(3,4);

ex)
function 함수(aaa, bbb){
    return aaa+bbb;

//////////

data type 

//////////

size_t -> unsigned int


//////////
변수의 유효 범위(variable scope)
    C언어에서는 변수의 선언 위치에 따라 해당 변수의 유효 범위, 메모리 반환 시기, 초기화 여부, 저장되는 장소 등이 변경됩니다.

C언어에서 변수는 위와 같은 특징들을 기준으로 다음과 같이 나눌 수 있습니다.

1. 전역변수 (global variable)
    함수의 외부에서 선언된 변수 
2. 지역변수 {localvariable}
    블록 내에서 선언된 함수. 블록이 종료되면 메모리에서 사라짐
3. 정적변수 (static variable)
    C언어에서 정적 변수란 static 키워드로 선언한 변수를 의미.
    지역변수와 전역변수의 특징을 모두가짐.
4. 레지스터 변수(register variable)
    지역변수를 선언할때 register 키워드를 붙여 선언한 변수

//////////

절차지향 프로그래밍 (Procedural Programming)
객체지향 프로그래밍 (Object Oriented Programming) (OOP)
함수형 프로그래밍 (functional programming)
파이썬[Python] : 플랫폼 독립적이며 인터프리터식, 객체지향적, 동적 타이핑(dynamically typed) 대화형 언어

//////////

Monolithic architecture
Mircoservice architecture
CDN(content delivery Network)

//////////

Compile lang
interpreter lang
script lang

//////////

cookies, = 옮기는 시스템
session
token = 서버가 기억하는 이상하게 생긴 텍스트 string
JWT = 정보를 갖고있는 토큰, DB 없이 검증할 수 있음 ex) qr code

//////////
correct data structure + correct algorism-> code speed faster!

1. linear search (선형검색 알고리즘)
-> 배열 순서없이 나열 된 자료를 순서대로 찾아서 서치시간이 오래걸림 (내 생각)
-> 배열이 커질수록 시간이 오래걸림 linear time complexity (선형시간 복잡도)

2. binary search (이진검색 알고리즘) = sorted array(정렬된 배열)에서만 사용가능
-> 순서대로 나열된 자료를 찾아서 서치시간이 빨라지지만 배열을 키우면 정렬하는데 시간이 오래걸림
-> 하나를 두개로 쪼개서 검색, 즉 가운데서 시작해서 좌우 중 어디로 갈지 결정. 다시 중간으로 이동
--->> 즉, 아무리 데이터가 많은 상황이어도 14스탭정도의 작은 단계만 거쳐도 해결가능
 
3. sorting (정렬 알고리즘) 

//////////
big O ?
https://www.youtube.com/watch?v=BEVnxbxBqi8

O(log n)의 그래프를 그려보자. x축 input y축 time.
(참고로 big O에서 base(밑)는 쓰지 않음)
Big O의 특성상 밑 숫자는 사라짐 (상수무시)
-> 그래프를 그려보면 input이 아무리 증가해도 time의 값은 어느순간 수렴해간다.
즉 linear Time(y = x)의 그래프보다는 빠르고
Constant time(y = t(상수))보다는 느리다.
하지만 기억해야할 것은 여기엔 tradeoff가 있다.

logarism, exponent

//////////
hash function 해시함수
    (python dictionary, JS object, Go map)
    https://www.youtube.com/watch?v=HraOg7W3VAM

array는 linear time이라 시간이 오래걸리지만
hash function을 이용하면 constant time이라 빠르다.
-> 하지만 해시함수에 대입해서 똑같은 배열을 지정받는 collition(춫돌)이 일어나는 경우에는
constant search time으로 배열을 찾은 후 linear search를 해야한다. 
하지만 평균적인 시나리오는 constant time으로 흘러간다.

key를 hash funtion에 넣으면 hash table의 배열? 또는 list의 번호를 받는다.
번호를 준곳에서 key의 value 값을 찾을 수 있다.
-> key 와 value를 저장하지않고 value만 저장한다.

//////////

c와같은 저급 언어를 컴파일하면 기계어와 근접한 assembly language를 얻게된다.

assembly language 단계

    1. load : 메모리에 공간을 예약
    2. put : 해당 메모리 주소에 숫자를 넣음
    3. add : 메모리 주소의 내부에 값을 추가

intel ARM 은 각기다른 ISA(Instruction Set Architecture)를 가지고있다.
ISA = 프로세서가 실행할 수 있는, 지원되는 '명령' 또는 '커맨드' 집합을 뜻함.
즉 인텔과 ARM은 각기 컴파일을해서 해당 프로세서의 명령을 따르는 assembly code를 만들어야함.

intel AMD
    CISC(Complex instruction set computing) architecture
ARM
    RISC(Reduced Instruction Set Computing) architecture

 Itenl AMD = Complex
    지시사항이 많다. 대신 복잡한 지시를 한번에 해결해서 시간이 좀 걸림 -> 프로세서가 수행하는게 복잡할수록 에너지 요구량이 높아져서 베터리 활용도 떨어짐
 
 ARM = Reduced
    기본작업을 빠르게 수행. 여러개의 기본작업을 수행해서 빠르다. -> 수행이 단순하여 에너지요구량이 적고 베터리 효율이 좋음,필요한 트랜지스터도 적고 가격도 싸고 크기도 작음. -> 모바일에 적합

요즘에는 CISC와 RISC의 경계가 희미해짐. 서로의 장점을 배워서 희석

//////////
함수형 프로그래밍

명령형(imperactive)
    원하는 결과를 얻기 위해 필요한 지침에 따라 코드가 작성됨.
    명령형 코드는 결과값에 "어떻게" 도달하느냐가 관건.

선언형(declartive)
    원하는 결과를 표현하기 위해 코드가 작성됨.
    즉, 선언형 코드는 "결과값"을 선언하는 것이다.

ex)
css -> 선언형 코드
    배경색을 토마토색으로 바꾸려면 background-color;tomato;만 입력하면됨.
    원하는 결과를 얻기위한 단계를 작성하지 않음.
    원하는바를 작성하면 브라우저가 이을 어떻게 해낼지 알아내서 가져온다.
    내가 직접 본문 (요소(element))를 가져오고 존재하는지 확인하고 스타일에 엑세스하고 배경색을 재정의하고 등등을 할 필요가 없다.

    이것을 직접하면 명령형 코드임. 

ex)
JS -> 명령형 코드
    그러나 이는 '선언형 코드' 형태의 함수를 갖고 있다.
    Hello Nomad Coders
    에서 공백을 제거하고 ❤️를 넣는다면
    명령형 코드에서 이를 해결하는 방법은
    최종결과를 아래와 같은 코드로 진행한다.

function spaceToHeart(text){
    let result = "";  // 촤종결과를 보유할 변수를 만듬
    for (let i = 0; i < text. length; i++){ // 지우려는 텍스트의 각 문자 내부를 살핌
        if (text[i] === " "){ // 문자가 공백인지 여부에 따라서.
            result += "❤️"; // 결과 문자열에 하트를 추가함.
            } else {
                result += text[i];
            }
        }
    }
    return result; // 완료 후 리턴
}

    이렇듯 요구사항을 충족하는데 필요한 모든 단계를 하나씩 적고있음.

    동일한 함수를 선언형 코드로 보면

function spaceToHeart(text) {
    return text. replaceAll(" ","❤️")
}

    결과는 동일하지만 선언형이 읽기가 더 쉽고, 함수가 무슨역할을 하는지 이해하기 편함.
    replaceAll의 함수의 내부 작업에서는 앞서작성했던 명령형 코드가 있을 수 있다.

    즉,, 모든 선언형 코드는 명령형 코드 위에 쓰여진다고 할 수 있다.

    명령형코드와 같이 코드가 길어지는 것 외에 또다른 문제점은 요구사항의 구현이 개발자인 우리에게 달려있기 때문에 코드를 작성하다보면 버그나 실수가 더 생길 수 있다.

    팀 동료들은 또한 더 이해하기 어려울 수 있다.
    함수가 정확히 무엇을 하려고 하는지, 한줄 한줄, 자세히 읽어야 할 것이다.

    https://www.youtube.com/watch?v=7aEQLvvnQIY (뒷부분 코드 이해 안됨!!!!)

//////////
객체지향 프로그래밍
    https://www.youtube.com/watch?v=cg1xvFy1JQQ
    (Object Oriented Programming)(OOP)
    (Java, C++, C#)
    
    JS, Python같은 객체지향이 아닌 언어도 이를 지원함

    ex)
    비디오게임을 만든다.
    플레이어 객체(object)가 필요함.
    각 플레이어 객체는 각각 다른 데이터를 갖을 것이고
    JS로 표현한다면

    const player = {
        name : "bill gates",
        health : 85,
        skill : "programmer",
    }
    플레이어 한명만 만든다면 이렇게 코딩을 해도된다.

    하지만 숫자가 늘어나면 문제가 생기기 시작 

    패턴이나 이슈가 발견.

    모두가 name, helath, skill등을 가지고 있음. 다른점은 테이터 뿐이다.

    여기서 생기는 이슈는 플레이어를 구성하는 모습이 어떠해야 한다는 일정의 '구조'에 대한 고민이 없음.
    실수를 해서 '기술'을 넣는걸 빼먹을 수도 있음.
    혹은 속성(attribute)을 쓰는데 오타를 내는 등.. 

    즉 플레이어에  새로운 속성 EXP를 추가하고싶다면 모든 플레이어에게 가각 추가를 해줘야한다.

    더 좋은 방법은 player factory를 만드는 것이다.
    데이터만 넣으면 적용해주는 함수가 있고 플레이어 객체를 아웃풋으로 얻을 수 있는 공장.
    이렇게하면 복제를 할 필요도 없고 스펠링 에러도 피할 수 있다.
    EXP 속성을 player factory에서 추가만 하면 모든 플레이어들이 한번에 업데이트 된다.  
    이것이 OOP의 초석을 사용할 때이고 이는 바로 Class의 개념이다.
    Class는 객체를 위한 팩토리(factory for object) 같은 곳이다.
    
    같은 속성을 가지고 있지만 데이터는 다른경우 Class는 일종의 구조, 설계도를 만들어준다.
    플레이어 객체가 어떻게 보여야 하는지에 대한 도면을 정의해준다.

    ex) JS 공장
        class player {
            constructor(name, helath, skill){
            // constructor는 정상적인 함수이지만 
            // Class 내에 있기때문에 함수라 부르지 않고, method라고 부름
                this.name = name;
                this.health = health;
                this.skill = skill;
                this.xp = 0;
                // this. 는 플레이서 클래스 내에서 attribute(속성) 및 method를 지칭한다.
            }
        }
        그들의 속성(property)에 접근
        const elon = new player("Elon Musk", 90, "legend");
        console.log(elon.skill);

    ex) Python 공장
        def __init__(self, name, helath, skill);
        // __init__ 은 정상적인 함수이지만 
        // Class 내에 있기때문에 함수라 부르지 않고, method라고 부름
            self.name = name
            self.health = health
            self.skill = skill
            self.xp = 0
            // self. 는 플레이서 클래스 내에서 attribute(속성) 및 method를 지칭한다.
        
        그들의 속성(property)에 접근
        warren = Player("Warren Buffett", 100, "Investor")
        print(warren.health)

        이처럼 Class는 일종의 금형 설계도 같은 것이다.
        instance 또는 object는 쿠키 금형을 사용하여 얻은 쿠키에 속한다.

        Class는 요소(element)들을
        특정 class로 묶는 속성(attribute냐? property냐?)이다.??

?? 6분 31초부터 코드 이해 못함 정리하자 ??

    객체지향의 가장 중요한 핵심 개념 
    
    inheritance(상속)
        상속은 코드를 줄이고 코드를 재사용 가능한 조각으로 나눌 수 있다.
        오프라인에서 상속은 누군가 죽고 그걸 상속받지만
        OOP 세상에서는 그 누구도 죽지 않지만
        child class가 father class의 속성을 가지게 된다.

        ex)
            심즈같은 시뮬레이션을 한다면
            인간이라는 클래스를 만들고
            그에 속하는 아기 클래스도 필요하다.
            청소년 클래스도 필요함.
            여기서 코드중복일 일어남.
            조금씩은 다르지만.. 이들은 다 인간에 속한다.
            이름이 있고 두 팔다리를 가지고 있다.
            바로 이때 상속이란 개념이 필요하다.
            모든 클래스에 this.name을 생성하는 모든 class에 적는대신
            this.name을 가진 클래스에서 '확장'하면 된다.
            그 클래스는 '인간'이다. 
            
            '인간' class (father class)

                class human{
                    constructor(name){
                        this.name = name;
                        this.arms = 2;
                        this.legs = 2;
                    }
                }
            '아기' class (child class) 
            인간 class의 속성(property)을 다 가지고 추가적으로 그들만의 다른 속성을 가질수 있다.
            
                class baby extend Human{
                    constructor(name){
                        this.cute = true;
                    }
                    cry(){
                        return 'waa waa';
                    }
                }

            아기 class에서 인간 constructor method를 호출하려면
            아기 class의 constructor에서 super method라는 걸 호출해야한다.
            그러면 잘 작동할것이다???이해 안 됨

데이터를 모델링하고, 조작하고, 엑세스하는 방법은 OOP를 사용하면 편하다.

??attribute와 property의 차이는 무엇인가??

    //

설계 도면이 'class'라면 건물은 'instance'이다.
여기서 count 함수는 총 집을 지은개수를 나타낸다.
여기서 count는 각각의 instance 보다는 class를 관리하는데
 중요한 함수이다.
 이러한 클래스단위로 공통적으로 관리가 가능한 함수를 static 함수라고 한다.