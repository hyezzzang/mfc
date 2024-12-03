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
	if (sPt.x <= pt.x && pt.x<= ePt.x && sPt.y <= pt.y && pt.y <= ePt.y) {
		return true; //1
	}
	else return false; //0
}

bool CRect::intersectRect(CRect other) {
	//spt �� ���� �� other �� �񱳱�
	if (sPt.x < other.ePt.x && sPt.y < !other.ePt.y)
	{
		
	}

}





