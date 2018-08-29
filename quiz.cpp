#include <iostream>

using namespace std;

int x, y;

int readNumber (int a)
{
    std::cout << "Enter a number : " << std::endl;
    std::cin >>  a;
}

int writeNumber (int a)
{
    return a;
}

int main()
{
    readNumber(x);
    readNumber(y);

    x + y;

    std::cout << "Result: " << writeNumber(x+y) << std::endl;
}