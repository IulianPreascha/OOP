#include <iostream>
#include <string>
using namespace std;

//? Что такое класс
//? Что такое объект класса

class Human
{
public:
    int age;
    int weight;
    string name;
};

class Point
{
public:
    int x;
    int y;
    int z;
};

int main()
{

    Point a;
    a.x = 1;
    a.y = 3;
    a.z = 5;

    Human firstHuman;

    firstHuman.age = 30;
    firstHuman.name = "Ivanov Ivan Ivanovici";
    firstHuman.weight = 100;
    cout << firstHuman.age << '\t';
    cout << firstHuman.name << '\t';
    cout << firstHuman.weight << endl;

    Human secondHuman;

    secondHuman.age = 15;
    secondHuman.name = "Sergey";
    secondHuman.weight = 50;
    cout << secondHuman.age << '\t';
    cout << secondHuman.name << '\t';
    cout << secondHuman.weight << endl;

    return 0;
}