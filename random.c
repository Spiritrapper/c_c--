#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    // int num = rand()
    printf("난수 초기화 이전..\n");
    for(int i = 0; i < 10; i++)
        printf("%d ", rand() % 10); // 한번나온 랜덤수가 꾸준히 출력

    srand(time(NULL)); // 난수 초기화
    printf("\n\n 난수 초기화 이후 ...\n");
    for(int i= 0 ; i <10; i++)
    printf("%d ", rand() % 10); // 출력때마다 변화된 난수 출력

    return 0;
}