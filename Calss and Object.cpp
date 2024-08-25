#include<iostream>
#include<string>
using namespace std;


class Car {
public:
string brand;
string model;
int year;

void displayInfo()
{
  cout<<"Brand:"<<brand<<endl;
  cout<<"Model:"<<model<<endl;
  cout<<"Year:"<<year<<endl;
}
};
int main()
{
  Car c1;
  Car c2;
  c1.brand="BMW";
  c1.model="X5";
  c1.year=1999;

  c2.brand="Ford";
  c2.model="Mustang";
  c2.year=1969;
  
  cout<<"C1 Information:"<<endl;
  c1.displayInfo();
  
  cout<<"C2 Information:"<<endl;
  c2.displayInfo();
  
  return 0;
}