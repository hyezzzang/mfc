//#include <stdio.h>
//
//int push(int top, int* stack_buff);
//int pop(int top, int* stack_buff);
//void print(int top, int* stack_buff);
//void save(int top, int* stack_buff);
//int read(int top, int* stack_buff);
//
//void main()
//{
//	int stack_buff[256];
//	int top = 0, value, choice;
//	bool while_flag = true;
//
// //������ �ε���
//	top = read(top, stack_buff);
//	printf("top�� : %d", top);
//	//Ȯ��
//	print(top,stack_buff);
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
//			top = push(top,stack_buff);
//
//			break;
//		case 2: //pop��� = �Լ�
//
//			top = pop(top, stack_buff);
//			
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//
//		print(top, stack_buff);
//	
//	}
////������ ���̺� ���
//	save(top, stack_buff);
//	
//}
//
//
//
//int push(int top, int* stack_buff) { //top �ڸ��� stackbuff ���� �ִ´�
//	int value;  
//	printf("stack�� ���� ���� �Է����ּ��� : ");
//	scanf("%d", &value);
//	stack_buff[top++] = value;  //stackbuff�� top��° �迭 �ڸ��� �Է¹��� ���� �־�
//	return top;
//}
//
//
//int pop(int top, int* stack_buff) {
//
//	if (top > 0)
//		printf("�������°�: %d \n ", stack_buff[--top]);
//	else
//		printf("stack�� ����ֽ��ϴ�. \n");
//
//	return top;
//}
//
//void print(int top, int* stack_buff) {
//	printf("\n<stack ����>\n");
//	for (int i = 0; i < top; i++) {
//		printf(" | %d", stack_buff[i]);
//	}
//	printf("\n\n");
//}
//
//void save(int top, int* stack_buff) {
//	FILE* pFile;
//	pFile = fopen("save.txt", "w");
//	fprintf(pFile, "%d \n", top);
//	for (int i = 0; i < top; i++) {
//		fprintf(pFile, "%d ", stack_buff[i]);
//	}
//	fclose(pFile);
//}
//
//
//int read(int top, int* stack_buff) {
//	FILE* pFile;
//	pFile = fopen("save.txt", "r");
//	fscanf(pFile, "%d", &top);
//	for (int i = 0; i < top; i++) {
//		fscanf(pFile, "%d", &stack_buff[i]);   //pfile ���� ������ ���� �ϳ��� �־�� stack_buff��
//	}
//	fclose(pFile);
//
//	return top;
//}
//
//
//
