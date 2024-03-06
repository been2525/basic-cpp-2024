#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Grade 클래스 정의
class Grade {
private:
    string name;
    int korean;
    int english;
    int math;

public:
    // 생성자
    Grade(string n, int k, int e, int m) : name(n), korean(k), english(e), math(m) {}

    // 총점 계산 메서드
    int calculateTotal() {
        return korean + english + math;
    }

    // 평균 계산 메서드
    float calculateAverage() {
        return static_cast<float>(calculateTotal()) / 3.0;
    }

    // 이름 반환 메서드
    string getName() {
        return name;
    }

    // 각 과목 점수 반환 메서드
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
    vector<Grade> grades; // 학생 객체를 담는 벡터 생성

    // 5명의 학생 정보 입력
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

        // Grade 객체 생성 후 벡터에 추가
        grades.push_back(Grade(name, korean, english, math));
    }

    // 학생 정보 출력
    cout << "Name\tKorean\tEnglish\tMath\tTotal\tAverage" << endl;
    cout << "----------------------------------------------" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << grades[i].getName() << "\t" << grades[i].getKorean() << "\t" << grades[i].getEnglish() << "\t" << grades[i].getMath() << "\t" << grades[i].calculateTotal() << "\t" << grades[i].calculateAverage() << endl;
    }

    // 과목별 총점과 평균 계산
    int totalKorean = 0, totalEnglish = 0, totalMath = 0;
    for (int i = 0; i < 5; ++i) {
        totalKorean += grades[i].getKorean();
        totalEnglish += grades[i].getEnglish();
        totalMath += grades[i].getMath();
    }
    float averageKorean = totalKorean / 5.0;
    float averageEnglish = totalEnglish / 5.0;
    float averageMath = totalMath / 5.0;

    // 과목별 총점과 평균 출력
    cout << "----------------------------------------------" << endl;
    cout << "Subject Average:\t" << averageKorean << "\t" << averageEnglish << "\t" << averageMath << endl;

    return 0;
}
