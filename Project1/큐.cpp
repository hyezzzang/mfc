//#include <stdio.h>   // 1/3/ ������
//
//#define MAXSIZE 10  //ť�� ũ��
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
//	if ((rear + 1) % MAXSIZE == front) {  //ť�� �� á���� Ȯ��
//		printf("	Queue Overfow. \n");
//		return -1;
//	}
//
//	queue[rear] = val;	// rear �� ť�� �� ������ �� �����̹Ƿ� �ٷ� ����
//	rear = ++rear % MAXSIZE;	// rear �� ���� ��������� ����
//	return val;
//}
//
//int get(void) {
//	int i;
//
//	if (front == rear) {		//ť�� ����ִ��� Ȯ��
//		printf("Queue Underflow.\n");
//		return (-1);
//	}
//
//	i = queue[front];  //front�� ���� ������
//	front = ++front % MAXSIZE;	//front�� ���� ������ ��ҷ�
//	return i;
//}
//
//void print_queue(void) { // 2/3 ������
//	int i;
//	printf(" Queue From Front -------> To Rear \n");
//	for (i = front; i != rear; i = ++i % MAXSIZE)
//		printf("%-6d", queue[i]);
//	printf("\n");
//}
//
//void main(void)
//{
//	int i;
//
//	init_queue();
//
//	printf("\n put 5, 4, 7, 8, 2, 1\n");
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
//	i = get();
//	print_queue();
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
//	printf("	get value is %d\n", i);
//
//}
