//#include <iostream>
//#include <bitset>
//using namespace std;
//
//void main()
//{
//	char a = 77; // 01001101  //���̴°� 10���������� ���� �ȿ� ����ִ� �� 2������
//	char b = 8; //00001000
//	cout << bitset<8>(a) << " -> " << (int)a << endl;
//	cout << bitset<8>(b) << " -> " << (int)b << endl;
//	//char �� ���ڷ� (2������) ����ϰ� ������ bitset<8> �� �ϸ� �� ������ 8��Ʈ�� ���
//	//cout : �ܼ־ƿ� // endl : �����Ķ�
//
//	// & :  AND
//	cout << "AND : " << bitset<8>(a&b) << endl;
//	
//	// | : OR
//	cout << "OR : " << bitset<8>(a|b) << endl;
//
//	// ^ : XOR 
//	cout << "XOR : " << bitset<8>(a^b) << endl;
//
//	// ~ : NOT
//	cout << "NOT : " << bitset<8>(~a) << endl;
//
//	// >> : SHIFT
//	cout << "SHIFT : " << bitset<8>(a>>3) << endl;
//
//	// << : SHIFT
//	cout << "SHIFT : " << bitset<8>(a<<3) << endl;
//
//
//	//2
//	// & > ^
//	cout << "& > ^ : " << bitset<8>(a ^ a & b) << endl;
//
//
//}