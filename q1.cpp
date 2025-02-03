// 1. Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.

#include <bits/stdc++.h>

using namespace std;
const double pi = 3.14159;

class Circle{
private:
 double rad; // private member to store rad;

 public:

Circle(double r): rad(r){}

double Area(){
    return pi*pow(rad,2);
}
double Circumference(){
    return 2*pi*rad;
}
};
int main(){
  double rad;
 cin>>rad;
 Circle circle(rad);

 double area = circle.Area();
 cout<<area<<endl;
 double circum = circle.Circumference();
 cout<<circum;

 return 0;
}