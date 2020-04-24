#include <stdio.h>
#include <string.h> 


int main(){
	
	char name[50];
	char seg1;
	char seg2;
	char ch =0x61;			// "a"
	int i;
	
	printf("********************************************\n\n\t\t KEYGEN v1.0\n\t     Cracked by: jojo0x00\n\n\n********************************************\n\n");
	printf("Enter name:");
	gets(name);
	
	while (strlen(name) < 3){
		printf("Name must be 3 characters at least\n\nEnter name:");
		gets(name);
	}
	
	
	printf("Serial : ");
	for (i = 0; i < strlen(name); i++){
		seg1 = name[i] + 1;
		seg2 = ch + i; 
        printf("%c%c", seg1, seg2);
		
	}
	getch();
	
	
	return 0;
}
