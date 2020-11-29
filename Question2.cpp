#include <iostream>
#include <stdio.h>
using namespace std;

template <class Generic>
class A
{
    Generic valueA;

public:
    Generic getValueA() const { return valueA; }
    void setValueA(Generic x) { valueA = x; }
    A(){};
    A(const A &x) { setValueA(x.getValueA()); }
};

template <class Generic>
class B : public A<Generic>
{
    Generic valueB;

public:
    Generic getValueB() const { return valueB; }
    void setValueB(Generic x) { valueB = x; }
    B(){};
    B(const B &x) { setValueB(x.getValueB()); }
};

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    B<float> floatB;
    floatB.setValueA(1.34);
    floatB.setValueB(3.14);

    B<int> intB;
    intB.setValueA(1);
    intB.setValueB(3);

    B<char> charB;
    charB.setValueA('a');
    charB.setValueB('b');

    B<string> stringB;
    stringB.setValueA("good");
    stringB.setValueB("morning");

    B<Date> dateB;
    dateB.setValueA({27, 10, 2014});
    dateB.setValueB({2, 11, 2014});

    cout << "Type as float: A = " << floatB.getValueA() << " B = " << floatB.getValueB() << "\n";
    cout << "Type as integer: A = " << intB.getValueA() << " B = " << intB.getValueB() << "\n";
    cout << "Type as char: A = " << charB.getValueA() << " B = " << charB.getValueB() << "\n";
    cout << "Type as string: A = " << stringB.getValueA() << " B = " << stringB.getValueB() << "\n";
    cout << "Type as date: A = " << dateB.getValueA().day << "/" << dateB.getValueA().month << "/" << dateB.getValueA().year << " B = " << dateB.getValueB().day << "/" << dateB.getValueB().month << "/" << dateB.getValueB().year << "\n";

    return 0;
}