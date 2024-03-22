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
        cout << "-----��ǰ���� ���α׷�-----" << endl;
        cout << "1. ��ǰ �߰� 2. ��ǰ ��� 3. ��ǰ ��ȸ 0. ����" << endl;
        cout << ">  ";

        int choice;
        string search;
        string id;
        cin >> choice;

        if (choice == 0) {
            cout << "���α׷��� �����մϴ�." << endl;
            break;
        }

        else if (choice == 1) {
            cout << "1. å �߰� 2. �ڵ��� �߰� 3. ��ǻ�� �߰�" << endl;
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
            

            cout << "ID�� �Է��ϼ���: ";
            cin >> id;
            cout << "������ �Է��ϼ���: ";
            cin >> price;
            cout << "�����ڸ� �Է��ϼ���: ";
            cin >> producer;

            if (productChoice == 1) {
                cout << "ISBN�� �Է��ϼ���: ";
                cin >> ISBN;
                cout << "���ڸ� �Է��ϼ���: ";
                cin >> author;
                cout << "������ �Է��ϼ���: ";
                cin >> title;
                products[numProducts++] = new Book(id, price, producer, ISBN, author, title);                
            }
            else if (productChoice == 2) {
                cout << "���� �Է��ϼ���: ";
                cin >> model;
                cout << "RAM�� �Է��ϼ���: ";
                cin >> RAM;
                products[numProducts++] = new HandPhone(id, price, producer, model, RAM);
            }
            else if (productChoice == 3) {
                cout << "���� �Է��ϼ���: ";
                cin >> model;
                cout << "CPU�� �Է��ϼ���: ";
                cin >> model;
                cout << "RAM�� �Է��ϼ���: ";
                cin >> RAM;
                products[numProducts++] = new Computer(id, price, producer, model, model, RAM);
            }
            else {
                cout << "�߸��� �����Դϴ�." << endl;
            }
        }
        else if (choice == 2) {
            cout << "��ǰ ��� ���" << endl;
            for (int i = 0; i < numProducts; ++i)
            {
                cout << i + 1 << ". ";
                products[i]->printDetails();
            }
            
        }
        else if (choice == 3) {
            cout << "��ǰ ��ȸ" << endl;
            cout << "Id�� �Է��Ͻÿ�." << endl;
            cout << ">";
            cin >> search;
            for (int i = 0; i < numProducts; ++i) {
                if (products[i] -> getId() == search) 
                {
                    cout << "��ǰ ����:" << endl;
                    products[i]->printDetails();
                    return 0;
                }
              
            }
            cout << "�ش� ID�� ��ǰ�� ã�� �� �����ϴ�." << endl;
        }
        else {
            cout << "�߸��� �����Դϴ�." << endl;
        }
    }

    return 0;
}
