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
	if ((rear + 1) % MAXSIZE == front) {  //큐가 꽉 찼는지 확인
		printf("	Queue Overfow. \n");
		return -1;
	}
	queue[rear] = val;	// rear 가 큐의 끝 다음의 빈 공간이므로 바로 저장
	rear = ++rear % MAXSIZE;	// rear 를 다음 빈공간으로 변경
	return val;
}

int CQueue::get() {
	int i;

	if (front == rear) {		//큐가 비어있는지 확인
		printf("Queue Underflow.\n");
		return (-1);
	}

	i = queue[front];  //front의 값을 가져옴
	front = ++front % MAXSIZE;	//front를 다음 데이터 요소로
	return i;
}

void CQueue::print_queue() { // 2/3 페이지
	int i;
	printf(" Queue From Front -------> To Rear \n");
	for (i = front; i != rear; i = ++i % MAXSIZE)
		printf("%-6d", queue[i]);
	printf("\n");
}

//데이터 저장
void CQueue::save() {
	FILE* pFile;
	pFile = fopen("QueueSave.txt", "w");
	fprintf(pFile, "%d \n", front);
	fprintf(pFile, "%d \n", rear);
	for (int i = front; i != rear; i = ++i % MAXSIZE)
		fprintf(pFile, "%-6d", queue[i]);
	fclose(pFile);
}

//데이터 로드
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