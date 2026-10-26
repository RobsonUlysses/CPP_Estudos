#include<iostream>
#include "conta.h"
#include<string>






int main(){

Conta *conta1 = new Conta("Banco do Brasil", 1000.0, 500.0);


conta1->depositar(500.0);
conta1->mostrarSaldo();
    


system("Pause");




}


