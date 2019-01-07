#include <iostream>

void main_example(void)
{
    int a = 0, b = 0;

    std::cout << "input a & b" << std::endl;
    std::cin >> a >> b;
    std::cout << "a=" << a << " b=" << b
                << " sum="  << a + b << std::endl;
}

void test_1_3(void)
{
    std::cout << "Hello, world." << std::endl;
}

void test_1_4(void)
{
    int a = 0, b = 0;

    std::cout << "input a & b" << std::endl;
    std::cin >> a >> b;
    std::cout << "a=" << a << " b=" << b
                << " sum="  << a * b << std::endl;
}

void test_1_5()
{
    int a = 0, b = 0;

    std::cout << "input a & b";
    std::cout << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cout << "a=";
    std::cout << a;
    std::cout << " b=";
    std::cout << b;
    std::cout << " sum=";
    std::cout << a + b;
    std::cout << std::endl;
}

int main (void)
{
    main_example();
    test_1_3();
    test_1_4();
    test_1_5();

    return 0;
}