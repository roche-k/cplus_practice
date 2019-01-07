#include <iostream>

void practice_1_9(void)
{
    int sum = 0, val = 50;

    while(val <= 100) {
        sum += val++;
    }
    std::cout << "sum is " << sum << std::endl ;
}

void practice_1_10(void)
{
    int sum = 0, val = 10;

    while(val > 0) {
        sum += val--;
    }
    std::cout << "sum is " << sum << std::endl ;
}

int main(void)
{
    int sum = 0, val  = 0;
    while (val < 10) {
        sum += ++val;
    }

    std::cout << "sum is " << sum << std::endl ;

    practice_1_9();
    practice_1_10();

    return 0;
}
