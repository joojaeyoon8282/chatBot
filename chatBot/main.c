/* 간단한 규칙 기반 챗봇 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

char user_input[256];
int randomNumber = 0;

typedef struct {
    char* Question[2];
    char* Answer[2];
} responses;

responses dataStorage[] = {
    {"안녕", "헬로", "안녕하세요! 만나서 반가워요.", "안녕하세요! 오늘 기분은 어떠세요?"},
    {"이름", "이름이 뭐야", "제 이름은 챗봇이에요!", "저는 AI 챗봇이에요. 당신의 이름은 무엇인가요?"},
    {"오늘날씨어때", "날씨", "날씨가 좀 흐리네요, 우산을 챙기세요!", "맑은 날씨네요. 산책하기 딱 좋은 날이에요!"},
    {"잘 있어", "잘 가", "안녕히 가세요! 다음에 또 대화해요.", "좋은 하루 되세요!"},
    {"기분", "기분이 어때", "저는 항상 최상의 컨디션이에요!", "기분 좋네요. 당신은 어때요?"},
    {"일정", "오늘 일정이 어떻게 돼", "오늘의 일정은 없어요. 행복한 하루 되셔요", "오늘의 일정은 학교 발표 PPT제작입니다. 서둘러 만들어 주세요"}
};

char* deleteSpace(char* user_input)
{
    char* str = (char*)malloc(sizeof(user_input));
    int i, k = 0;

    for (i = 0; i < strlen(user_input); i++)
        if (user_input[i] != ' ') str[k++] = user_input[i];

    str[k] = NULL;
    return str;
}

int main(void)
{
    printf("AI 챗봇에 오신 것을 환영합니다! 대화를 시작해 보세요.\n=====================================================\n");

    while (true)
    {
        srand(time(NULL));
        for (int i = 0; i < 1; i++)
        {
            randomNumber = (rand() % 2);
        }

        printf("당신 : ");
        scanf("%s", user_input);

        if (!(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[0].Question[0]))) || !(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[0].Question[1]))))
        {
            printf("%s\n", dataStorage[0].Answer[randomNumber]);
        }

        else if (!(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[1].Question[0]))) || !(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[1].Question[1]))))
        {
            printf("%s\n", dataStorage[1].Answer[randomNumber]);
        }

        else if (!(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[2].Question[0]))) || !(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[2].Question[1]))))
        {
            printf("%s\n", dataStorage[2].Answer[randomNumber]);
        }

        else if (!(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[4].Question[0]))) || !(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[4].Question[1]))))
        {
            printf("%s\n", dataStorage[4].Answer[randomNumber]);
        }

        else if (!(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[5].Question[0]))) || !(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[5].Question[1]))))
        {
            printf("%s\n", dataStorage[5].Answer[randomNumber]);
        }

        else if (!(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[3].Question[0]))) || !(strcmp(deleteSpace(user_input), deleteSpace(dataStorage[3].Question[1]))))
        {
            printf("%s\n", dataStorage[3].Answer[randomNumber]);
            break;
        }
    }
}