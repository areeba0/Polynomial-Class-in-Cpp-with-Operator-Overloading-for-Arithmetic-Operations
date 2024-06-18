#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include<iostream>
using namespace std;
const int defualt_poly = 10; //Default size of our dynamic coefficient array
class Polynomial
{

public:
//default constructor
Polynomial();
//parameterized constructor
Polynomial(int);
//copy constructor
Polynomial(const Polynomial&);
//assignment operator overloading
Polynomial& operator=(const Polynomial&);
//equal to operator overloading
bool operator==(const Polynomial &);
// + operator overloading
Polynomial operator+(const Polynomial &);
// - operator overloading
Polynomial operator-(const Polynomial &);
// += operator overloading
void operator+=(const Polynomial &);
// -= operator overloading
void operator-=(const Polynomial &);
//destructor
~Polynomial();
// << operator overloading
friend ostream& operator<<(ostream& out, const Polynomial &a);
// << operator overloading
friend istream& operator>>(istream& input, Polynomial &a);
private:
//Data members
//size of array
int size; 
//pointer to dynamic array
int *coeff; 
};
#endif // POLYNOMIAL_H
