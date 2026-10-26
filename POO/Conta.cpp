#include<iostream>
#include "conta.h"




Conta::Conta(std::string nome_banco, double saldo, double limite){
    this->nome_banco = nome_banco;
    this->saldo = saldo;
    this->limite = limite;
}

double Conta::depositar(double valor){
    saldo += valor;
    std::cout << "Deposito realizado com sucesso!" << std::endl;
    return saldo;
}


double Conta::sacar(double valor){
    if(valor <= saldo +limite){
        saldo -= valor;
        std::cout << "Saque realizado com sucesso!" << std::endl;}
    else{
        std::cout << "Saldo insuficiente!" << std::endl;
    }
 return saldo;
}



double Conta::getSaldo(){
    return saldo;
}

void Conta::mostrarSaldo(){
    std::cout << "Saldo atual: " << saldo << std::endl;
}