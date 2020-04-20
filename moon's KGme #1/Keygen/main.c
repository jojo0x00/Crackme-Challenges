#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char name[10] = {0};
    char serial[6];
    int i;
    int nameLen;

    printf("************************************************\n");
    printf("\n\t  Designed By: jojo0x00\n");
    printf("\t     Crackme Keygen\n");
    printf("\n************************************************");

    printf("\nEnter name:");
    gets(name);
    nameLen = strlen(name);

    for (i = 0; i < 6; i++)
        serial[i] = name[i] + 5;

    i = 0;
    while (nameLen < 6)
        serial[nameLen++] = serial[i++];

    printf("Serial:");
    for (i = 0; i < 6; i++)
        printf("%c", serial[i]);

    printf("\n\nPress Any Key.....");
    getchar();

    return 0;
}