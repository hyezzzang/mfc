#include <stdio.h>   // 1/3/ ������
#include "CQueue.h"

void main(void)
{
	CQueue qu;
	
	int i, choice;
	bool while_flag = true;

	qu.init_queue();

	qu.read();

	printf("%d \n", qu.front);
	printf("%d \n", qu.rear);

	qu.print_queue();

	while (while_flag)
	{


		printf("\n1.put \n2.get \n3.clear \n\n: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1: //put
			printf("put �� �� �Է� \n");
			int val;
			scanf("%d", &val);
			qu.put(val);
			break;

		case 2: //get
			i= qu.get();
			printf("��ȯ�� : %d \n", i);
			break;

		case 3: //clear
			qu.clear_queue();
			break;
		default:
			while_flag = false;
			break;
		}

		qu.print_queue();

	}

	//������ ���̺� ���
		qu.save();

}
