#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int month;
	int day;		//일수를 계산하는 변수 
	
	printf("input the month : ");
	scanf("%i", &month);
	
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day = 31;
			break;
			
		case 2:
			day = 28;
			break;
			
		default:
			day = 30;
			break;
	}
		
	printf("the day is %d", day);
	
	return 0;
}
