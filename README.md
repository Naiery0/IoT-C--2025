# IoT-C--2025
- IoT-C언어 학습 리포지토리
- **본 리드미는 누락된 학습 내용이 많음**

# 1일차
- 자료형
- 상수
    - const - 포인터를 통해 변경 가능
        ```c
        const double pi = 3.14; // const : 상수
        double* dp = &pi;
        *dp = 4.0;
        ```
- printf
- scanf
    - scanf_s( , ,sizeof())는 오버플로우 방지
        ```c
        char str[20];
        scanf_s("%s", str, sizeof(str));
        ``` 

# 2일차
- shift: [C](./day02/c_shift.c)
    - 맨 앞의 비트는 부호비트
- 논리연산, 삼항연산, 단항연산
- 제어문
    - 조건 (if, switch)
    - 반복 (for, while)
- 형변환
- 함수
- 계산기: [C](./day02/c_계산기.c)
    - 만드는 중 특이점 발생
    ```c	
        int num1;
        int num2;
        char oper;

    	printf("두 정수를 입력하시오.\n");
		scanf_s("%d", &num1);
		scanf_s("%d", &num2);

		getchar();

		printf("연산자를 입력하시오. ( + | - | x | / ) ... 종료: Q \n");
		scanf_s("%c", &oper);
		printf("\n입력한 식: %d %c %d\n", num1, oper, num2);
    ```
        - 위 코드 실행 후 입력 시, 입력한 식이 이상하게 출력됨.
    ```c
        scanf_s(" %c", &oper, sizeof(oper));
    ```
        - sizeof(oper)를 추가하여 해결...
        - 그냥 scanf 쓰면 이런 문제 안 생김

# 3일차
- 배열
    - char형 배열(문자열): [C](./day03/c_문자배열.c)
        - 끝부분엔 (null)이 들어가야(들어갈 공간이 있어야) 정상적으로 출력됨.
    - 배열의 이름은 배열의 시작주소임
- 포인터
    - 포인터와 상수: [C](./day03/c_포인터와_상수.c)
    - *(배열이름) == 배열이름[0] ... *(배열이름 + 1) == 배열이름[1]
- char: [C](./day03/c_input_char.c)
    - getchar()
    - putchar()
    - 아스키코드 활용 대소문자 변환: [C](./day03/c_대소문자변환기.1c)

# 4일차
- 행렬
- 포인터
    - 이중 포인터
    - 배열포인터
    - 포인터배열
- string
    - 문자열을 다루는 함수
