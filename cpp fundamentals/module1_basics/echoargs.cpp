#include <iostream>


int main(int argc, char const *argv[]) {
  for (int i=0; i<argc; i++)
  {
     std::cout<<"arg["<<i<<"] : " << argv[i]<< std::endl;
  }
}
