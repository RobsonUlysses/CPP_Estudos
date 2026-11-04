#include<iostream>
#include<vector>
#include<algorithm>




int main(){


system("clear");


std::vector<int> num = {10,20,40,50,60,80};
std::string cpf{"123.456.789-00"};
num.push_back(100);
num[0] = 5 ;
std::vector<int>::iterator inicio = num.begin();

std::cout<<"o primeiro elemento e "<<*inicio<<std::endl;
std::cout<<"o ultimo elemento e "<<num.back()<<std::endl;
std::cout<<"cpf antes de remover o ponto e o traço "<<cpf<<std::endl;
cpf.erase(std::remove(cpf.begin(),cpf.end(),'.'),cpf.end());
cpf.erase(std::remove(cpf.begin(),cpf.end(),'-'),cpf.end());
std::cout<<"cpf depois de remover o ponto e o traço "<<cpf<<std::endl;

for(auto i :num){


    std::cout<<i<<std::endl;
}





    return 0;
}