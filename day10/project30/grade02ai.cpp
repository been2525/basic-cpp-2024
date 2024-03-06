#include <iostream>
#include <string>
#include <vector>

using namespace std;

// �л� ������ ������ ����ü
struct Student {
    string name;
    int kor;
    int eng;
    int math;
    int total;
    float average;
};

int main() {
    // 5���� �л� ������ ������ ����
    vector<Student> students(5);

    // �л� ���� �Է� �ޱ�
    for (int i = 0; i < 5; ++i) {
        cout << "�л� " << i + 1 << "�� �̸��� �Է��ϼ���: ";
        cin >> students[i].name;
        cout << "���� ������ �Է��ϼ���: ";
        cin >> students[i].kor;
        cout << "���� ������ �Է��ϼ���: ";
        cin >> students[i].eng;
        cout << "���� ������ �Է��ϼ���: ";
        cin >> students[i].math;

        // ������ ��� ���
        students[i].total = students[i].kor + students[i].eng + students[i].math;
        students[i].average = students[i].total / 3.0f;
    }

    // �� ������ ������ ��� ���
    int total_kor = 0, total_eng = 0, total_math = 0;
    for (const auto& student : students) {
        total_kor += student.kor;
        total_eng += student.eng;
        total_math += student.math;
    }
    float average_kor = total_kor / 5.0f;
    float average_eng = total_eng / 5.0f;
    float average_math = total_math / 5.0f;

    // ��� ���
    cout << "----------------�л��� ���----------------" << endl;
    for (const auto& student : students) {
        cout << student.name << "�� ����: " << student.total << ", ���: " << student.average << endl;
    }
    cout << "----------------���� ���----------------" << endl;
    cout << "���� ����: " << total_kor << ", ���: " << average_kor << endl;
    cout << "���� ����: " << total_eng << ", ���: " << average_eng << endl;
    cout << "���� ����: " << total_math << ", ���: " << average_math << endl;

    return 0;
}
