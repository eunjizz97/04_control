#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num;
	int plus=0;		//���ϴ� �� 
	int sum=0;		//���ϱ� ����� �����ϴ� ���� ���� 
	
	printf("input a number : ");
	scanf("%d", &num);
	
	for(plus=0;plus<=num;plus++)
	{
		sum = sum + plus;
	}
	printf("the result is %d", sum);
	
	return 0;
}
