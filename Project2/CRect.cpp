#include <iostream>
#include "CPoint.h"  //�̰� ���� ������
#include "CRect.h"



void CRect::setLocation(CPoint a, CPoint b) {
	//���⼭ �Ķ���ͷ� ���� ���� �־���
	sPt = a;
	ePt = b;
}

int CRect::getWidth() { //����
	int width = abs(ePt.x - sPt.x);
	//printf("���� : %d\n", width);
	return width;
};

int CRect::getHeight() {	//����
	int height = abs(ePt.y - sPt.y);
	//printf("���� : %d\n", height);
	return height;
}


int CRect::getArea() {	//��	��
	int area = abs(ePt.x - sPt.x) * abs(ePt.y - sPt.y);
	//printf("���� : %d", area);
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



