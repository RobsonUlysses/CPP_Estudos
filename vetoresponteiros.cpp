#include<iostream>



/*

o nome do vetor sem os colchetes e o endereço do primeiro elemento do vetor, ou seja,
 o endereço do vetor é o mesmo que o endereço do primeiro elemento do vetor.
int array[] indica que isso e na verdade um ponteiro que aponta para o primeiro elemento do vetor, 
e o tamanho do vetor deve ser passado como parametro, pois o ponteiro não sabe o tamanho do vetor.

*/

int alterarvetor(int *vetor,int tamanho);
int mostrarvetor(int *vetor,int tamanho);
int main(){

system("clear");
int vetor[5]{1,2,3,4,5};
int tamanho = sizeof(vetor)/sizeof(vetor[0]);
std::cout << "Tamanho do vetor: " << tamanho << std::endl;






alterarvetor(vetor,tamanho);
mostrarvetor(vetor,tamanho);




}




int alterarvetor(int *vetor,int tamanho){
    for(int i = 0; i < tamanho; i++){
        vetor[i] = vetor[i] * 2;
    }
    return 0;
}

int mostrarvetor(int *vetor,int tamanho){
    for(int i = 0; i < tamanho; i++){
        std::cout << vetor[i] << std::endl;
    }
    return 0;
}