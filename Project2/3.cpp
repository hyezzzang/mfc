#include <iostream>
#include "CPoint.h"
#include "CRect.h"


using namespace std;

//class CRect
//{
//public:
//	CPoint sPt;
//	CPoint ePt;
//	
//	void setLocation(CPoint a, CPoint b) {
//		//���⼭ �Ķ���ͷ� ���� ���� �־���
//		sPt = a;
//		ePt = b;
//	}
//
//	int getWidth() { //����
//		int width = abs(ePt.x - sPt.x);
//		//printf("���� : %d\n", width);
//		return width;
//	};
//
//	int getHeight() {	//����
//		int height = abs(ePt.y - sPt.y);
//		//printf("���� : %d\n", height);
//		return height;
//	}
//
//	int getArea() {	//��	��
//		int area = abs(ePt.x - sPt.x) * abs(ePt.y - sPt.y);
//		//printf("���� : %d", area);
//		return area;
//	}
//};

int main()
{
	CRect rect, other;
	CPoint startPT, endPT ,inPT;
	cout << "���� ��ǥ�Է� : ";  //printf
	cin >> startPT.x >> startPT.y;  //scanf
	
	cout << "�� ��ǥ�Է� : ";
	cin >> endPT.x >> endPT.y;

	rect.setLocation(startPT, endPT);

	cout << "���α��� : " << rect.getWidth() << endl;
	cout << "���α��� : " << rect.getHeight() << endl;
	cout << "���� : " << rect.getArea() << endl;

	cout << "�׸� �ȿ� �ִ� ��ǥ�Է� : ";
	cin >> inPT.x >> inPT.y;

	//rect.ptInRect(inPT);
	cout << "�׸� �ȿ� : " << rect.ptInRect(inPT) << endl;

	//rect.intersectRect(CRect other)
	cout << "�׸�� ��ġ�� ���� ��ǥ�Է� : ";
	cin >> startPT.x >> startPT.y;  // �ٽ� scanf ����!!
	cout << "�׸�� ��ġ�� �� ��ǥ�Է� : ";
	cin >> endPT.x >> endPT.y;

	other.setLocation(startPT, endPT);
	cout << "�׸�� ���� : " << rect.intersectRect(other) << endl;


	//�׸� rect �׸�� other �׸�� �ΰ� �־�
	//���� �̹� rect �׸�� �����̶� ���� �ִ� �����̰� (�׸����)
	//���� ���� other �׸��� �����̶� ���� �ٽ� setLocation�ؼ�
	//rect�׸�� other�׸�� ���ؾ���

	//other �·����̼� �����ϱ� rect��x �� other�� x�� ���ؼ�
	//��ġ���� rect ���������� ������ �ȵǰ� �������� ũ�� �ȵ�

}

/*

int main()
{
	CPoint startPT, endPT;
	cout << "���� ��ǥ�Է� : ";
	cin >> startPT.x >> startPT.y;

	cout << "�� ��ǥ�Է� : ";
	cin >> endPT.x >> endPT.y;

	int width = abs(endPT.x - startPT.x);
	int height = abs(endPT.y - startPT.y);

	cout << "���α��� : " << width << endl;
	cout << "���α��� : " << height << endl;
}
*/