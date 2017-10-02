#include "complex.h"
#include <iostream>



complex::complex(int real, int imaginary):
real(real),
imaginary(imaginary)
{
  std::cout<<"object created in normal constructor"<<std::endl;
}

complex::complex() :
real(0),
imaginary(0)
{
  std::cout<<"object created in default constructor"<<std::endl;
}

complex::complex(const complex& c):

real(c.real),
imaginary(c.imaginary)

{
  std::cout<<"object created in copy constructor"<<std::endl;
}

int complex::getReal() const
{
  return real;
}

int complex::getImaginary() const
{
  return imaginary;
}

void complex::setImaginary(int imaginary)
{
  this->imaginary = imaginary;
}

void complex::setReal(int real)
{
  this->real = real;
}

complex complex::operator+(const complex& c) const
{
  std::cout<<"sum for complex applied"<<std::endl;
  /*int real=c.real+this->real;
  int imaginary = c.imaginary + this->imaginary;

  complex result=complex(real,imaginary);*/

  return complex(real + c.real, imaginary + c.imaginary);
}

bool complex::operator==(const complex& c) const
{
  std::cout<<"equality evaluation"<<std::endl;
  if(real == c.real && imaginary == c.imaginary)
    return true;
  else
    return false;
}

int main() {

  
  CppUnit::TestSuite suite;
  CppUnit::TestResult result;

  complex normal(10,20);
  complex def;
  complex cop(normal);
  complex sum;
  
  if(normal==cop)
    std::cout<<"true"<<std::endl;
  else
    std::cout<<"false"<<std::endl;

  std::cout << normal.getReal() << std::endl;
  normal.setReal(15);
  std::cout << normal.getReal() << std::endl;
  
  if(normal==cop)
    std::cout<<"true"<<std::endl;
  else
    std::cout<<"false"<<std::endl;

  sum = normal + cop;

  std::cout << sum.getReal() << std::endl;
  std::cout << sum.getImaginary() << std::endl;

  suite.addTest( new CppUnit::TestCaller<ComplexNumberTest>(
                       "testEquality", 
                       &ComplexNumberTest::testEquality ) );
  suite.addTest( new CppUnit::TestCaller<ComplexNumberTest>(
                       "testAddition", 
                       &ComplexNumberTest::testAddition ) );
  suite.run( &result );

	
}
