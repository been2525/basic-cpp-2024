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

    virtual void printDetails() const = 0; // ���� ���� �Լ��� �����Ͽ� �߻� Ŭ������ ����
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
        std::cout << "-----��ǰ���� ���α׷�-----" << std::endl;
        std::cout << "1. ��ǰ �߰�" << std::endl;
        std::cout << "2. ��ǰ ���" << std::endl;
        std::cout << "3. ��ǰ ��ȸ" << std::endl;
        std::cout << "0. ����" << std::endl;
        std::cout << "�޴��� �����ϼ���: ";

        int choice;
        std::cin >> choice;

        if (choice == 0) {
            std::cout << "���α׷��� �����մϴ�." << std::endl;
            break;
        }

        if (choice == 1) {
            std::cout << "1. å �߰� 2. �ڵ��� �߰� 3. ��ǻ�� �߰�" << std::endl;
            std::cout << "�߰��� ��ǰ�� �����ϼ���: ";
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

            std::cout << "ID�� �Է��ϼ���: ";
            std::cin >> id;
            std::cout << "������ �Է��ϼ���: ";
            std::cin >> price;
            std::cout << "�����ڸ� �Է��ϼ���: ";
            std::cin >> producer;

            if (productChoice == 1) {
                std::cout << "ISBN�� �Է��ϼ���: ";
                std::cin >> ISBN;
                std::cout << "���ڸ� �Է��ϼ���: ";
                std::cin >> author;
                std::cout << "������ �Է��ϼ���: ";
                std::cin >> title;
                products[numProducts++] = new Book(id, price, producer, ISBN, author, title);
            }
            else if (productChoice == 2) {
                std::cout << "���� �Է��ϼ���: ";
                std::cin >> model;
                std::cout << "RAM�� �Է��ϼ���: ";
                std::cin >> RAM;
                products[numProducts++] = new Handphone(id, price, producer, model, RAM);
            }
            else if (productChoice == 3) {
                std::cout << "���� �Է��ϼ���: ";
                std::cin >> model;
                std::cout << "CPU�� �Է��ϼ���: ";
                std::cin >> model;
                std::cout << "RAM�� �Է��ϼ���: ";
                std::cin >> RAM;
                products[numProducts++] = new Computer(id, price, producer, model, model, RAM);
            }
            else {
                std::cout << "�߸��� �����Դϴ�." << std::endl;
            }
        }
        else if (choice == 2) {
            std::cout << "��ǰ ��� ���" << std::endl;
            for (int i = 0; i < numProducts; ++i) {
                std::cout << i + 1 << ". ";
                products[i]->printDetails();
            }
        }
        else if (choice == 3) {
            std::cout << "��ǰ ��ȸ" << std::endl;
            // ���⿡ ��ǰ ��ȸ ����� �߰��ϼ���.
        }
        else {
            std::cout << "�߸��� �����Դϴ�." << std::endl;
        }
    }

    // ���� �Ҵ�� �޸� ����
    for (int i = 0; i < numProducts; ++i) {
        delete products[i];
    }

    return 0;
}
