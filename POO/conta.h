#pragma once

#include<iostream>
#include<string>


class Conta{

private:
    std::string nome_banco;
    double saldo;
    double limite;





public:

    Conta(std::string nome_banco, double saldo, double limite);
    void setNomeBanco(std::string nome_banco);
    std::string getNomeBanco();
    void setSaldo(double saldo);
    double getSaldo();
    void setLimite(double limite);
    double getLimite();
    double depositar(double valor);
    double sacar(double valor);
    void mostrarSaldo();





};