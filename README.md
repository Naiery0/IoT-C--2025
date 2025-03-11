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
