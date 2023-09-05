#include <iostream>
#include <stdio.h>

using std::cout;
using std::cin;
using std::string;

class Human
{
    public: 
    string name;
    string occupation;
    int age;

    Human()
    {

    }

    Human(string name, string occupation, int age)
    {
        this->name = name;
        this->occupation = occupation;
        this->age = age;
    }

    void talk()
    {
        cout<<"Hello, I am "<<name<<", I am a "<<occupation<<"\n";
    }

    void eat()
    {
        cout<<name<<" is eating.\n";
    }

    void drink()
    {
        cout<<name<<" is drinking.\n";
    }

    void sleep()
    {
        cout<<name<<" is sleeping.\n";
    }
};


class Car 
{
    public:
        string make;
        string model;
        string color;
        int year;

    private:
        string plate;
        string owner;

    public:

    Car (){

    }

    Car(string make, string model, string color, int year){
        this->make = make;
        this->model = model;
        this->color = color;
        this->year = year;
    }

    void accelerate(){
        cout<<"Car is accelerating.\n";
    }    
    
    void brake(){
        cout<<"Car is stopping.\n";
    }    

    string getPlate()
    {
        return this->plate;
    }

    void setPlate(string plate)
    {
        this->plate = plate;
    }

    string getOwner()
    {
        return this->owner;
    }

    void setOwner(string owner)
    {
        this->owner = owner;
    }
};

class SportCar : Car
{
    public:

    void openSunRoof()
    {
        cout<<"Sun roof is open.\n";
    }
};

class Taxi : Car
{
    public:
        string registrationId;

    private:
        double feePerMinute;
        double serviceFee;
    
    public:

    Taxi(string registrationId, double feePerMinute)
    {
        this->registrationId = registrationId;
        this->feePerMinute = feePerMinute;
    }

    void callTaxi()
    {
        cout<<"Taxi is on the way.\n";
    }

    void setFeePerMinute(double fee)
    {
        this->feePerMinute = fee;
    }

    double getFeePerMinute()
    {
        return this->feePerMinute;
    }

    double calculateServiceFee(int minutes)
    {
        this->serviceFee = this->feePerMinute * minutes;
        return this->serviceFee;
    }
};

void InitiateHuman()
{
    Human human1;
    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;

    cout<<"\n";
    cout<<human1.name<<"\n";
    cout<<human1.occupation<<"\n";
    cout<<human1.age<<"\n";

    human1.eat();
    human1.drink();
}

void InitiateCar()
{
    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "white";

    cout<<"\n";
    cout<<car1.make<<"\n";
    cout<<car1.model<<"\n";
    cout<<car1.year<<"\n";
    cout<<car1.color<<"\n";
    
    car1.accelerate();
    car1.brake();
}

int main()
{
    //InitiateCar();
    //InitiateHuman();
    
    //Human human("Carlos", "teacher", 62);
    //human.eat();
    //human.talk();

    /*
    Car car("Chevrolet", "Camaro", "yellow", 2022);
    car.accelerate();
    car.setPlate("CD-4907");
    cout<<"Plate number: "<<car.getPlate()<<"\n";
    car.setOwner("Ivan");
    cout<<"New owner: "<<car.getOwner()<<"\n";
    */

    Taxi taxi("XY0001-01", 2.3);
    taxi.callTaxi();
    cout<<"Service fee is $"<<taxi.calculateServiceFee(5)<<"\n";

    SportCar sportcar;
    sportcar.openSunRoof();

    return 0;
}