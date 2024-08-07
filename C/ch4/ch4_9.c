// <4-9>

/*flags.c -- 몇 가지 포맷 변경자 플래그를 보여 준다.*/
#include<stdio.h>
int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31);  // 1f 1F 0x1f  ==> 31의 16진수 표기
    printf("**%d** %d** %d**\n", 42, 42, -42);  // 포맷 변경자 앞에 스페이스를 넣을 시 양수는 띄어쓰기 한칸, 음수는 -를 붙여 출력된다.
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6); // 포맷 변경자 앞에 0을 넣으면 남은 필드 자리에 0을 채워넣는다.

    return 0;
}
// - 포맷 변경자앞에 숫자를 쓰면 그 숫자는 필드 수를 나타낸다.
// - 포맷 변경자 앞에 스페이스를 넣을 시 양수는 띄어쓰기 한칸, 음수는 -를 붙여 출력된다.
// - 포맷 변경자 앞에 + 를 넣을 시 양수는 + 음수는 - 를 붙여 출력된다.
// - 포맷 변경자 앞에 0을 넣으면 남은 필드 자리에 0을 채워넣는다.

// <출력문>
// 1f 1F 0x1f
// **42** 42** -42**
// **    6**  006**00006**  006**