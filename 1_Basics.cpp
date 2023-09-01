#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using std::cout;
using std::cin;

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

void MathFunctions()
{
    using std::cout;   
    using std::endl;
    double x = 3;
    double y = 4;
    double max = std::max(x, y);
    double min = std::min(x, y);
    double abs_val = abs(-45);
    double sqrt_val = sqrt(x);
    double pow_val = pow(x, 2);
    double ceil_val = ceil(x / 2);
    double floor_val = floor(x / 2);

    cout<<"Max -> "<<max<<endl;
    cout<<"Min -> "<<min<<endl;
    cout<<"x Power 2 ->"<<pow_val<<endl;
    cout<<"Abs -> "<<abs_val<<endl;
    cout<<"Sqrt -> "<<sqrt_val<<endl;
    cout<<"Ceil and floor ->"<<ceil_val<<" , "<<floor_val<<endl;
}

void HypotenuseCalculator()
{
    //Pitagora formula
    double side_A, side_B, side_C;

    std::cout<<"Enter side A: ";
    std::cin>>side_A;
    std::cout<<"Enter side B: ";
    std::cin>>side_B;

    side_C = sqrt(pow(side_A, 2) + pow(side_B, 2));
    std::cout<<"Side C values is: "<<side_C;
}

void IfStatement()
{
    using std::cout;
    using std::cin;
    int age;

    cout<<"Enter age: ";
    cin>>age;

    if (age < 0)
    {
        cout<<"Sorry, wrong input...";
    }
    else if (age >= 100)
    {
        cout<<"Sorry, you are too old for this bar...";
    }
    else if (age < 18)
    {
        cout<<"Sorry, only older or equal to 18 allowed...";
    }
    else
    {
        cout<<"Welcome to Erick's bar!!!";
    }
}

void SwitchStatement()
{
    using std::cout;
    using std::cin;
    int month;

    cout<<"Enter month: ";
    cin>>month;

    switch (month)
    {
    case 1:
        cout<<"It's January";
        break;
    case 2:
        cout<<"It's February";
        break;
    case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12:
        cout<<"It's later than February";
        break;
    default:
        cout<<"Unknown case";
        break;
    }
}

void CalculatorProgram()
{
    double value_1, value_2, result;
    bool validator = true;
    char op;

    cout<<"Enter # 1: ";
    cin>>value_1;
    cout<<"Enter # 2: ";
    cin>>value_2;
    cout<<"Enter operation (+ - * /): ";
    cin>>op;

    switch (op)
    {
    case '+':
        result = value_1 + value_2;
        break;
    case '-':
        result = value_1 - value_2;
        break;
    case '*':
        result = value_1 * value_2;
        break;
    case '/':
        result = value_1 / value_2;
        break;
    default:
        validator = false;
        break;
    }

    if (validator == true)
    {
        cout<<"Result is "<<result;
    }
    else
    {
        cout<<"Not a valid operator.";
    }
}

void TernaryOperator()
{
    int grade = 0;
    //grater than 11 -> pass, else -> fail
    cout<<"Enter grade: ";
    cin>>grade;

    grade >= 11 ? cout<<"You passed, congrats!!!" : cout<<"You failed...";
}

void LogicalOperators()
{
    int temp = 0;
    cout<<"Enter temperature:";
    cin>>temp;

    if (temp < -10)
    {
        cout<<"It's really cold, be careful";
    }
    else if(temp >= -10 && temp < 10)
    {
        cout<<"It's cold, get a sweater.";
    }
    else if(temp >= 10 && temp < 20)
    {
        cout<<"It's ok outside";
    }
    else
    {
        cout<<"It's warm outside";
    }
}

void TemperatureConverter()
{
    double temp;
    char unit;

    cout<<"Enter temperature: ";
    cin>>temp;
    cout<<"Select unit: "<<std::endl;
    cout<<"(1) Fahrenheit to Celcius"<<std::endl;
    cout<<"(2) Celcius to Fahrenheit"<<std::endl;
    cout<<"Enter selection: ";
    cin>>unit;

    if (unit == '1')
    {
        temp = (temp -32) * 0.55;
        cout<<"Result -> "<<temp;
    }
    else if(unit == '2')
    {
        temp = (temp / 0.55) + 32;
        cout<<"Result -> "<<temp;
    }
    else
    {
        cout<<"Invalid selection.";
    }
}

void StringMethods()
{
    std::string name;

    cout<<"Enter name: ";
    std::getline(std::cin, name);

    if (name.empty())
    {
        cout<<"Empty value not allowed.";
    }
    else if (name.length() > 12)
    {
        cout<<"Name can not be over 12 characters.";
    }
    else
    {
        name = name.insert(0, "Mr. ");
        name = name.append(", welcome...");
        cout<<name<<std::endl;
        cout<<name.at(0)<<std::endl;
        cout<<name.find('.')<<std::endl;
    }
}

void WhileLoop()
{
    std::string name;

    while (name.empty())
    {
        cout<<"Enter name: ";
        std::getline(cin, name);
    }

    cout<<"Hello "<<name;
}

void DoWhileLoop()
{
    int number;

    do
    {
        cout<<"Enter number: ";
        cin>>number;

        if (number < 0)
        {
            cout<<"Number must be higher than 0..."<<std::endl;
        }
    } while (number < 0);
    
    cout<<"Number -> "<<number;
}

void ForLoops()
{
    int number;
    cout<<"Enter final number: ";
    cin>>number;

    for (int i=1; i<=number; i++)
    {
        if (i != 13)
        {
            cout<<i<<std::endl;
        }
        else
        {
            cout<<"Skip bad luck number..."<<std::endl;
            continue;
        }

        if (i % 17 == 0)
        {
            cout<<"Number % 17 = 0"<<std::endl;
            break;
        }
    }

    cout<<"End of the function.";
}

void NestedLoops()
{
    int rows, columns;
    cout<<"Emter # rows: ";
    cin>>rows;
    cout<<"Enter columns: ";
    cin>>columns;

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            cout<<"@-@";
        }

        cout<<std::endl;
    }
}


int main()
{
    //Greeting();
    //Variables();
    //Namespaces();

    //ArithmeticOperators();
    //TypeConversion();
    //UserInput();
    //MathFunctions();
    //HypotenuseCalculator();

    //IfStatement();
    //SwitchStatement();
    //CalculatorProgram();
    //TernaryOperator();
    //LogicalOperators();
    //TemperatureConverter();

    //StringMethods();
    //WhileLoop();
    //DoWhileLoop();
    //ForLoops();
    NestedLoops();

    return 0;
}

