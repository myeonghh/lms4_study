// <5.4>
// squares.c -- 처음 20까지의 제곱표를 만든다.

#include <stdio.h>
int main(void)
{
    int num = 1;
    while (num < 21)        // num이 21보다 작을때까지 괄호안의 내용을 반복
    {
        printf("%4d %6d\n", num, num * num);
        num = num + 1;      // 괄호 안 마지막에 num에 +1 을 해주어 반복문이 끝날 수 있게 함
    }
    return 0;
}
// 위 코드는 while 루프를 통해 정수 20까지의 제곱을 출력한다.
// - C는 거듭제곱 연산자를 제공하지 않는다.
// - 대신 C 표준 수학 라이브러리가 거듭제곱 연산을 하기 위한 pow() 함수를 제공한다. ex) pow(3, 5) == 3의 5제곱
// <출력문>
//    1      1
//    2      4
//    3      9
//    4     16
//    5     25
//    6     36
//    7     49
//    8     64
//    9     81
//   10    100
//   11    121
//   12    144
//   13    169
//   14    196
//   15    225
//   16    256
//   17    289
//   18    324
//   19    361
//   20    400