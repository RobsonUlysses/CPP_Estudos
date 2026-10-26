#include<iostream>



class Casa{


int numeroDeQuartos;
bool temsuite;
int numeroDeBanheiros;

public:
    void setnumeroDeQuartos(int numquarto);
    void mostrartamanho();
    bool gettemsuite();

};





/*
usando ponteiro e basicamente a mesma coisa que instancianr a classe normal a diferença e que _
o ponteiro e usado para objetos percistente na memoria e pode ser usado em outras funcoes e metodos da classe, ja a instancia normal e usada apenas no escopo do metodo main.
a normal e usado apenas para objetos temporarios e que nao precisam ser persistentes na memoria, 
ja o ponteiro e usado para objetos que precisam ser persistentes na memoria e podem ser usados em outras funcoes e metodos da classe.



*/




int main(){



Casa *casa_praia = new Casa();


(*casa_praia).setnumeroDeQuartos(3);
casa_praia->mostrartamanho();





}



void Casa::setnumeroDeQuartos(int numquarto){

    numeroDeQuartos = numquarto;
    std::cout << "O numero de quartos da casa e: " << numeroDeQuartos << std::endl;
    
}


void Casa::mostrartamanho(){

    std::cout << "O tamanho da casa e: " << numeroDeQuartos << " quartos" << std::endl;
    
}