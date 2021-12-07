//Per Gaddis 9th Edition 
//Edits by Dr. Tyson McMillan 
//Fidel Gonzales: Date 10-26-2021
// This program helps people understance class structures and the use of imput validation to ensure programs run well.
#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;


//class definitions 
class Rectangle
{
  private:
    double width;
    double length;
  public:        //function prototypes for the member functions 
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

//functoin Trapezoid



//function definitions for each of our member functions 
void Rectangle::setWidth(double w)
{
  width = w; 
}

void Rectangle::setLength(double l)
{
  length = l; 
}

double Rectangle::getWidth() const
{
  return width; //return the private attribute, width
}

double Rectangle::getLength() const
{
  return length; //return the private attribute, length
}

double Rectangle::getArea() const
{
  return (length * width);
}

class Trapezoid
{
private:
double sideA;
double sideB;
double height;

public:
  void setSideA(double);
  void setSideB(double);
  void setHeight(double);
  double getSideA() const;
  double getSideB() const;
  double getHeight() const;
  double getArea() const;

};

void Trapezoid::setSideA(double sA)
{
  sideA = sA; //set private member side a to sA
}

void Trapezoid::setSideB(double sB)
{
  sideB = sB;
}

void Trapezoid::setHeight(double h)
{
  height= h;
}

double Trapezoid::getSideA() const
{
  return sideA;
}
double Trapezoid::getSideB() const
{
  return sideB;
}

double Trapezoid::getHeight() const
{
  return height;
}

double Trapezoid::getArea() const
{
  return (((sideA + sideB)/2.0)*height);
}

int main() 
{
  Rectangle r;  //r is an instance of the class Rectangle, an object
  r.setWidth(5.2); //set the private member with to 5.2 via the public setter
  cout << r.getWidth()<< endl; //print the current value of the private width

  //Dr_T Challenge 1 set the r's length to 7.8
  r.setLength(7.8); 

  //print the length on screen
  cout << r.getLength() << endl; 

  //print the statment on screen (use) getArea here
  cout << "\nThe area of a Rectangle with width="
       << r.getWidth() << " and length=" 
       << r. getLength() << " is " 
       << r.getArea() << endl;  
  /*
    A rectangle with with w = (getter) and len = (getter) 
    has an area of (use r.getArea())
    //upload the share URL to extra credit item 15
  */

  Trapezoid t;
 char option; 
do
{
//validate
//t.set
cout << "This program will help find the area of a Trapezoid\n";

cout << "Input the value of side A:\n" ;
double sA = 0.0;
sA = validateDouble(sA);
t.setSideA(sA);

cout << "You inputted: " <<  t.getSideA()   << endl;


cout << "Input the value of side B:\n" ;

double sB = 0.0;
sB = validateDouble(sB);
t.setSideB(sB);

cout<< "You inputted: " <<   t.getSideB()   << endl;


cout << "Input the value of the height:\n" ;

double h = 0.0;
h = validateDouble(h);
t.setHeight(h);

cout<< "You inputted: " <<   t.getHeight()   << endl;

cout<< "\nThe area of the trapezoid is: " <<  t.getArea()  << endl;




cout << " If you would like to exit, enter E." << endl;
option = validateChar(option);
}while(option != 'e' && option != 'E');

cout << "\nGoodbye. Hasta luego." << endl;

  return 0;   
}