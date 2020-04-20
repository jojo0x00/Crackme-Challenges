#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int array_to_num(int arr[])
{
    unsigned int result;

    result = arr[3] << 24;
    result |= arr[2] << 16;
    result |= arr[1] << 8;
    result |= arr[0];

    return result;
}

int main()
{
    int key1[] = {0xAA, 0x89, 0xC4, 0xFE, 0x46, 0x78, 0xF0, 0xD0, 0x03, 0xE7, 0xF7, 0xFD};
    int key2[] = {0x78, 0xF0, 0xD0, 0x03, 0xE7, 0xF7, 0xFD, 0xF4, 0xE7, 0xB9, 0xB5, 0x1B};
    int key3[] = {0xF7, 0xFD, 0xF4, 0xE7, 0xB9, 0xB5, 0x1B, 0xC9, 0x50, 0x73, 0x00, 0xC8};
    int key4[] = {0xB5, 0x1B, 0xC9, 0x50, 0x73, 0x00, 0xC8, 0xA4, 0x86, 0x00, 0xDC, 0x51};
    int res1[10] = {0};
    int res2[10] = {0};
    int res3[10] = {0};
    int res4[10] = {0};
    int serial[9];
    unsigned int EAX;
    int ECX = 0xA; //DEVISOR
    int EDX = 0;   //REMAINDER

    char name[10] = {0};
    int i, j;

    printf("************************************************\n");
    printf("\n\t  Designed By: jojo0x00\n");
    printf("\t     Crackme Keygen\n");
    printf("\n************************************************");

    printf("\n\nEnter name:");
    gets(name);

    //The password has 4 stages of encryption
    //First Stage:
    for (i = 0; i < strlen(name); i++)
    {
        if (i >= 5)
        {
            res1[i] = name[i + 1] ^ key1[i - 5];
            key1[i] = name[i + 1];
            continue;
        }

        res1[i] = name[i + 1] ^ key1[i];
        key1[i] = name[i + 1];
    }

    //Second Stage:
    i = 0;
    for (j = strlen(name) - 1; j >= 0; j--)
    {
        if (i >= 5)
        {
            res2[j] = res1[j] ^ key2[i - 5];
            key2[i] = res1[j];
            i++;
            continue;
        }
        res2[j] = res1[j] ^ key2[i];
        key2[i] = res1[j];
        i++;
    }

    //Third Stage:
    for (i = 0; i < strlen(name); i++)
    {
        if (i >= 5)
        {
            res3[i] = res2[i] ^ key3[i - 5];
            key3[i] = res2[i];
            continue;
        }

        res3[i] = res2[i] ^ key3[i];
        key3[i] = res2[i];
    }

    //Forth Stage:
    i = 0;
    for (j = strlen(name) - 1; j >= 0; j--)
    {
        if (i >= 5)
        {
            res4[j] = res3[j] ^ key4[i - 5];
            key4[i] = res3[j];
            i++;
            continue;
        }
        res4[j] = res3[j] ^ key4[i];
        key4[i] = res3[j];
        i++;
    }

    if (strlen(name) >= 5)
    {
        for (i = 0; i < strlen(name); i++)
            res4[i] = res4[i] + res4[i + 4];
    }

    EAX = array_to_num(res4);

    //Now, We will calculate the password in reversed order
    for (i = 0; i < 10; i++)
    {
        EDX = EAX % ECX;
        EAX = EAX / ECX;
        EDX += 0x30;
        serial[i] = EDX;
        EDX = 0;
    }

    printf("\nSerial: ");
    for (int i = 9; i >= 0; i--)
    {
        printf("%c", serial[i]);
    }

    printf("\n\nPress Any Key......");
    getchar();

    return 0;
}
