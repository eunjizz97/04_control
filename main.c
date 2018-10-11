#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char ch;
	
	printf("input a char : ");
	scanf("%c", &ch);
	
	if ('A' <= ch && ch <= 'Z')
		printf("this is a capital letter.\n");
		
	else if ('a' <= ch && ch <= 'z')
		printf("this is a small letter.\n");
		
	else if ('0' <= ch && ch <= '9')
		printf("this is a number char.\n");
		
	else
		printf("기타입니다.");
		
		
	return 0;
}
