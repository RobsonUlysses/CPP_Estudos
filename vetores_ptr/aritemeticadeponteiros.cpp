#include<iostream>


/*
usando ptr+1 irar deslocar para o segundo elemento do array, ptr+2 para o terceiro elemento e assim por diante
se for printar o valor do ponteiro, ele ira imprimir o endereço de memoria do elemento do array, se for printar o valor do ponteiro
com *ptr ira imprimir o valor do elemento do array

*/

int main(){


int nums[5]{1,2,3,4,5};

int *p = nums; //ponteiro p aponta para o primeiro elemento do array nums

std::cout<<*p+3<<std::endl; //imprime o endereço do segundo elemento do array nums









}