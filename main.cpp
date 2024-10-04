#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle() : length(0), width(0) {}

    Rectangle(int length, int width) {
        this->length = length;
        this->width = width;
    }

    void set_Length(int length) {
        if (length > 0) {
            this->length = length;
        }
    }

    int get_Length() {
        return length;
    }

    void set_Width(int width) {
        if (width > 0) {
            this->width = width;
        }
    }

    int get_Width() {
        return width;
    }

    int get_Area() {
        return width * length;
    }
};

class Car {
private:
    string model, brand;
    int year;

public:
    Car() : model(" "), brand(" "), year(0) {}

    Car(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    void set_brand(string brand) {
        this->brand = brand;
    }

    string get_brand() {
        return brand;
    }

    void set_model(string model) {
        this->model = model;
    }

    string get_model() {
        return model;
    }

    void set_year(int year) {
        this->year = year;
    }

    int get_year() {
        return year;
    }

    void display() {
        cout << "brand : " << brand << endl;
        cout << "model : " << model << endl;
        cout << "year : " << year << endl;
        cout << "========================\n";
    }
};

class Student {
private:
    string name;
    int age;

public:
    Student() : name(" "), age(0) {}

    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void set_name(string name) {
        this->name = name;
    }

    string get_name() {
        return name;
    }

    void set_age(int age) {
        this->age = age;
    }

    int get_age() {
        return age;
    }

    void display() {
        cout << "name of student: " << name << endl;
        cout << "age of student: " << age << endl;
        cout << "==============================\n";
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount() : accountNumber(" "), balance(0) {}

    BankAccount(string accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void set_accountNumber(string accountNumber) {
        this->accountNumber = accountNumber;
    }

    string get_accountNumber() {
        return accountNumber;
    }

    void set_balance(double balance) {
        this->balance = balance;
    }

    double get_balance() {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }
};

int main() {
    // obj from class Rectangle
    Rectangle r1(2, 5);
    r1.set_Length(3);
    r1.set_Width(3);
    cout << "Area: " << r1.get_Area() << endl;

    // obj from class Car
    Car c1("Mercedes", "C180", 2008);
    Car c2;
    c2.set_brand("BMW");
    c2.set_model("M4");
    c2.set_year(2010);
    c1.display();
    c2.display();

    // obj from class Student
    Student s1("Omer", 18), s2;
    s2.set_name("Amr");
    s2.set_age(20);
    s1.display();
    s2.display();

    // obj from class BankAccount
    BankAccount myAccount("1234567890", 5000);

    myAccount.deposit(1000);
    myAccount.withdraw(500);

    cout << "Current balance: " << myAccount.get_balance() << endl;

    return 0;
}
