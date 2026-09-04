#include <iostream>

class Pointa
{
public:
    void comment()
    {
        std::cout << "comment_function" << std::endl;
    }
};

int main()
{
    Pointa p;
    p.comment();

    Pointa *p_pointa1;
    p_pointa1->comment();

    Pointa *p_pointa2;

    // std::cout << p << std::endl; error!!
    std::cout << p_pointa1 << std::endl;
    std::cout << p_pointa2 << std::endl;
}