//#include <stdio.h>
//
//struct STACK {
//	int stack_buff[256];
//	int top;
//};
//
//
//void push(STACK* s) { //top 자리에 stackbuff 값을 넣는다
//	int value;
//	printf("stack에 넣을 값을 입력해주세요 : ");
//	scanf("%d", &value);
//	s->stack_buff[s->top++] = value;  //stackbuff의 top번째 배열 자리에 입력받은 값을 넣어  //포인터 타입은 -> 이렇게 해주면됨
//}
//
//
//void pop(STACK* s) {
//
//	if (s->top > 0)
//		printf("빠져나온값: %d \n ", s->stack_buff[--s->top]);
//	else
//		printf("stack이 비어있습니다. \n");
//}
//
//void print(STACK* s) {
//	printf("\n<stack 내부>\n");
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
//		fscanf(pFile, "%d", &s->stack_buff[i]);   //pfile 에서 가져온 값을 하나씩 넣어라 stack_buff에
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
//	//데이터 로드기능
//	read(&st);
//
//	printf("top값 : %d", st.top);
//
//	//확인
//	print(&st);
//
//	while (while_flag)
//	{
//		printf("[stack] \n1. push \n2. pop \n: ");
//		scanf("%d", &choice);
//
//		switch (choice)
//		{
//		case 1: //push기능 = 함수
//
//			push(&st);
//
//			break;
//		case 2: //pop기능 = 함수
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
//	//데이터 세이브 기능
//	save(&st);
//
//}
//
