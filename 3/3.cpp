#include <iostream>

using std::string;
using std::vector;

int main(void)
{
    string s1("asdfghjkl");
    std::cout << s1 << std::endl;
    std::cout << s1.size() << std::endl;
    s1 += "qwert";
    std::cout << s1 << std::endl;
    std::cout << s1.size() << std::endl;
    
    for( char c : s1)
        std::cout << c << std::endl;
    
    for( char &c : s1)
        c = toupper(c);
    std::cout << s1 << std::endl;
    puts("```````````````````````");

    vector<string> vec1{ s1, "qqq", "www"};
    


    return 0;
}