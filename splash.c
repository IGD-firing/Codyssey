#include <stdio.h>
#include <stdlib.h>

int main() {
    //반드시 인코딩 EUC-KR로 전환할것.
    //변수설정
    int Yearvalue, Monthvalue, Dayvalue;
    char chnyear[] = "yyyy";
    char chmonth[] = "mm";
    char chday[] = "dd";
    char name;
    //날자입력, -이용시 날자 음수값으로 출력 , _로 변경함.
    printf("[현재 날자를 '%s_%s_%s' 형식으로 입력하세요.]: ", &chnyear, &chmonth, &chday);
    scanf("%d_%d_%d", &Yearvalue, &Monthvalue, &Dayvalue);
    //이름 입력, 도무지 공백 포함해서 이름 입력하게 하는방법 모르겠음.
    printf("[당신의 이름을 입력하세요.]:");
    scanf("%s", &name);
    printf("**입력이 정상적으로 처리되었습니다.**\n");
    //화면초기화
    system("cls");
    //스프라이트
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("*****************                                                                *****************\n");
    printf("*               *                    [마그라테아 ver 0.1]                        *               *\n");
    printf("*****************                 풀 한 포기 없는 황무지에서                     *****************\n");
    printf("**             **            반짝이는 행성을 만들내는 곳 마그라테아,             **             **\n");
    printf("* *           * *              사람들이 보지 못하는 잠재력을 찾고                * *           * *\n");
    printf("*  *         *  *             전문가의 손길을 더해 보석을 빗는 곳,               *  *         *  *\n");
    printf("*   *       *   *               마그라테아에 오신걸 환영합니다.                  *   *       *   *\n");
    printf("*    *     *    *                                                                *    *     *    *\n");
    printf("*     *   *     *                                                                *     *   *     *\n");
    printf("*      * *      *                                                                *      * *      *\n");
    printf("*       *       *                                                                *       *       *\n");
    printf("*****************                                                                *****************\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("[사용자]: %s                                                       ", &name);
    //사용자 이름 출력
    printf("[실행 시간]: %d년 %d월 %d일\n", Yearvalue, Monthvalue, Dayvalue);
    //실행시간 날자 출력력
    printf("==================================================================================================");

    return 0;
}
//     gcc splash.c -o splash
//     ,/splash
