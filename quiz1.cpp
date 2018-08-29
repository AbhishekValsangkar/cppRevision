#include <iostream>

int readNumber()
{
    std::cout << "Enter a number : " << std::endl;
    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int y)
{
    std::cout << "Output: " << y << std::endl;
}

int main()
{   
    std::cout << "Test1" << std::endl;

    int a = readNumber();
    int b = readNumber();
    writeAnswer(a + b);
    return 0;
}