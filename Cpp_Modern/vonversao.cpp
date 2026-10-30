#include<iostream>
#include<limits>







int main(){


double y = 5.888;
int x = 10.443;

std::cout<<y<<std::endl;

std::cout<<x<<std::endl;

int i = static_cast<int>(y);
double d =static_cast<double>(x);
std::string nome{};
char nomes[99];

std::cout<<"qual o numero"<<std::endl;
std::cin>>i;
//std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
//std::cin.getline(nomes,99);
std::cout<<i<<std::endl;

//std::cout<<"oque você digitou foi "<<nomes<<std::endl;
//std::cout<<d<<std::endl;
    

std::cout<<((i==8)? "e igual a 8" : "não e igual a 8");








return 0;




}