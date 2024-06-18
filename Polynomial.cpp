#include"polynomial.h"
#include<iostream>
using namespace std;
//default constructor

Polynomial::Polynomial() : size(defualt_poly), coeff(new int[defualt_poly])
{
    for(int i=0; i< defualt_poly; i++)
        coeff[i] = 0;
}
//parameterized
Polynomial::Polynomial(int size) : size(size), coeff(new int[size+1])
{
    for(int i=0; i<size; i++)
        coeff[i] = 0;
}
// COPY constructor
Polynomial::Polynomial(const Polynomial& aPoly)
{
    *this = aPoly;
}

//assignment operator 
Polynomial& Polynomial::operator=(const Polynomial&aPoly)
{
    size = aPoly.size;
    delete[] coeff;
    coeff = new int[size+1];
    for(int i=0; i<size; ++i)
        coeff[i] = aPoly.coeff[i];
    return *this;
}


//OPERATOR OVERLOADING  EQUAL == TO
bool Polynomial::operator==(const Polynomial &aPoly)
{
for(int i=0; i<DEFAULTPOLY; i++)
if(aPoly.coeff[i]!=this->coeff[i])
{
return false;
}
else
{
return true;
}
}
//  addition operator overloading
Polynomial Polynomial::operator+(const Polynomial &aPoly)
{
    Polynomial temp;
    temp.size = this->size > aPoly.size ? this->size : aPoly.size;
    for(int i=0; i<=temp.size; i++)
        temp.coeff[i] = (i <= this->size ? this->coeff[i] : 0) + (i <= aPoly.size ? aPoly.coeff[i] : 0);
    return temp;
}


//  subraction operator overloading
Polynomial Polynomial::operator-(const Polynomial &aPoly)
{
    Polynomial temp(*this);
    temp -= aPoly;
    return temp;
}

// operator overloading +=
void Polynomial::operator+=(const Polynomial &aPoly)
{
    *this = *this + aPoly;
}


//  operator overloading -=
void Polynomial::operator-=(const Polynomial &aPoly)
{
    this->size = this->size > aPoly.size ? this->size : aPoly.size;
    for(int i=0; i<=this->size; i++)
        this->coeff[i] -= aPoly.coeff[i];
}

//destructor
Polynomial::~Polynomial() 
{
    if (coeff != nullptr) 
    {
        delete[] coeff;
        coeff = nullptr;
    }
}


// << operator overloading
ostream& operator<<(ostream& output, const Polynomial &aPoly)
{
for(int i=aPoly.size; i>=0; i--)
{
if(aPoly.coeff[i]==0) continue;
if(i==aPoly.size || aPoly.coeff[i]<0)
output<<aPoly.coeff[i]<<"X^"<<i<<" ";
else
output<<"+ "<<aPoly.coeff[i]<<"X^"<<i<<" ";
}
output<<endl;
return output;
}
//>>  operator overloading
istream& operator>>(istream& input, Polynomial &aPoly)
{
    int size = aPoly.size;
    do
    {
        cout << "Enter Coefficient for degree " << size << " : ";
        input >> aPoly.coeff[size];
        size--;
    } while (size >= 0);
    return input;
}

