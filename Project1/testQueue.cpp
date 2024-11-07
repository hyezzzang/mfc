//#include <stdio.h>   // 1/3/ 페이지
//
//#define MAXSIZE 10  //큐의 크기
//
//int queue[MAXSIZE];
//int front, rear;
//
//void init_queue(void) {
//	front = rear = 0;
//	printf("QUEUE SIZE is %d\n\n", MAXSIZE);
//}
//
//void clear_queue(void) {
//	front = rear;
//}
//
//int put(int val) {
//	if ((rear + 1) % MAXSIZE == front) {  //큐가 꽉 찼는지 확인
//		printf("	Queue Overfow. \n");
//		return -1;
//	}
//
//	queue[rear] = val;	// rear 가 큐의 끝 다음의 빈 공간이므로 바로 저장
//	rear = ++rear % MAXSIZE;	// rear 를 다음 빈공간으로 변경
//	return val;
//}
//
//int get(void) {
//	int i;
//
//	if (front == rear) {		//큐가 비어있는지 확인
//		printf("Queue Underflow.\n");
//		return (-1);
//	}
//
//	i = queue[front];  //front의 값을 가져옴
//	front = ++front % MAXSIZE;	//front를 다음 데이터 요소로
//	return i;
//}
//
//void print_queue(void) { // 2/3 페이지
//	int i;
//	printf(" Queue From Front -------> To Rear \n");
//	for (i = front; i != rear; i = ++i % MAXSIZE)
//		printf("%-6d", queue[i]);
//	printf("\n");
//}
//
////데이터 저장
//void save(void) {
//	FILE* pFile;
//	pFile = fopen("QueueSave.txt", "w");
//	fprintf(pFile, "%d \n",front);
//	fprintf(pFile, "%d \n",rear);
//	for (int i = front; i != rear; i = ++i % MAXSIZE)
//		fprintf(pFile, "%-6d", queue[i]);
//	fclose(pFile);
//}
//
////데이터 로드
//void read() {
//	FILE* pFile;
//	pFile = fopen("QueueSave.txt", "r");
//	fscanf(pFile, "%d", &front);
//	fscanf(pFile, "%d", &rear);
//	for (int i = front; i != rear; i = ++i % MAXSIZE) {
//		fscanf(pFile, "%d", &queue[i]);
//
//	}
//
//
//	fclose(pFile);
//
//}
//
//
//
//void main(void)
//{
//	int i, choice;
//	bool while_flag = true;
//
//	
//		
//
//
//	init_queue();
//
//	read();
//
//	printf("%d \n", front);
//	printf("%d \n", rear);
//
//	print_queue();
//
//	while (while_flag)
//	{
//
//
//		printf("\n1.put \n2.get \n3.clear \n\n: ");
//		scanf("%d", &choice);
//
//		switch (choice)
//		{
//		case 1: //put
//			printf("put 할 값 입력 \n");
//			int value;
//			scanf("%d", &value);
//			put(value);
//			break;
//
//		case 2: //get
//			i = get();
//			printf("반환값 : %d \n", i);
//			break;
//		case 3: //clear
//			clear_queue();
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//
//		print_queue();
//
//	}
//
//	//데이터 세이브 기능
//		save();
//
//
//	/*printf("\n put 5, 4, 7, 8, 2, 1\n");
//	put(5);
//	put(4);
//	put(7);
//	put(8);
//	put(2);
//	put(1);
//	print_queue();
//
//
//	printf("\n GET");
//	i = get();print_queue();
//	printf("	get value is %d\n", i);
//
//	printf("\n put 3, 2, 5, 7");
//	put(3);
//	put(2);
//	put(5);
//	put(7);
//	print_queue();
//
//	printf("\n Now queue is full, put 3\n");
//	put(3);
//	print_queue();
//	printf("\n Initialize Queue\n");
//	clear_queue();
//	print_queue();
//
//	printf("\n Now queue is empty, get\n");
//	i = get();
//	print_queue();
//	printf("	get value is %d\n", i);*/
//
//
//
//
//
//}
