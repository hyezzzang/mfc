#include <stdio.h>


void main()
{
	//Right Shifting
	char a = -1;
	char b = a >> 5;
	//1111 1111 => 1111 1111
	char c = 127 >> 1;
	//0111 1111 => 0011 1111

	printf("%x (%d)\n", a, a);
	printf("%x (%d)\n", b, b);
	printf("%x (%d)\n", c, c);

	//Left Shifting
	char d = 1 << 1;
	char e = 1 << 4;
	char f = 1 << 7;

	printf("%x (%d) \n", d, d);
	printf("%x (%d) \n", e, e);
	printf("%x (%d) \n", f, f);
	// 0000 0001 => 1000 0000
	//1111 1111 1111 1111 1111 1111 1000 0000

}