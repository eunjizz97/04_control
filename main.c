#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int in;
	
	printf("���� �ϳ��� �Է��Ͻÿ� : ");
	scanf("%d", &in);
	
	if (in >= 0)
		printf("������ %d �Դϴ�.\n", in);
		
	else
		printf("������ %d �Դϴ�.\n", -in);
		
		
	return 0;
}
