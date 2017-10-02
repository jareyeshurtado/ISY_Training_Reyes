#include <iostream>

struct complex {
  int real;
  int imaginary;
} ;

complex operator+(const complex& Rlhs, const complex& Irhs)
{
  std::cout<<"New operator"<<std::endl;
  complex result;
  result.real=Rlhs.real+Irhs.real;
  result.imaginary=Rlhs.imaginary+Irhs.imaginary;
  return result;
}

int main(int argc, char const *argv[]) {
  complex a, b, result;
  a.real=1;
  a.imaginary=2;
  b.real=2;
  b.imaginary=1;
  result = a+b;
  std::cout<<result.real<<std::endl;
  std::cout<<result.imaginary<<std::endl;

}
