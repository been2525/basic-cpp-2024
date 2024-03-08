#include <iostream>
#include <string>

class Product {
protected:
    int id;
    double price;
    std::string producer;
public:
    Product(int id, double price, const std::string& producer)
        : id(id), price(price), producer(producer) {}

    virtual void printDetails() const = 0; // 순수 가상 함수로 선언하여 추상 클래스로 만듦
};

class Book : public Product {
    std::string ISBN;
    std::string author;
    std::string title;
public:
    Book(int id, double price, const std::string& producer, const std::string& ISBN, const std::string& author, const std::string& title)
        : Product(id, price, producer), ISBN(ISBN), author(author), title(title) {}

    void printDetails() const override {
        std::cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << ", ISBN: " << ISBN << ", Author: " << author << ", Title: " << title << std::endl;
    }
};

class Handphone : public Product {
    std::string model;
    int RAM;
public:
    Handphone(int id, double price, const std::string& producer, const std::string& model, int RAM)
        : Product(id, price, producer), model(model), RAM(RAM) {}

    void printDetails() const override {
        std::cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << ", Model: " << model << ", RAM: " << RAM << std::endl;
    }
};

class Computer : public Product {
    std::string model;
    std::string cpu;
    int RAM;
public:
    Computer(int id, double price, const std::string& producer, const std::string& model, const std::string& cpu, int RAM)
        : Product(id, price, producer), model(model), cpu(cpu), RAM(RAM) {}

    void printDetails() const override {
        std::cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << ", Model: " << model << ", CPU: " << cpu << ", RAM: " << RAM << std::endl;
    }
};

int main() {
    Product* products[100];
    int numProducts = 0;

    while (true) {
        std::cout << "-----상품관리 프로그램-----" << std::endl;
        std::cout << "1. 상품 추가" << std::endl;
        std::cout << "2. 상품 출력" << std::endl;
        std::cout << "3. 상품 조회" << std::endl;
        std::cout << "0. 종료" << std::endl;
        std::cout << "메뉴를 선택하세요: ";

        int choice;
        std::cin >> choice;

        if (choice == 0) {
            std::cout << "프로그램을 종료합니다." << std::endl;
            break;
        }

        if (choice == 1) {
            std::cout << "1. 책 추가 2. 핸드폰 추가 3. 컴퓨터 추가" << std::endl;
            std::cout << "추가할 상품을 선택하세요: ";
            int productChoice;
            std::cin >> productChoice;

            int id;
            double price;
            std::string producer;
            std::string model;
            int RAM;
            std::string ISBN;
            std::string author;
            std::string title;

            std::cout << "ID를 입력하세요: ";
            std::cin >> id;
            std::cout << "가격을 입력하세요: ";
            std::cin >> price;
            std::cout << "생산자를 입력하세요: ";
            std::cin >> producer;

            if (productChoice == 1) {
                std::cout << "ISBN을 입력하세요: ";
                std::cin >> ISBN;
                std::cout << "저자를 입력하세요: ";
                std::cin >> author;
                std::cout << "제목을 입력하세요: ";
                std::cin >> title;
                products[numProducts++] = new Book(id, price, producer, ISBN, author, title);
            }
            else if (productChoice == 2) {
                std::cout << "모델을 입력하세요: ";
                std::cin >> model;
                std::cout << "RAM을 입력하세요: ";
                std::cin >> RAM;
                products[numProducts++] = new Handphone(id, price, producer, model, RAM);
            }
            else if (productChoice == 3) {
                std::cout << "모델을 입력하세요: ";
                std::cin >> model;
                std::cout << "CPU를 입력하세요: ";
                std::cin >> model;
                std::cout << "RAM을 입력하세요: ";
                std::cin >> RAM;
                products[numProducts++] = new Computer(id, price, producer, model, model, RAM);
            }
            else {
                std::cout << "잘못된 선택입니다." << std::endl;
            }
        }
        else if (choice == 2) {
            std::cout << "상품 목록 출력" << std::endl;
            for (int i = 0; i < numProducts; ++i) {
                std::cout << i + 1 << ". ";
                products[i]->printDetails();
            }
        }
        else if (choice == 3) {
            std::cout << "상품 조회" << std::endl;
            // 여기에 상품 조회 기능을 추가하세요.
        }
        else {
            std::cout << "잘못된 선택입니다." << std::endl;
        }
    }

    // 동적 할당된 메모리 해제
    for (int i = 0; i < numProducts; ++i) {
        delete products[i];
    }

    return 0;
}
