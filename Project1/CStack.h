#pragma once

class CStack {
public://전체공개
	int stack_buff[256];//멤버변수
	int top;


	void push();
	void pop();
	void print();
	void save();
	void read();

}; 