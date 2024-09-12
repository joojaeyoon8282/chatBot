/* ������ ��Ģ ��� ê�� */

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
    {"�ȳ�", "���", "�ȳ��ϼ���! ������ �ݰ�����.", "�ȳ��ϼ���! ���� ����� �����?"},
    {"�̸�", "�̸��� ����", "�� �̸��� ê���̿���!", "���� AI ê���̿���. ����� �̸��� �����ΰ���?"},
    {"���ó����", "����", "������ �� �帮�׿�, ����� ì�⼼��!", "���� �����׿�. ��å�ϱ� �� ���� ���̿���!"},
    {"�� �־�", "�� ��", "�ȳ��� ������! ������ �� ��ȭ�ؿ�.", "���� �Ϸ� �Ǽ���!"},
    {"���", "����� �", "���� �׻� �ֻ��� ������̿���!", "��� ���׿�. ����� ���?"},
    {"����", "���� ������ ��� ��", "������ ������ �����. �ູ�� �Ϸ� �Ǽſ�", "������ ������ �б� ��ǥ PPT�����Դϴ�. ���ѷ� ����� �ּ���"}
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
    printf("AI ê���� ���� ���� ȯ���մϴ�! ��ȭ�� ������ ������.\n=====================================================\n");

    while (true)
    {
        srand(time(NULL));
        for (int i = 0; i < 1; i++)
        {
            randomNumber = (rand() % 2);
        }

        printf("��� : ");
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