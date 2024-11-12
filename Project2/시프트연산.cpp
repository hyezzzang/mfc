//#include <iostream>
//#include <bitset>
//using namespace std;
//
//void main()
//{
//	char a = 77; // 01001101  //보이는건 10진수이지만 변수 안에 들어있는 건 2진수다
//	char b = 8; //00001000
//	cout << bitset<8>(a) << " -> " << (int)a << endl;
//	cout << bitset<8>(b) << " -> " << (int)b << endl;
//	//char 를 숫자로 (2진수로) 출력하고 싶으면 bitset<8> 로 하면 됨 포멧임 8비트로 출력
//	//cout : 콘솔아웃 // endl : 엔터쳐라
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