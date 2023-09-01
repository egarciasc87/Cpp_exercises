#include <iostream>
#include <vector>
#include <string>

const double PI = 3.1416;
const int LIGHT_SPEED = 299792458;
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

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
    text_t full_name = "Erick L. Garcia I.";

    cout<<"Local x variable -> "<<x<<std::endl;
    cout<<"X variable namespace 1st -> "<<first::x<<std::endl;
    cout<<"X variable namespace 2nd -> "<<second::x<<std::endl;
    cout<<"Full name is "<<full_name<<std::endl;
}

void ArithmeticOperators()
{
    int students = 20;
    students += students;
    using std::cout;

    students--;
    cout<<"N° students: "<<students<<std::endl;
    students++;
    cout<<"N° students: "<<students<<std::endl;
    int module_value = students % 7;
    cout<<"Module value: "<<module_value<<std::endl;
}

void TypeConversion()
{
    using std::cout;
    double x = (int)3.14; //Explicit conversion
    int y = 3.14; //Implicit conversion
    int correct = 8;
    int total = 10;
    double score = (correct/(double)total)*100;

    cout<<score<<"%";
}

void UserInput()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    std::string name = "";
    int age = 0;

    cout<<"What's your name? ";
    cin>>name;
    cout<<"Hello "<<name<<endl<<endl;

    cout<<"What's your full name? ";
    std::getline(std::cin>>std::ws, name);
    cout<<"Hello "<<name<<endl<<endl;

    cout<<"What's your age? ";
    cin>>age;
    cout<<"You are "<<age<<" years old"<<endl;
}


int main()
{
    //Greeting();
    //Variables();
    //Namespaces();
    //ArithmeticOperators();
    //TypeConversion();
    UserInput();

    return 0;
}

