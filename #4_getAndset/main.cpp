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

class Point
{

private:
    int x;
    int y;

public:
    Point()
    {
        x = 0;
        y = 0;
        cout << this << " construcotr" << endl;
    }

    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
        cout << this << " construcotr" << endl;
    }

    int GetY()
    {
        return y;
    }

    int GetX()
    {
        return x;
    }

    void SetX(int valueX)
    {
        x = valueX;
    }

    void SetY(int y)
    {
        this->y = y;
    }

    void Print()
    {
        cout << "X = " << x << "\t"
             << "Y = " << y << endl;
    }
};

class CoffeeGrinder
{
private:
    bool CheckVoltage()
    {
        return true;
    }

public:
    void Start()
    {
        if (CheckVoltage())
        {
            cout << "VjuHHH!!" << endl;
        }
        else
        {
            cout << "Beep Beep" << endl;
        }
    }
};

class MyClass
{
public:
    int *data;

    MyClass(int size)
    {
        this->Size = size;
        this->data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }
        cout << " The constructor called " << this << endl;
    }

    MyClass(const MyClass &other)
    {
        this->Size = other.Size;

        this->data = new int[other.Size];

        for (int i = 0; i < other.Size; i++)
        {
            this->data[i] = other.data[i];
        }

        cout << " The constructor called " << this << endl;
    }

    ~MyClass()
    {
        cout << " The destructor called " << this << endl;
        delete[] data;
    }

private:
    int Size;
};

void Foo(MyClass value)
{
    cout << "The function FOO has been called" << endl;
}

MyClass Foo2()
{
    cout << "The function FOO_2 has been called" << endl;
    MyClass temp(2);

    return temp;
}

int main()
{
    // Foo2();

    MyClass a(10);

    MyClass b(a);

    return 0;
}