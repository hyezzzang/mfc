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
//		//여기서 파라미터로 받은 값을 넣어줘
//		sPt = a;
//		ePt = b;
//	}
//
//	int getWidth() { //가로
//		int width = abs(ePt.x - sPt.x);
//		//printf("가로 : %d\n", width);
//		return width;
//	};
//
//	int getHeight() {	//세로
//		int height = abs(ePt.y - sPt.y);
//		//printf("세로 : %d\n", height);
//		return height;
//	}
//
//	int getArea() {	//넓	이
//		int area = abs(ePt.x - sPt.x) * abs(ePt.y - sPt.y);
//		//printf("넓이 : %d", area);
//		return area;
//	}
//};

int main()
{
	CRect rect;
	CPoint startPT, endPT ,inPT;
	cout << "시작 좌표입력 : ";  //printf
	cin >> startPT.x >> startPT.y;  //scanf
	
	cout << "끝 좌표입력 : ";
	cin >> endPT.x >> endPT.y;

	rect.setLocation(startPT, endPT);

	cout << "가로길이 : " << rect.getWidth() << endl;
	cout << "세로길이 : " << rect.getHeight() << endl;
	cout << "넓이 : " << rect.getArea() << endl;

	cout << "네모 안에 있는 좌표입력 : ";
	cin >> inPT.x >> inPT.y;

	//rect.ptInRect(inPT);
	cout << "네모 안에 : " << rect.ptInRect(inPT) << endl;

}

/*

int main()
{
	CPoint startPT, endPT;
	cout << "시작 좌표입력 : ";
	cin >> startPT.x >> startPT.y;

	cout << "끝 좌표입력 : ";
	cin >> endPT.x >> endPT.y;

	int width = abs(endPT.x - startPT.x);
	int height = abs(endPT.y - startPT.y);

	cout << "가로길이 : " << width << endl;
	cout << "세로길이 : " << height << endl;
}
*/