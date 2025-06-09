#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANDIDATE_COUNT 6
#define INFO_COUNT 11
#define MAX_LEN 100

char member_info[CANDIDATE_COUNT][INFO_COUNT][MAX_LEN];
char *candidate01 = (char *)member_info[0];
char *candidate02 = (char *)member_info[1];
char *candidate03 = (char *)member_info[2];
char *candidate04 = (char *)member_info[3];
char *candidate05 = (char *)member_info[4];
char *candidate06 = (char *)member_info[5];

void flush_input() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int calculate_age(const char *birthdate) {
    int byear, bmonth, bday;
    int cyear = 2025, cmonth = 6, cday = 9;
    sscanf(birthdate, "%d/%d/%d", &byear, &bmonth, &bday);

    int age = cyear - byear;
    if (cmonth < bmonth || (cmonth == bmonth && cday < bday)) {
        age--;
    }
    return age;
}

void replace_newline(char *str) {
    size_t len = strlen(str);
    if (len && str[len - 1] == '\n') str[len - 1] = '\0';
}

int main() {
    char group_name[100];
    char ch;
    int i;

    printf("지원하는 오디션 그룹명을 입력하세요: ");
    fgets(group_name, sizeof(group_name), stdin);
    replace_newline(group_name);

    printf("####################################\n");
    printf("[%s] 오디션 후보자 데이터 입력\n", group_name);
    printf("####################################\n");

    i = 0;
    while (i < CANDIDATE_COUNT) {
        if (i == 0) printf("1 번 후보자의 정보를 입력합니다.\n");
        if (i == 1) printf("2 번 후보자의 정보를 입력합니다.\n");
        else if (i == 2) printf("3 번 후보자의 정보를 입력합니다.\n");
        else if (i > 2) printf("%d번 후보자의 정보를 입력합니다.\n", i + 1);

        printf("---------------------------------\n");
        printf("1. 성명: ");
        fgets(member_info[i][0], MAX_LEN, stdin); replace_newline(member_info[i][0]);

        printf("2. 생일(YYYY/MM/DD 형식): ");
        fgets(member_info[i][1], MAX_LEN, stdin); replace_newline(member_info[i][1]);

        printf("3. 성별(여성 = F , 남성 = M): ");
        fgets(member_info[i][2], MAX_LEN, stdin); replace_newline(member_info[i][2]);

        printf("4. 메일 주소: ");
        fgets(member_info[i][3], MAX_LEN, stdin); replace_newline(member_info[i][3]);

        printf("5. 국적: ");
        fgets(member_info[i][4], MAX_LEN, stdin); replace_newline(member_info[i][4]);

        printf("6. BMI: ");
        fgets(member_info[i][5], MAX_LEN, stdin); replace_newline(member_info[i][5]);

        printf("7. 주 스킬: ");
        fgets(member_info[i][6], MAX_LEN, stdin); replace_newline(member_info[i][6]);

        printf("8. 보조 스킬: ");
        fgets(member_info[i][7], MAX_LEN, stdin); replace_newline(member_info[i][7]);

        printf("9. 한국어 등급(TOPIK): ");
        fgets(member_info[i][8], MAX_LEN, stdin); replace_newline(member_info[i][8]);

        printf("10. MBTI: ");
        fgets(member_info[i][9], MAX_LEN, stdin); replace_newline(member_info[i][9]);

        printf("11. 소개: ");
        fgets(member_info[i][10], MAX_LEN, stdin); replace_newline(member_info[i][10]);

        printf("=================================\n");
        i++;
    }

    printf("\n####################################\n");
    printf("[%s] 오디션 후보자 데이터 조회 \n", group_name);
    printf("####################################\n");
    printf("===================================================================================================\n");
    printf("성   명(나이) | 생   일 | 성별 | 메   일             | 국적 | BMI  | 주스킬 | 보조스킬    | TOPIK   | MBTI |\n");
    printf("===================================================================================================\n");

    for (i = 0; i < CANDIDATE_COUNT; i++) {
        int age = calculate_age(member_info[i][1]);

        printf("%-10s(%2d) |%8s | %-3s | %-19s | %-5s| %-5s| %-7s| %-11s| ",
            member_info[i][0], age, member_info[i][1],
            strcmp(member_info[i][2], "F") == 0 ? "여" : "남",
            member_info[i][3], member_info[i][4],
            member_info[i][5], member_info[i][6],
            member_info[i][7]);

        if (strcmp(member_info[i][8], "0") == 0) {
            printf("원어민  | ");
        } else {
            printf("%-7s | ", member_info[i][8]);
        }

        printf("%-4s |\n", member_info[i][9]);

        printf("-------------------------------------------------------------------------------------\n");
        printf("%s\n", member_info[i][10]);
        printf("---------------------------------------------------------------------------------------------\n");
    }

    return 0;
}
