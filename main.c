#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num = 0;		//숫자의 개수 
	char str[100];
	char c;
	
	//string
	printf("input a string : ");
	
	while( (c=getchar() )!='\n')
	{
		if ('0'<=c && c<='9')
			num = num + 1;
			
		else
			num = num + 0;
	}
	
	printf("the number of digits is %d\n", num);
	
	return 0;
}
