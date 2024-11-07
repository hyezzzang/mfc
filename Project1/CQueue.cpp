#include <stdio.h>
#include "CQueue.h"


void CQueue::init_queue() {
	front = rear = 0;
	printf("QUEUE SIZE is %d\n\n", MAXSIZE);
}

void CQueue::clear_queue(void) {
	front = rear;
}

int CQueue::put(int val) {
	if ((rear + 1) % MAXSIZE == front) {  //ť�� �� á���� Ȯ��
		printf("	Queue Overfow. \n");
		return -1;
	}
	queue[rear] = val;	// rear �� ť�� �� ������ �� �����̹Ƿ� �ٷ� ����
	rear = ++rear % MAXSIZE;	// rear �� ���� ��������� ����
	return val;
}

int CQueue::get() {
	int i;

	if (front == rear) {		//ť�� ����ִ��� Ȯ��
		printf("Queue Underflow.\n");
		return (-1);
	}

	i = queue[front];  //front�� ���� ������
	front = ++front % MAXSIZE;	//front�� ���� ������ ��ҷ�
	return i;
}

void CQueue::print_queue() { // 2/3 ������
	int i;
	printf(" Queue From Front -------> To Rear \n");
	for (i = front; i != rear; i = ++i % MAXSIZE)
		printf("%-6d", queue[i]);
	printf("\n");
}

//������ ����
void CQueue::save() {
	FILE* pFile;
	pFile = fopen("QueueSave.txt", "w");
	fprintf(pFile, "%d \n", front);
	fprintf(pFile, "%d \n", rear);
	for (int i = front; i != rear; i = ++i % MAXSIZE)
		fprintf(pFile, "%-6d", queue[i]);
	fclose(pFile);
}

//������ �ε�
void CQueue::read() {
	FILE* pFile;
	pFile = fopen("QueueSave.txt", "r");
	fscanf(pFile, "%d", &front);
	fscanf(pFile, "%d", &rear);
	for (int i = front; i != rear; i = ++i % MAXSIZE) {
		fscanf(pFile, "%d", &queue[i]);
	}
	fclose(pFile);
}