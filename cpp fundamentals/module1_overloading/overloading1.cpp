#include <iostream>

int max (int a, int b)
{
  std::cout<<"int function"<< std::endl;
  if(a>b)
    return a;
  else
    return b;
}

short max (short a, short b)
{
  std::cout<<"short function"<< std::endl;
  if(a>b)
    return a;
  else
    return b;
}

int main(int argc, char const *argv[]) {
  short a = 1, b = 29, result;
  result = max(a,b);
  std::cout<<result<<std::endl;
}
