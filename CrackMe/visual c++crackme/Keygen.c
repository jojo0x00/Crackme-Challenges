#include <stdio.h>
#include<stdlib.h>
#include <string.h>
/**************************************
	KEYGEN visual c++crackme
	

***************************************/
int main()
{
	
	int esi = 0, i, j;
	char computerName[] = "mohannadraafat";				//This is the name of my computer
	char name[10];										//This is the username that we can enter



	printf("Enter username:");
	gets(name);
	
	
	//First algorithm is to combine the computername with (0x186a0)
	for (i = 0; i < strlen(computerName); i++){
		esi = esi + computerName[i] + 0x186a0;
	}
	
	//Then combining esi with the username that we want and also with (0x186a0)
	for (j = 0; j < strlen(name); j++){
		esi = esi + name[j] + 0x186a0;
	}
	
	//Finally add this value to the combination 
	esi += 0x7a69;
	
	printf("%d", esi);									//Generated Key


}