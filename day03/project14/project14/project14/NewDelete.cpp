// file: project14.cpp
// date : 2023-02-23
// desc : p.91 NewDelete.cpp

#include <iostream>
#include <string.h>
//#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{
	// char* str = (char*)malloc(sizeof(char) * len); // c:heap������ 20Byteũ��� �޸� �Ҵ� / *�� ����Ʈ
	//printf("char size: %llu\n", sizeof(char));
	char* str = new char[len];		// C++: �������� lenũ�⸸ŭ �޸� ���� �Ҵ�
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//free(str);
	delete[]str;		// C++: �Ҵ���� �޸𸮸� ��ȯ
	return 0;
}