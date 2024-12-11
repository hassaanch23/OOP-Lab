#include <iostream>
using namespace std;

template <class T>
class Container
{
private:
    T data;
public:
    Container(T val) : data(val) {}
    T increase() { return ++data; }
};

template<>
class Container<char>
{
private:
    char data;
public:
    Container(char val) : data(val) {}
    char uppercase()
    {
        if (data >= 'a' && data <= 'z')
            return (data - 32);
        else
            return data;
    }
};

int main()
{
    Container<int> myint(7);
    Container<char> mychar('j');

    cout << myint.increase() << endl;
    cout << mychar.uppercase() << endl;

    return 0;
}

