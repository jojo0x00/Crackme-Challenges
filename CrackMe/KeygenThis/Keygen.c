#include <stdio.h>
#include <string.h>
int main(){

	char name[10];
	int result = 0;
	int nameLen;

    printf("************************************************\n");
    printf("\n\t  Designed By: jojo0x00\n");
    printf("\t     Crackme Keygen\n");
    printf("\n************************************************");
	
	printf("\nEnter name:");		gets(name);
	nameLen = strlen(name);

	//Summing name char
	for (int i = 0; i < nameLen; ++i)
		result += name[i];

	printf("\nKeygens:\n\n");
	printf("%d%d%d%d\n", nameLen, 110, *name, result);
	printf("%d%d%d%d\n", *name, 95, result, nameLen);
	printf("%d%d%d%d\n", result, 85, nameLen, *name);
		
	printf("\n\nPress any key......");
	getchar();

	return 0;
}