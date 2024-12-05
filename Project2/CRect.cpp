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
	// �� ���簢���� ��ġ���� Ȯ���ϴ� ����
	if (ePt.x < other.sPt.x || sPt.x > other.ePt.x ||   // �ϳ��� �ٸ� ���簢���� ����/�����ʿ� ��ġ
		ePt.y < other.sPt.y || sPt.y > other.ePt.y) {   // �ϳ��� �ٸ� ���簢���� ����/�Ʒ��ʿ� ��ġ
		return false; //1
	}
	return true; //0
}





