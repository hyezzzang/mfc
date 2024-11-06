#include <stdio.h>

int push(int top, int* stack_buff);
int pop(int top, int* stack_buff);
void print(int top, int* stack_buff);
void save(int top, int* stack_buff);

void main()
{
	int stack_buff[256];
	int top = 0, value, choice;
	bool while_flag = true;

 //데이터 로드기능
	

 
	while (while_flag)
	{
		printf("[stack] \n1. push \n2. pop \n: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1: //push기능 = 함수

			top = push(top,stack_buff);

			break;
		case 2: //pop기능 = 함수

			top = pop(top, stack_buff);
			
			break;
		default:
			while_flag = false;
			break;
		}

		print(top, stack_buff);
	
	}
//데이터 세이브 기능
	save(top, stack_buff);
	
}



int push(int top, int* stack_buff) { //top 자리에 stackbuff 값을 넣는다
	int value;  
	printf("stack에 넣을 값을 입력해주세요 : ");
	scanf("%d", &value);
	stack_buff[top++] = value;  //stackbuff의 top번째 배열 자리에 입력받은 값을 넣어
	return top;
}


int pop(int top, int* stack_buff) {

	if (top > 0)
		printf("빠져나온값: %d \n ", stack_buff[--top]);
	else
		printf("stack이 비어있습니다. \n");

	return top;
}

void print(int top, int* stack_buff) {
	printf("\n<stack 내부>\n");
	for (int i = 0; i < top; i++) {
		printf(" | %d", stack_buff[i]);
	}
	printf("\n\n");
}

void save(int top, int* stack_buff) {
	FILE* pFile;
	pFile = fopen("save.txt", "w");
	fprintf(pFile, "%d \n", top);
	for (int i = 0; i < top; i++) {
		fprintf(pFile, "%d ", stack_buff[i]);
	}
	fclose(pFile);
}



