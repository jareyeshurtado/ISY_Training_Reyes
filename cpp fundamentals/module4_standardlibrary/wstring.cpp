#include <iostream>

std::string erase_i (std::string number)
{
  return number.erase(number.find('i'));
}

void to_complex(std::string number)
{
  int real;
  int imaginary;
  std::string number1 = number.substr(0, number.find('+'));
  number = number.substr(number.find('+') + 1);
  std::cout << number << std::endl;
  std::cout << number1 << std::endl;
  number=erase_i(number);
  std::cout << number << std::endl;
  std::cout << number1 << std::endl;
}


int main(int argc, char const *argv[]) {
  std::string s3 = "hi";
  std::string s10 = "123456789";
  std::string s15 = "My name is Jose";
  std::string s40= "My name is Jose Antonio Reyes Hurtado...";
  std::string comp = "3 + 10i";

  s3+= "Belgium";
  s3.append(" N");
  s3.push_back('V');
  std::cout << "the capacity of " << s3 << " is "<< s3.capacity() << std::endl;
  std::cout << s10.capacity() << std::endl;
  std::cout << s15.capacity() << std::endl;
  std::cout << s40.capacity() << std::endl;

  to_complex(comp);

}
