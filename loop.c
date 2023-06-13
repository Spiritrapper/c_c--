#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    // printf("hello World");
    // // ++ 뿔뿔
    // int a = 50;
    // printf("a 는 %d\n" , a);
    // a++;
    // printf("a 는 %d\n", a);
    // a++;
    // printf("a 는 %d\n", a);
    // a++;
//    int b = 20;
//    printf("b 는 %d\n", ++b); //출력전에 더해서 출력
//    printf("b 는 %d\n", b++); //출력후 더해짐
//    printf("b 는 %d\n", b);   //앞에 더해진 값이 출력됨
    // 반복문
    // for, while, do while 

    // for (선언; 조건 증감)
    // for(int i =1; i <= 10; i++)
    // {
    //     printf("Hello World %d\n",i);
    // }
    // int i = 1;
    // while(i <= 10)
    // {
    //     printf("Hello World %d\n", i++);
    // }

    // do {  } while (조건);
    // int i = 1;
    // do {
    //     printf("Hello World %d\n", i++);
    // } while (i <=10);

    // 2중 반복문
    // for(int i = 1; i <= 3; i++)
    // {
    //     printf("첫 번째 반복문 : %d\n", i);

    //     for(int j =1; j<=5; j++)
    //     {
    //         printf(" 두 번째 반복문 : %d\n", j);
    //     }
    // }
    // int n ;  // 다이아몬드의 크기 (줄 수)
    // int i, j, space;
    // printf("몇층을 쌓을것인가?");
    
    // scanf("%d\n", &n);

    // // 위쪽 부분 출력
    // for (i = 1; i <= n; i++) {
    //     // 공백 출력
    //     for (space = 1; space <= n - i; space++) {
    //         printf(" ");
    //     }

    //     // 별 출력
    //     for (j = 1; j <= 2 * i - 1; j++) {
    //         printf("*");
    //     }

    //     printf("\n");
    // }

    // // 아래쪽 부분 출력
    // for (i = n - 1; i >= 1; i--) {
    //     // 공백 출력
    //     for (space = 1; space <= n - i; space++) {
    //         printf(" ");
    //     }

    //     // 별 출력
    //     for (j = 1; j <= 2 * i - 1; j++) {
    //         printf("*");
    //     }

    //     printf("\n");
    // }
    // 버스를 탄다고 가정. 학생 / 일반인으로 구분 (일반인:20세)
    // int age = 15;
    // if(age >=20){
    //     printf("일반인 입니다.\n");
    // }else{
    //     printf("학생입니다.\n");
    // }
    // 초등학생(8~13) / 중학생(14~16) / 고등학생(17~19)으로 나누면
    // if/ else if / else

    // int age = 20;
    // if(age >= 8 && age <= 13){
    //     printf("초등학생입니다.\n");
    // }
    // else if (age >= 14 && age <= 16){
    //     printf("중학생입니다.\n");
    // }else if (age >= 17 && age <= 19){
    //     printf("고등학생입니다.\n");
    // }else {
    //     printf("학생이 아닌가봐\n");
    // }

    // break / continue 
    // 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
    // for( int i =1; i <= 30; i++)
    // {
    //     if(i >=6)
    //     {
    //         printf("나머지 학생은 집에 가세요\n");
    //         break; // 바로 for문 종료
    //     }
    //     printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
    // }

    // // 1번 부터 30번까지 있는 반에서 7번 학생은 아파서 결석
    // // 7번 제외하고 6번 부터 10번까지 조별 발표를 하세요
    // printf("\n");
    // for(int i = 1; i <= 30; i++)
    // {
    //     if(i >= 6 && i <= 10)
    //     {
    //         if (i == 7){
    //         printf("%d 번 학생은 결석입니다.\n", i);
    //         continue; // 바로 i++로 넘어감
    //         }
    //         printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
    //     }
       
    // }

    // && ||
    // int a = 10;
    // int b = 11;
    // int c = 12;
    // int d = 13;
    // if(a == b && c == d)
    // {
    //     printf("a 와 b 는 같고, c 와 d 도 같습니다\n");
    // }
    // else
    // {
    //     printf("값ㅅ이 서로 다르네요\n");
    // }
    

    // 가위 바위 보
    // 가위 0 바위 1 보 2
    srand(time(NULL));
    int i = rand() % 3; 
    if(i == 0)
    {
        printf("가위\n");
    }
    else if (i == 1)
    {
        printf("바위\n");
    }
    else if (i == 2)
    {
        printf("보\n");
    }
    else 
    {
        printf("몰라요\n");
    }

    // srand(time(NULL));
    // int i = rand() % 3; // 0 ~ 2 반환
   
    // switch (i) //값
    // {
    //     case 0: printf("가위\n"); break;  // case는 break를 만나지않으면 모든 case를 다수행한다.
    //     case 1: printf("바위\n"); break;
    //     case 2: printf("보\n"); break;
    //     default:printf ("몰라요\n"); break;
    // }

    // int age = 11;
    // switch(age)
    // {
    //     case 8:
    //     case 9:
    //     case 10:
    //     case 11:
    //     case 12:
    //     case 13: printf("초등학생입니다.\n"); break;
    //     case 14: 
    //     case 15:
    //     case 16: printf("중학생입니다.\n"); break;
    //     case 17:
    //     case 18:
    //     case 19:printf("고등학생입니다.\n"); break;
    //     default: printf("학생이 아닌가봐여\n"); break;   
    // }

    // Up and Down 
    srand(time(NULL));
    int num = rand() % 100 + 1; // 1-100 사이의 숫자
    //printf("숫자 : %d\n", num);
    int answer = 0;
    int chance = 5;
    while (chance >0)
    {
        printf("남은 기회 %d 번 \n", chance--);
        printf("숫자를 맞혀보세요 (1~100): ");
        scanf("%d", &answer);
        if(answer > num)
        {
            printf("Down ↓\n\n");
        }
        else if (answer < num)
        {
            printf("Up ↑ \n\n");
        }
        else if (answer == num)
        {
            printf("정답입니다.! \n\n");
        }
        else
        {
            printf("알 수 없는 오류가 발생했습니다.\n\n");
        }
        if(chance == 0)
        {
            printf("모든 기회를 다 사용 하셨네요.\n\n");
            break ;
        }
    }


    return 0;
}