#include <iostream>
#include <cstring>
using namespace std;

class Product 
{
protected:
    string id;
    double price;
    string producer;
public:
    Product(const string& id, double price, const string& producer) : id(id), price(price), producer(producer) {}

    virtual void printDetails() const = 0;
    string getId() const { return id; }
};

class Book : public Product {
    string ISBN;
    string author;
    string title;
public:
    Book(const string& id, double price, const string& producer, const string& ISBN, const string& author, const string& title)
        : Product(id, price, producer), ISBN(ISBN), author(author), title(title) {}

    void printDetails() const 
    {
       cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << ", ISBN: " << ISBN << ", Author: " << author << ", Title: " << title << endl;
    }
};

class HandPhone : public Product
{
private:
	string model;
	string RAM;
public:
    HandPhone(const string& id, double price, const string& producer, const string& model, const string& RAM) : Product(id, price, producer), model(model), RAM(RAM)
    { }
    void printDetails() const
    {
        cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << ", model: " << model << ", RAM: " << RAM << endl;
    }
};

class Computer : public Product
{
private:
	string model;
	string cpu;
	string RAM;
public:
    Computer(const string& id, double price, const string& producer, const string& model, const string& cpu, const string& RAM) : Product(id,price,producer), model(model), cpu(cpu), RAM(RAM)
    { }
    void printDetails() const
    {
        cout << "ID: " << id << ", Price: " << price << ", Producer:" << producer << ", model: " << model << ", cpu: " << cpu << ", RAM: " << RAM << endl;
    }
};



int main() {
    Product* products[100];
    int numProducts = 0;

    while (true) {
        cout << "-----상품관리 프로그램-----" << endl;
        cout << "1. 상품 추가 2. 상품 출력 3. 상품 조회 0. 종료" << endl;
        cout << ">  ";

        int choice;
        string search;
        string id;
        cin >> choice;

        if (choice == 0) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        else if (choice == 1) {
            cout << "1. 책 추가 2. 핸드폰 추가 3. 컴퓨터 추가" << endl;
            cout << ">  ";
            int productChoice;
            cin >> productChoice;

            
            double price;
            string producer;
            string model;
            string RAM;
            string ISBN;
            string author;
            string title;
            

            cout << "ID를 입력하세요: ";
            cin >> id;
            cout << "가격을 입력하세요: ";
            cin >> price;
            cout << "생산자를 입력하세요: ";
            cin >> producer;

            if (productChoice == 1) {
                cout << "ISBN을 입력하세요: ";
                cin >> ISBN;
                cout << "저자를 입력하세요: ";
                cin >> author;
                cout << "제목을 입력하세요: ";
                cin >> title;
                products[numProducts++] = new Book(id, price, producer, ISBN, author, title);                
            }
            else if (productChoice == 2) {
                cout << "모델을 입력하세요: ";
                cin >> model;
                cout << "RAM을 입력하세요: ";
                cin >> RAM;
                products[numProducts++] = new HandPhone(id, price, producer, model, RAM);
            }
            else if (productChoice == 3) {
                cout << "모델을 입력하세요: ";
                cin >> model;
                cout << "CPU를 입력하세요: ";
                cin >> model;
                cout << "RAM을 입력하세요: ";
                cin >> RAM;
                products[numProducts++] = new Computer(id, price, producer, model, model, RAM);
            }
            else {
                cout << "잘못된 선택입니다." << endl;
            }
        }
        else if (choice == 2) {
            cout << "상품 목록 출력" << endl;
            for (int i = 0; i < numProducts; ++i)
            {
                cout << i + 1 << ". ";
                products[i]->printDetails();
            }
            
        }
        else if (choice == 3) {
            cout << "상품 조회" << endl;
            cout << "Id를 입력하시오." << endl;
            cout << ">";
            cin >> search;
            for (int i = 0; i < numProducts; ++i) {
                if (products[i] -> getId() == search) 
                {
                    cout << "상품 정보:" << endl;
                    products[i]->printDetails();
                    return 0;
                }
              
            }
            cout << "해당 ID의 상품을 찾을 수 없습니다." << endl;
        }
        else {
            cout << "잘못된 선택입니다." << endl;
        }
    }

    return 0;
}
