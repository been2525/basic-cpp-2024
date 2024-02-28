#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout <<  "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj" << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;				//&ob: 按眉ob狼 林家 /&林家楷魂磊 / &曼炼楷魂磊肺 荤侩窍瘤父 咯扁辑绰 林家楷魂磊肺 荤侩
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);		// 烙矫按眉 林家历厘
	cout << "Return Obj " << &tempRef << endl;
	return 0;
}
/*
New Object: 000000F905D1F994  :  按眉obj 林家
New Copy obj: 000000F905D1FA94	:	按眉ob林家
Parm ADR: 000000F905D1FA94	:	按眉ob林家
New Copy obj: 000000F905D1FAD4	: 烙矫按眉 林家
Destroy obj000000F905D1FA94	:	按眉ob家戈
Destroy obj000000F905D1FAD4	: 烙矫按眉 家戈

New Copy obj: 000000F905D1FAF4	:	按眉ob 林家
Parm ADR: 000000F905D1FAF4	:	按眉 ob林家
New Copy obj: 000000F905D1F9B4	: return栏肺 牢窍咯 烙矫按眉 林家历厘
Destroy obj000000F905D1FAF4	: 按眉ob 家戈
Return Obj 000000F905D1F9B4	: 烙矫按眉 林家
Destroy obj000000F905D1F9B4	: 烙矫按眉 家戈
Destroy obj000000F905D1F994	: 按眉 obj 家戈
*/