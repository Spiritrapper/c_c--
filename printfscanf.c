#include <stdio.h>
 main(void)
{
    // float f = 46.6f;
    // printf("%.2f\n", f);
    // double d = 3.28856;
    // printf("%.5lf\n", d);
    // printf("1\n");
    // printf("2\n");
    // printf("3\n");
    // const int YEAR =2000;
    // printf("태어난 년도 : %\n")
    // int add = 3 + 5;
    // printf("3+5 =%d\n", add);
    // printf("%d x %d = %d\n", 20, 30, 20 * 30);
    // int one, two, three;
    // printf("3개의 정수를 입력하세여 : ");
    // scanf("%d %d %d", &one, &two, &three);
    // printf("첫번째값 :%d\n", one);
    // printf("두번째값 :%d\n", two);
    // printf("세번째값 :%d\n", three);
    //문자(한글자), 문자열(한글자 이상의 여러글자)
    // char c = 'A';
    // // printf("%c\n", c);
    // char str[256];
    // scanf("%s",str,sizeof(str));
    // printf("%s\n",str );
    // 프로젝트
    // 경찰관이 범죄자의 정보를 입수
    // 이름? 나이? 몸무게? 키? 범죄명?
    char name[256];
    printf("이름이 뭐에여?");
    scanf("%s", name, sizeof(name));

    int age;
    printf("몇살이예요");
    scanf("%d", &age);

    float weight;
    printf("몸무게는 몇 kg 이예요?");
    scanf("%f", &weight);

    double height;
    printf("키는 몇 cm이에요?");
    scanf("%lf", &height);

    char what[256];
    printf("무슨 범죄를 저질렀나요?");
    scanf("%s", what, sizeof(what));

    //조서 내용 출력
    printf("\n\n --- 범죄자 정보 ---\n\n");
    printf(" 이름      : %s\n", name);
    printf(" 나이      : %s\n", age);
    printf(" 몸무게     : %.2f\n", weight);
    printf(" 키        : %.2lf", height);
    printf(" 범죄       : %s\n", what);

    return 0;
}