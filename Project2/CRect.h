#pragma once

class CRect
{
public:
	CPoint sPt;
	CPoint ePt;


	void setLocation(CPoint a, CPoint b);

	int getWidth();

	int getHeight();

	int getArea();

	//�߰�
	bool ptInRect(CPoint pt);

	bool intersectRect(CRect other);

};

