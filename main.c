#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int in;
	
	printf("���� �ϳ��� �Է��Ͻÿ� : ");
	scanf("%d", &in);
	
	if (in > 0)
		printf("����Դϴ�.\n");
		
	else if (in < 0) 
		printf("�����Դϴ�.\n");
		
	else
		printf("0 �Դϴ�.\n");
		
	return 0;
}
