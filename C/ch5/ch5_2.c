// <5.2>
// shoes2.c -- 여러 개의 신발 사이즈를 인치 단위로 계산한다.

#include <stdio.h>
#define ADJUST 7.31     // 기호 상수의 한 종류

int main(void)
{
    const double SCALE = 0.333;     // 기호 상수의 다른 종류
    double shoe, foot;

    printf("신발 사이즈(남자용)  발길이\n");
    shoe = 3.0;

    while (shoe < 18.5)     // while 루프의 시작
    {                       // 블록의 시작
        foot = SCALE * shoe + ADJUST;
        printf("%10.1lf %15.2lf 인치\n", shoe, foot);
        shoe = shoe + 1;
    }                       // 블록의 끝
    printf("그 신발이 발에 맞는다면, 그것을 신으세요.\n");
    return 0;
}
/*
- while 문은 while 바로 다음에 오는 괄호()안의 조건이 참이면 while의 블록{}안의 루프를 계속 돈다.
- 때문에 위 코드에서는 while문 블록 마지막에 shoe 변수값에 1을 더해줌으로써 shoe 변수값이 18이 될때까지 루프를 반복한다.
- 만약 마지막 줄이 없었다면 shoe는 항상 18.5보다 작으므로 무한반복 하게 된다.
*/
// <출력문>
// 신발 사이즈(남자용)  발길이
//        3.0            8.31 인치
//        4.0            8.64 인치
//        5.0            8.97 인치
//        6.0            9.31 인치
//        7.0            9.64 인치
//        8.0            9.97 인치
//        9.0           10.31 인치
//       10.0           10.64 인치
//       11.0           10.97 인치
//       12.0           11.31 인치
//       13.0           11.64 인치
//       14.0           11.97 인치
//       15.0           12.30 인치
//       16.0           12.64 인치
//       17.0           12.97 인치
//       18.0           13.30 인치