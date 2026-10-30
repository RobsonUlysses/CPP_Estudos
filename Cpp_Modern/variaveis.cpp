#include<iostream>



/*
toupper() -mostrar o valor do char na tabela ascii
nome = toupper(nome)- deixa o char maiusculo






*/










int main(){

    system("clear");
unsigned int y{4294867295};//unsigned diz que o int não tera valor negativo e com isso dobra o limite para 0 até 4.294.967.295
char caracter{'a'};

constexpr float PI{3.14};


caracter = toupper(caracter);

std::cout<<y<<std::endl;
std::cout<<PI<<std::endl;
std::cout<<"character: "<<caracter<<std::endl;





return 0;

}