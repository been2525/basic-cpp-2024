#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 학생 정보를 저장할 구조체
struct Student {
    string name;
    int kor;
    int eng;
    int math;
    int total;
    float average;
};

int main() {
    // 5명의 학생 정보를 저장할 벡터
    vector<Student> students(5);

    // 학생 정보 입력 받기
    for (int i = 0; i < 5; ++i) {
        cout << "학생 " << i + 1 << "의 이름을 입력하세요: ";
        cin >> students[i].name;
        cout << "국어 점수를 입력하세요: ";
        cin >> students[i].kor;
        cout << "영어 점수를 입력하세요: ";
        cin >> students[i].eng;
        cout << "수학 점수를 입력하세요: ";
        cin >> students[i].math;

        // 총점과 평균 계산
        students[i].total = students[i].kor + students[i].eng + students[i].math;
        students[i].average = students[i].total / 3.0f;
    }

    // 각 과목의 총점과 평균 계산
    int total_kor = 0, total_eng = 0, total_math = 0;
    for (const auto& student : students) {
        total_kor += student.kor;
        total_eng += student.eng;
        total_math += student.math;
    }
    float average_kor = total_kor / 5.0f;
    float average_eng = total_eng / 5.0f;
    float average_math = total_math / 5.0f;

    // 결과 출력
    cout << "----------------학생별 결과----------------" << endl;
    for (const auto& student : students) {
        cout << student.name << "의 총점: " << student.total << ", 평균: " << student.average << endl;
    }
    cout << "----------------과목별 결과----------------" << endl;
    cout << "국어 총점: " << total_kor << ", 평균: " << average_kor << endl;
    cout << "영어 총점: " << total_eng << ", 평균: " << average_eng << endl;
    cout << "수학 총점: " << total_math << ", 평균: " << average_math << endl;

    return 0;
}
