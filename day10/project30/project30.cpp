// project30.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

// 배열이름 ary는 배열의 시작주소이다.
int ary[3]      // 배열선언부에서 배열 인덱스에 있는 숫자는 방의 크기
ary[2];          // 코드 실행에서 배열 인덱스에 있는 숫자는 방 번호를 나타낸다.

ary[0] = 10;          // 0번방, 첫번째방의 데이터
* (ary + 0) = 10;   // 위의 식하고 같은 의미 / *(배열의 시작주소 +0) = 10 / *->참조기호

*(ary + 1) = 20; == ary[1] = 20;                // 1번방에다 20을 집어넣어라.

ary의 주소가 0x0011 이라면 다음방, 1번방(두번째방) 주소는 0x0015 이다.

int* p;
*p;
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
