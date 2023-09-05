#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::string;

bool validateCreditCard(string creditCard, int size);

int main()
{
    string cardNumber = "";
    cout<<"*******LUHN ALGORITHM*******\n";
    cout<<"Enter card number: ";
    std::getline(cin, cardNumber);
    int size = sizeof(cardNumber)/sizeof(cardNumber[0]);

    bool valid = validateCreditCard(cardNumber, size);

    if (valid == true)
    {
        cout<<"Valid card...!!!";
    }
    else
    {
        cout<<"Card is NOT valid...!!!";
    }

    return 0;
}

bool validateCreditCard(string creditCard, int size)
{
    bool valid = false;
    string step1 = "";
    string number = "";
    int step2 = 0;
    int step3 = 0;
    int step4 = 0;
    int temp;
    cout<<"size: "<<creditCard.length()<<"\n";

    //STEP #1
    for (int i=creditCard.length()-2; i>=0; i=i-2)
    {   
        cout<<creditCard[i]<<" ";
        number = creditCard[i];
        temp = std::stoi(number) * 2;
        cout<<temp<<"\n";
        step1 = std::to_string(temp) + step1;
        cout<<"\nStep 1: "<<step1<<std::endl;
    }

    //STEP #2
    for (int i=0; i<step1.length(); i++)
    {
        number = step1[i];
        cout<<number<<" ";
        step2 += std::stoi(number);
    }
    
    cout<<"\nStep 2: "<<step2<<std::endl<<std::endl;

    //STEP #3
    for (int i=creditCard.length()-1; i>0; i=i-2)
    {
        number = creditCard[i];
        cout<<number<<" ";
        step3 += std::stoi(number);
    }
    
    cout<<"\nStep 3: "<<step3<<std::endl<<std::endl;

    //STEP #4
    step4 = step2 + step3;

    if (step4 % 10 == 0)
    {
        valid = true;
    }
    else 
    {
        valid = false;
    }
    
    return valid;
}