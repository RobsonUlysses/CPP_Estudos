#include<iostream>











int main(int argc, char *argv[]){


std::string *ptr = nullptr;
ptr = new std::string[10];

std::getline(std::cin,*ptr);
std::cout<<"você digitou \e[32;3m"<<*ptr<<"\e[m"<<std::endl;
delete []ptr;
ptr = nullptr;









    return 0;
}