#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("请注意，60秒内关机，输入‘quit’取消关机\n");
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