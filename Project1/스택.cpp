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
		case 1: //push��� = �Լ�
			printf("stack�� ���� ���� �Է����ּ��� : ");
			scanf("%d", &value);
			stack_buff[top++] = value;
			break;
		case 2: //pop��� = �Լ�
			if(top > 0)
				printf("�������°�: %d \n ", stack_buff[--top]);
			else
				printf("stack�� ����ֽ��ϴ�. \n");
			break;
		default:
			while_flag = false;
			break;
		}

		printf("\n<stack ����>\n");  //print ��� = �Լ�
		for (int i = 0; i < top; i++) {
			printf(" | %d", stack_buff[i]);
		}
		printf("\n\n");
	}
}