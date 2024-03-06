#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Grade Ŭ���� ����
class Grade {
private:
    string name;
    int korean;
    int english;
    int math;

public:
    // ������
    Grade(string n, int k, int e, int m) : name(n), korean(k), english(e), math(m) {}

    // ���� ��� �޼���
    int calculateTotal() {
        return korean + english + math;
    }

    // ��� ��� �޼���
    float calculateAverage() {
        return static_cast<float>(calculateTotal()) / 3.0;
    }

    // �̸� ��ȯ �޼���
    string getName() {
        return name;
    }

    // �� ���� ���� ��ȯ �޼���
    int getKorean() {
        return korean;
    }

    int getEnglish() {
        return english;
    }

    int getMath() {
        return math;
    }
};

int main() {
    vector<Grade> grades; // �л� ��ü�� ��� ���� ����

    // 5���� �л� ���� �Է�
    for (int i = 0; i < 5; ++i) {
        string name;
        int korean, english, math;
        cout << "Enter student " << i + 1 << "'s name: ";
        cin >> name;
        cout << "Enter Korean score: ";
        cin >> korean;
        cout << "Enter English score: ";
        cin >> english;
        cout << "Enter Math score: ";
        cin >> math;
        cout << endl;

        // Grade ��ü ���� �� ���Ϳ� �߰�
        grades.push_back(Grade(name, korean, english, math));
    }

    // �л� ���� ���
    cout << "Name\tKorean\tEnglish\tMath\tTotal\tAverage" << endl;
    cout << "----------------------------------------------" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << grades[i].getName() << "\t" << grades[i].getKorean() << "\t" << grades[i].getEnglish() << "\t" << grades[i].getMath() << "\t" << grades[i].calculateTotal() << "\t" << grades[i].calculateAverage() << endl;
    }

    // ���� ������ ��� ���
    int totalKorean = 0, totalEnglish = 0, totalMath = 0;
    for (int i = 0; i < 5; ++i) {
        totalKorean += grades[i].getKorean();
        totalEnglish += grades[i].getEnglish();
        totalMath += grades[i].getMath();
    }
    float averageKorean = totalKorean / 5.0;
    float averageEnglish = totalEnglish / 5.0;
    float averageMath = totalMath / 5.0;

    // ���� ������ ��� ���
    cout << "----------------------------------------------" << endl;
    cout << "Subject Average:\t" << averageKorean << "\t" << averageEnglish << "\t" << averageMath << endl;

    return 0;
}
