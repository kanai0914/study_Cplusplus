#include <iostream>

class Shape
{
public:
    virtual double getArea() const = 0;

    virtual ~Shape() = default;
};

class Rectangle : public Shape
{
public:
    Rectangle(double width, double height) : width_(width), height_(height) {}

    double getArea() const
    {
        return width_ * height_;
    }

private:
    double width_;
    double height_;
};

class Circle : public Shape
{
public:
    Circle(double radius) : radius_(radius) {}

    double getArea() const
    {
        return radius_ * radius_ * 3.14;
    }

private:
    double radius_;
};

int main()
{
    Shape *s[2];
    s[0] = new Rectangle(10, 20);
    s[1] = new Circle(10);

    std::cout << s[0]->getArea() << std::endl;
    std::cout << s[1]->getArea() << std::endl;

    delete s[0];
    delete s[1];
}