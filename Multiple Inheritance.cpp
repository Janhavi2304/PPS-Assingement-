#include<iostream>
using namespace std;

//Base class Vehicle
class Vehicle {
  public:
  void vehicle()  {
    cout<<"I am a vehicle"<<endl;
  }
};
//Deriveed class twowheeler (inherites from vehicle)
class twowheeler : public Vehicle {
  public:
  void twoWheeler()  {
    cout<<"I am a twowheeler"<<endl;
  }
};
//Deriveed class bike (inherites from twowheeler)
class bike : public twowheeler {
  public:
  void Bike()  {
    cout<<"I am a bike"<<endl;
  }
};
int main()
{
  //create an object of class car
  bike mybike;
  
  //call methods of bike, twowheeler, and vehicle through bike object
 
  mybike.Bike();         // Calls the Bike method of bike class
 mybike.twoWheeler();   // Calls the twoWheeler method of twowheeler class
 mybike.vehicle(); 
  return 0;
}