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
	//if (pt.x < abs(ePt.x - sPt.x) && pt.y < abs(ePt.y - sPt.y))

	int max;
	int min;
		if (ePt.x < sPt.x) {
			max = sPt.x;
			min = ePt.x;
		}
		else {
			max = ePt.x;
		}
	


		return true;  //1
	else
		return false;  //0
}



