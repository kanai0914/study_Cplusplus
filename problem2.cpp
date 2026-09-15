#include <iostream>
#include <string>

class SensorData
{
public:
    SensorData(std::string n, int v) : name_(n), value_(v) {}

    void printData()
    {
        std::cout << name_ << ": " << value_ << std::endl;
    }

    void updateValue(int newValue)
    {

        value_ = newValue;
    }

private:
    std::string name_;
    int value_;
};

int main()
{
    SensorData sensor1("neko", 4);
    SensorData sensor2("inu", 6);
    sensor1.printData();
    sensor2.printData();
    sensor1.updateValue(8);
    sensor1.printData();
}