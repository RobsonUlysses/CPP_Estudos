#include<iostream>



class Casa{


int numeroDeQuartos;
bool temsuite;
int numeroDeBanheiros;
void mostrartamanho();
public:
    void setnumeroDeQuartos(int numquarto);



};



int main(){

Casa casa1;

casa1.setnumeroDeQuartos(3);


}



void Casa::setnumeroDeQuartos(int numquarto){

    numeroDeQuartos = numquarto;
    std::cout << "O numero de quartos da casa e: " << numeroDeQuartos << std::endl;
    
}