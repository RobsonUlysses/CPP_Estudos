#include<iostream>


/*
para interar um valor se deve usar i+=valor, pois o valor de i é uma copia do valor do vetor, e não o valor do vetor em si.
para somar um numero do vetor com o proximo,deve ser somar com a proxima posição do vetor usando vetor[i+1], 
pois vetor[i] é o valor do vetor na posição i, e vetor[i+1] é o valor do vetor na posição i+1.
*/



int main(){ 


int nums[6]{1,2,3,4,5,6};



std::cout<<40*15<<std::endl;

for(int i =0 ;i <5;i++){
    int n =nums[i]+nums[i+1];
    std::cout<<n<<std::endl;


}








}