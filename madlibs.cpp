//Authors: 
#include <iostream>
#include <string>

int main()
{
std::string place1;
std::cout<<"What is this place?"<< std::endl;
std::cin >>place1;

std::string object1;
std::cout<<"What is this object?"<< std::endl;
std::cin >>object1;

int number1;
std::cout<<"How old is the crazy kid?"<< std::endl;
std::cin >>number1;

char letter1;
std::cout<<"What letter of the alphabet was it?"<< std::endl;
std::cin >>letter1;

std::cout<<"There once was a man from."<<place1<< std::endl;
std::cout<<"He thought he was eating his."<<object1<< std::endl;
std::cout<<"This crazy."<<number1<< " year old ended his year with a."<<letter1<<" :stamped on his forehead."<< std::endl;
  return 0;
}
