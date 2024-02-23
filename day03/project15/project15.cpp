// file: project15.cpp
// date : 2023-02-23
// desc : p.92 NewDelete.cpp

#include <iostream>
#include <string.h>
//#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{
	// char* str = (char*)malloc(sizeof(char) * len); // c:heap영역에 20Byte크기로 메모리 할당 / *는 포인트
	//printf("char size: %llu\n", sizeof(char));
	char* str = new char[len];		// C++: 힙영역에 len크기만큼 메모리 공간 할당
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//free(str);
	delete[]str;		// C++: 할당받은 메모리를 반환
	return 0;
}