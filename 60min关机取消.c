#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("��ע�⣬60���ڹػ������롮quit��ȡ���ػ�\n");
    scanf("%s", input);
    if (strcmp(input, "quit") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}