// file: project14.cpp
// date : 2023-02-23
// desc : p.91 MemMalFree.cpp

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{
	char * str = (char*)malloc(sizeof(char) * len); // c:heap영역에 20Byte크기로 메모리 할당 / *는 포인트
	printf("char size: %llu\n", sizeof(char));
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);
	return 0;
}