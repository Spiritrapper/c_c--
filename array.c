#include <stdio.h>

int main(void)
{
    // // 배열
    // int subway_1 = 30;
    // int subway_2 = 40;
    // int subway_3 = 50;

    // printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
    // printf("지하철 2호차에 %d 명이 타고 있습니다.\n", subway_2);
    // printf("지하철 3호차에 %d 명이 타고 있습니다.\n", subway_3);

    // //  여러 개의 변수를 함께, 동시에 생성
    // int subway_array[3]; // [0],[1],[2]
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for(int i = 0; i < 3; i++)
    // {
    //     printf("지하철 %d호차에 %d 명이 타고 있습니다.\n", i+1, subway_array[i]);
    // }

    // 값 설정 방법
    // 값은 항상 초기화를 반드시 해야함
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // 배열 크기는 항상 상수로 선언
    // int size = 10;
    // int arr[10];

    // int arr[10] = {1,2}; // 3번째 부터느 0값으로 초기화된다.
    // for(int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // int arr[] = {1, 2}; // arr[2] 실제 배열크기 C언어서 사용

    // float arr_f[5] = {1.0f, 2.0f, 3.0f};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%.2f\n", arr_f[i]);
    // }

    // 문자 vs 문자열
    // char c = 'A';
    // printf("%c\n", c);

    // 문자열 끝에는 '끝'을 의미하는 NULL문자 '\0'포함해야한다.
    //char str[6] = "coding"; // error 배열크기가 부족 coding + \0포함되어야해서 
    // char str[7] = "coding"; // \0 문자 포함될 충분한 크기확보 크기가 7인 str 배열{c, o, d, i, n, g, \0}
    // printf("%s\n", str);

    // char str[] = "coding";
    // printf("%d\n", str);
    // printf("%d\n", sizeof(str));

    // for(int i = 0; i < sizeof(str); i++)
    // {
    //     printf("%c\n", str[i]);
    // }

    // char kor[] = "나도코딩";
    // printf("%s\n", kor);
    // printf("%d\n", sizeof(kor));
    // 영어 1글자 : 1 byte
    // 한글 1글자 : 2 byte
    // char 크기 : 1 byte

    // char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0' };
    // char c_array[6] = {'c', 'o', 'd', 'i', 'n', 'g'}
    // printf("%s\n", c_arrY);

    // char c_array[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
    // printf("%c\n", c_array[i]);
    // for(int i = 0; i < sizeof(c_array); i++)
    // {
    //     print("%d\n", c_array[i]);
    // }

    // 문자열 입력 받기 : 경찰서 조서 쓰기 예제
    // char name[256];
    // printf("이름이 뭐에여?");
    // scanf("%s", name, sizeof(name));

    // 참고 : ASCII 코드? ANSI(미국표준협회)에서 제시한 표준 코드 체계
    // 7bit 총 128개 코드 (0-127)
    // a : 97
    // A : 65

   
    // printf("%c\n", 'a');
    // printf("%d\n", 'a');
    // printf("%c\n", 'A');
    // printf("%d\n", 'A');
    // printf("%c\n", '\0');
    // printf("%d\n", '\0');
    // printf("%c\n", '0');
    // printf("%d\n", '0');

    //참고2 : 0-127 사이의 아스키코드 정수값
    for (int i =0; i < 100; i++)
    
    



    return 0;
}