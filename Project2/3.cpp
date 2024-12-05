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
	CRect rect, other;
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

	//rect.intersectRect(CRect other)
	cout << "네모랑 겹치는 시작 좌표입력 : ";
	cin >> startPT.x >> startPT.y;  // 다시 scanf 재사용!!
	cout << "네모랑 겹치는 끝 좌표입력 : ";
	cin >> endPT.x >> endPT.y;

	other.setLocation(startPT, endPT);
	cout << "네모랑 겹쳐 : " << rect.intersectRect(other) << endl;


	//네모가 rect 네모랑 other 네모랑 두개 있어
	//지금 이미 rect 네모는 시작이랑 끝이 있는 상태이고 (네모상태)
	//내가 지금 other 네모의 시작이랑 끝을 다시 setLocation해서
	//rect네모랑 other네모랑 비교해야해

	//other 셋로케이션 했으니까 rect의x 랑 other의 x랑 비교해서
	//겹치려면 rect 시작점보다 작으면 안되고 끝점보다 크면 안돼

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