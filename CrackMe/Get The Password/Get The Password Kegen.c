#include <stdio.h>
#include<stdlib.h>
#include <string.h>
/**************************************
	KEYGEN visual c++crackme
	

***************************************/
int main()
{
	int NoOfPass;
	int i = 0;
	int firstDigit = 'G';
	int secondDigit = 'l';
	int thirdDigit = 'V';
	int forthDigit = 'f';
	int fifthDigit = '3';
	int sixthDigit = 'z';
	int seventhDigit = '8';
	int eighthDigit = 'M';
	int ninthDigit = 48;
	int tenthDigit = '2';
	char pass[10];
	
	
	for (NoOfPass = 0; NoOfPass < 30; NoOfPass++){
		
		
		//Pass Digits
		while (i < 10){
			
			//First Digit 
			//AL is greater than 0x47 ('G')
			if (i == 0){
				while (firstDigit >= 'G'){
					pass[i] = firstDigit + 1;
					break;
				}
			}
			
			//Second Digit
			//AL is less than 0x6D ('m')
			if (i == 1){
				while (secondDigit < 'm'){
					pass[i] = secondDigit;
					break;
				}
				
			}
			
			//Thrid Digit
			//AL is equal to 0x56 ('V')
			if (i == 2)
				pass[i] = thirdDigit;
				
			
			
			//Forth Digit
			//AL is greater than or equal to 0x66 ('f')
			if (i == 3){
				while (forthDigit >= 'f'){
						pass[i] = forthDigit;
						break;
				}
			}
			
			//Fifth Digit
			//AL is less than or equal to 0x33 ('3')
			if (i == 4){
				while (fifthDigit <= '3'){
					pass[i] = fifthDigit;
					break;
				}
			}
			
			
			
			//Sixth Digit
			//AL is greater than 0x79 ('y')
			if (i == 5){
				while (sixthDigit > 'y'){
					pass[i] = sixthDigit;
					break;
				}
			}
			
			
			//Seventh Digit
			//AL is greater than or equal to 0x38 ('8')
			if (i == 6){
				while (seventhDigit >= '8'){
					pass[i] = seventhDigit;
					break;
				}
			}
			
			
			//Eighth Digit
			//AL is less than 0x 4E ('N')
			if (i == 7){
				while (eighthDigit < 'N'){
					pass[i] = eighthDigit;
					break;
				}
			}
			
			//Ninth Digit
			//AL is not equal to 0x52 ('R')
			if (i == 8){
				while (ninthDigit != 'R'){
					pass[i] = ninthDigit;
					break;
				}
			}
			
			//Tenth Digit
			//AL is equal to 0x32 ('2')
			if (i == 9)
				pass[i] = tenthDigit;
			
			
			
			i++;
		}
		i = 0;
		firstDigit++;
		secondDigit--;
		forthDigit++;
		fifthDigit--;
		sixthDigit++;
		seventhDigit++;
		eighthDigit--;
		ninthDigit++;
		
		int e;
	    for (e = 0; e < 10; e++)	            
		    printf("%c", pass[e]);
		printf("\n");
	    

		
	}
	
	getch();
	
	
	return 0;
}