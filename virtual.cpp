
#include <iostream>
class VirtualParent
{
public:
    virtual ~VirtualParent() = default;
    void func() { std::cout << "Parent" << std::endl; }
    virtual void v_func() { std::cout << "Parent" << std::endl; }
};

class VirtualChild : public VirtualParent
{
public:
    void func() { std::cout << "Child" << std::endl; }
    void v_func() { std::cout << "Child" << std::endl; }
};

int main()
{
    VirtualParent p;
    VirtualChild c;
    p.func();
    c.func();

    p.v_func();
    c.v_func();

    VirtualParent *p_p = new VirtualChild;
    VirtualChild *c_p = new VirtualChild;

    std::cout << p_p << std::endl;
    std::cout << c_p << std::endl;

    p_p->func();
    c_p->func();

    p_p->v_func();
    c_p->v_func();

    delete p_p;
    delete c_p;
}