#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
    int age;
    int weight;
    string name;

    void Print()
    {
        cout << "Name: " << name << "\nWeight: " << weight << "\nAge: " << age << endl;
    }
};

int main()
{
    Human firstHuman;

    firstHuman.age = 30;
    firstHuman.name = "Ivanov Ivan Ivanovici";
    firstHuman.weight = 100;

    firstHuman.Print();

    Human secondHuman;

    secondHuman.age = 15;
    secondHuman.name = "Sergey";
    secondHuman.weight = 50;

    secondHuman.Print();

    return 0;
}