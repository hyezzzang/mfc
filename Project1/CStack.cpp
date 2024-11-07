#include <stdio.h>
#include "CStack.h"


//멤버함수=메서드
void CStack::push() { //top 자리에 stackbuff 값을 넣는다
	int value;
	printf("stack에 넣을 값을 입력해주세요 : ");
	scanf("%d", &value);
	stack_buff[top++] = value;  //stackbuff의 top번째 배열 자리에 입력받은 값을 넣어
}

void CStack::pop() {

	if (top > 0)
		printf("빠져나온값: %d \n ", stack_buff[--top]);
	else
		printf("stack이 비어있습니다. \n");
}

void CStack::print() {
	printf("\n<stack 내부>\n");
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
		fscanf(pFile, "%d", &stack_buff[i]);   //pfile 에서 가져온 값을 하나씩 넣어라 stack_buff에
	}
	fclose(pFile);

}

