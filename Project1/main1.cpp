//#include <stdio.h>
//
//struct STACK {
//	int stack_buff[256];
//	int top;
//};
//
//
//void push(STACK* s) { //top �ڸ��� stackbuff ���� �ִ´�
//	int value;
//	printf("stack�� ���� ���� �Է����ּ��� : ");
//	scanf("%d", &value);
//	s->stack_buff[s->top++] = value;  //stackbuff�� top��° �迭 �ڸ��� �Է¹��� ���� �־�  //������ Ÿ���� -> �̷��� ���ָ��
//}
//
//
//void pop(STACK* s) {
//
//	if (s->top > 0)
//		printf("�������°�: %d \n ", s->stack_buff[--s->top]);
//	else
//		printf("stack�� ����ֽ��ϴ�. \n");
//}
//
//void print(STACK* s) {
//	printf("\n<stack ����>\n");
//	for (int i = 0; i < s->top; i++) {
//		printf(" | %d", s->stack_buff[i]);
//	}
//	printf("\n\n");
//}
//
//void save(STACK* s) {
//	FILE* pFile;
//	pFile = fopen("save.txt", "w");
//	fprintf(pFile, "%d \n", s->top);
//	for (int i = 0; i < s->top; i++) {
//		fprintf(pFile, "%d ", s->stack_buff[i]);
//	}
//	fclose(pFile);
//}
//
//
//void read(STACK* s) {
//	FILE* pFile;
//	pFile = fopen("save.txt", "r");
//	fscanf(pFile, "%d", &s->top);
//	for (int i = 0; i < s->top; i++) {
//		fscanf(pFile, "%d", &s->stack_buff[i]);   //pfile ���� ������ ���� �ϳ��� �־�� stack_buff��
//	}
//	fclose(pFile);
//}
//
//
//
//
//void main()
//{
//	STACK st; 
//	st.top = 0;
//	int choice;
//	bool while_flag = true;
//
//	//������ �ε���
//	read(&st);
//
//	printf("top�� : %d", st.top);
//
//	//Ȯ��
//	print(&st);
//
//	while (while_flag)
//	{
//		printf("[stack] \n1. push \n2. pop \n: ");
//		scanf("%d", &choice);
//
//		switch (choice)
//		{
//		case 1: //push��� = �Լ�
//
//			push(&st);
//
//			break;
//		case 2: //pop��� = �Լ�
//
//			pop(&st);
//
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//
//		print(&st);
//
//	}
//	//������ ���̺� ���
//	save(&st);
//
//}
//
