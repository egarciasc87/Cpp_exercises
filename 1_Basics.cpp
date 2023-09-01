#include <iostream>

const double PI = 3.1416;
const int LIGHT_SPEED = 299792458;
namespace first
{
    int x = 1;
}

namespace second 
{
    int x = 2;
}

void Greeting()
{
    std::cout<<"Hello world..."<<std::endl;
    std::cout<<"This is Erick, nice to meet you!"<<"\n";
    std::cout<<"This is a new line.";
}

void Variables()
{
    int x = 12;
    int y = 15;
    int sum = x + y;
    double temperature_c = 17.5;
    char grade = 'A';
    bool are_we_on_earth = true;
    std::string name = "Erick Garcia";
    std::string day_week = "Friday";

    std::cout<<"Value of the variable X: ";
    std::cout<<x<<"\n";
    std::cout<<"Sum is: "<<sum<<"\n";
    std::cout<<"Decimal value: "<<temperature_c<<"\n";
    std::cout<<"Mark of the course: "<<grade<<std::endl;
    std::cout<<"Are we on aerth? "<<are_we_on_earth<<std::endl;
    std::cout<<"My name is "<<name<<std::endl;
    std::cout<<"Favorite day is "<<day_week<<std::endl;

    double radius = 10;
    double circunference = 2 * PI * radius;
    std::cout<<"Circunference value: "<<circunference<<std::endl;
    std::cout<<"Thr speed of light is "<<LIGHT_SPEED<<std::endl;
}

void Namespaces()
{
    //using namespace second;
    using std::cout;
    int x = 123;

    cout<<"Local x variable -> "<<x<<std::endl;
    cout<<"X variable namespace 1st -> "<<first::x<<std::endl;
    cout<<"X variable namespace 2nd -> "<<second::x<<std::endl;
}


int main()
{
    //Greeting();
    //Variables();
    //Namespaces();
    return 0;
}

