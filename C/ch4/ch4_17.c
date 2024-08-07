// <4-17>

//skiptwo.c -- 입력에서 처음 2개의 정수를 건너뛴다
#include<stdio.h>
int main(void)
{
    int n;

    printf("3개의 정수를 입력하시오: \n");
    scanf("%*d %*d %d", &n);
    printf("마지막으로 입력한 정수는 %d이다.\n",n);

    return 0 ;
}
// - scanf()함수에서는 *를 printf()와 전혀 다른 용도로 사용한다.
// - scanf()에서 %와 지정자 문자 사이에 *를 넣으면, scanf()가 그에 해당하는 입력을 건너뛴다.
// - 예제 4.17에서 scanf()문은 "처음 2개의 정수를 건너뛰고 세 번째 정수를 읽어 n에 넣어라." 하고 지시하는것과 같은것.
// - %와 지정자 문자 사이에 *를 넣으면 scanf()가 그에 해당하는 입력을 건너 뛰기 때문이다.

/* 
<출력문>
3개의 정수를 입력하시오:
2013 2014 2015
마지막으로 입력한 정수는 2015이다.
*/