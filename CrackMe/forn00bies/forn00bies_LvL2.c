#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

BOOL bitTest(int num, int pos) {
	BOOL check;
	check = num & (1 << pos);	//To check if the certain position have 1 
	if (check)
		return 1;
	return 0;
}


int main() {

	unsigned int user_id;		//The printed id
	int ecx = 0x1c;				//counter
	int edx = 0;					//Remainder
	char passwd[33] = { 0 };		//32 for password and last for null-terminator
	int i, j;
	int buffIndex;

	printf("\n************************************************\n");
	printf("\n\t  Designed By: jojo0x00\n");
	printf("\t     Crackme Keygen\n");
	printf("\n************************************************\n");
	printf("\nEnter User ID:");
	scanf("%d", &user_id);

	memset(passwd, 0x4f, 32);			//fil with O char
	//Bit_Test
	if (bitTest(user_id, 0))
		passwd[0] = 0x2a;

	//Comarison_Test
	if(user_id <= 0xB16B00B5)
		passwd[1] = 0x2a;

	passwd[2] = 0x2a;
	buffIndex = 3;

	//Final Operation
	for (; ecx > 0; ecx--) {
		//shr of ebx
		user_id = user_id >> 1;

		//set the division and remainder
		edx = user_id % 0x1a;

		if (ecx & 1) {
			edx += 0x41;
			passwd[buffIndex] = edx;
			buffIndex++;
		}
		else {
			edx += 0x61;
			passwd[buffIndex] = edx;
			buffIndex++;
		}
		edx = 0;

	}

	printf("Password: %s", passwd);

	printf("\nPress Any Key..........");
	getch();
	return 0;
}