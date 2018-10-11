#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int guess;
	int trial=0;
	
	do
	{
		printf("Guess a number : ");
		scanf("%d", &guess);
		trial++;
		
		if (guess>59)
			printf("High!\n");
			
		else if (guess<59)		//trial=1일 때 맞추는 것을 생각 못함 -> 수정  
			printf("Low!\n");
			
	}
	while (guess != 59);
	
	printf("Congratulation! trials : %d", trial);
	
	return 0;
}
