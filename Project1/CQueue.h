#pragma once

#define MAXSIZE 10  //큐의 크기

class CQueue {
public:

	int queue[MAXSIZE];
	int front, rear;

	void init_queue();
	void clear_queue();
	int put(int val);
	int get();
	void print_queue();
	void save();
	void read();

};