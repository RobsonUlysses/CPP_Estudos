#include<iostream>


struct produto{


std::string nome;
int qtdade;
float preco;


produto(){std::cout<<"contrutor iniciado"<<std::endl;}
~produto(){std::cout<<"destrutor chamado ";}







};


int main(){
system("clear");
produto *celular =  new produto;

celular->nome = "xiomi_s30";
celular->qtdade = 10;
celular->preco = 10000;



std::cout<<celular->nome<<" \nquantidade no estoque:"<<celular->qtdade<<"\npreço:"<<celular->preco<<std::endl;
delete(celular);
}

