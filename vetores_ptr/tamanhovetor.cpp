#include<iostream>
#include<vector>




/*
comandos do vetor:

vetor.push_back(valor) -> adiciona um valor no final do vetor
vetor.pop_back() -> remove o ultimo valor do vetor
vetor.size() -> retorna o tamanho do vetor
vetor[i] -> acessa o valor do vetor na posição i
vetor.at(i) -> acessa o valor do vetor na posição i, mas verifica se a posição existe, caso não exista, lança uma exceção
vetor.clear() -> remove todos os valores do vetor
vetor.empty() -> retorna true se o vetor estiver vazio, caso contrário, retorna false
vetor.insert(vetor.begin() + i, valor) -> insere um valor na posição i do vetor
vetor.erase(vetor.begin() + i) -> remove o valor da posição i do vetor
vetor.resize(n) -> redimensiona o vetor para n




*/








int main(){


int nums[6]{1,2,3,4,5,6};

int tamnho = sizeof(nums)/sizeof(nums[0]);
std::vector<int> vetor(10);
int tamnho2 = vetor.size();
std::cout<<"Tamanho do vetor: "<<tamnho<<std::endl;
std::cout<<"Tamanho do vetor: "<<tamnho2<<std::endl;
vetor.push_back(2);
vetor[2] = 5;

for(int i : vetor){
    std::cout<<i<<std::endl;
}








}