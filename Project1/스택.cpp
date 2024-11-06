#include <stdio.h>

void main()
{
	int stack_buff[256];
	int top = 0, value, choice;
	bool while_flag = true;

	while(while_flag)
	{
		printf("[stack] \n1. push \n2. pop \n: ");
		scanf("%d", &choice);

		switch(choice)
		{
		case 1: //push기능 = 함수
			printf("stack에 넣을 값을 입력해주세요 : ");
			scanf("%d", &value);
			stack_buff[top++] = value;
			break;
		case 2: //pop기능 = 함수
			if(top > 0)
				printf("빠져나온값: %d \n ", stack_buff[--top]);
			else
				printf("stack이 비어있습니다. \n");
			break;
		default:
			while_flag = false;
			break;
		}

		printf("\n<stack 내부>\n");  //print 기능 = 함수
		for (int i = 0; i < top; i++) {
			printf(" | %d", stack_buff[i]);
		}
		printf("\n\n");
	}
}