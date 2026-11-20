#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(void)
{
    char text[200], letter;
    int i, count = 0;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    printf("Введите предложение (до 198 символов): ");
    if (fgets(text, 200, stdin) == NULL)
        return 0;
    printf("Введите букву: ");
    if (scanf(" %c", &letter) != 1)
        return 0;
    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == letter && (i == 0 || text[i - 1] == ' ' || text[i - 1] == '\t'))
            count++;
    }
    printf("Количество слов: %d\n", count);
    return 0;
}
