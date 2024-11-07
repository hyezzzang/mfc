#include <stdio.h>
#include "CStack.h"


//����Լ�=�޼���
void CStack::push() { //top �ڸ��� stackbuff ���� �ִ´�
	int value;
	printf("stack�� ���� ���� �Է����ּ��� : ");
	scanf("%d", &value);
	stack_buff[top++] = value;  //stackbuff�� top��° �迭 �ڸ��� �Է¹��� ���� �־�
}

void CStack::pop() {

	if (top > 0)
		printf("�������°�: %d \n ", stack_buff[--top]);
	else
		printf("stack�� ����ֽ��ϴ�. \n");
}

void CStack::print() {
	printf("\n<stack ����>\n");
	for (int i = 0; i < top; i++) {
		printf(" | %d", stack_buff[i]);
	}
	printf("\n\n");
}

void CStack::save() {
	FILE* pFile;
	pFile = fopen("save.txt", "w");
	fprintf(pFile, "%d \n", top);
	for (int i = 0; i < top; i++) {
		fprintf(pFile, "%d ", stack_buff[i]);
	}
	fclose(pFile);
}

void CStack::read() {
	FILE* pFile;
	pFile = fopen("save.txt", "r");
	fscanf(pFile, "%d", &top);
	for (int i = 0; i < top; i++) {
		fscanf(pFile, "%d", &stack_buff[i]);   //pfile ���� ������ ���� �ϳ��� �־�� stack_buff��
	}
	fclose(pFile);

}

