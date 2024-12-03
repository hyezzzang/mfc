#include <iostream>
#include "CPoint.h"  //이게 위로 오도록
#include "CRect.h"



void CRect::setLocation(CPoint a, CPoint b) {
	//여기서 파라미터로 받은 값을 넣어줘
	sPt = a;
	ePt = b;
}

int CRect::getWidth() { //가로
	int width = abs(ePt.x - sPt.x);
	//printf("가로 : %d\n", width);
	return width;
};

int CRect::getHeight() {	//세로
	int height = abs(ePt.y - sPt.y);
	//printf("세로 : %d\n", height);
	return height;
}


int CRect::getArea() {	//넓	이
	int area = abs(ePt.x - sPt.x) * abs(ePt.y - sPt.y);
	//printf("넓이 : %d", area);
	return area;
}

bool CRect::ptInRect(CPoint pt) {
	if (sPt.x <= pt.x && pt.x<= ePt.x && sPt.y <= pt.y && pt.y <= ePt.y) {
		return true; //1
	}
	else return false; //0
}

bool CRect::intersectRect(CRect other) {
	//spt 가 원래 나 other 이 비교군
	if (sPt.x < other.ePt.x && sPt.y < !other.ePt.y)
	{
		
	}

}





