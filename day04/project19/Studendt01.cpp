#include <iostream>
#include <cstring>
using namespace std;

class StudentClass
{
private:
	int ID;						// const�� �Ἥ �й��� ���ȭ �ϸ� ������ ����.
	char name[20];				// ���ڿ��迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
	char major[20];
	int age;
public:
	// ���ڿ��� �ּұ� ������ ����Ʈ ������ �־ ����Ѵ�. - ���ڿ��� ù��° ���� �ּҰ� ����ȴ�.
	// ����̴ϼȶ������ ��ü ������ �ʱ�ȭ�����ʴ� ������� �ʱ�ȭ�Ҷ� ����Ѵ�. �� ��ü������ ������� �̸� �ʱ�ȭ�� �Ǵ� ����鿡 �ʱ�ȭ
	StudentClass(int aID,const char *pname,const char *pmajor, int aage) // �ڿ� �����Ҷ� ����� ���� / : ID(aID) -> ��� �̴ϼȶ������� �̿��� ����ʱ�ȭ(���� const���̰�)
	{
		ID = aID;
		age = aage;
		strcpy(name, pname);			//strcpy����ϴ� ���� ������
		strcpy(major, pmajor);			// ���ڿ��迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
	}

	void ShowData() const
	{
		cout << "�й� : " << ID << endl;
		cout << "�̸� : " << name << endl;
		cout << "���� : " << major << endl;
		cout << "���� : " << age << endl << endl;
	}
};

int main(void)
{
	StudentClass s1(001, "�ڼ���", "���ڰ��а�", 26);			// ��ü�� �����ϸ� �����ڸ� ȣ���ؾ��Ѵ�.
	s1.ShowData();
	
	return 0;
}