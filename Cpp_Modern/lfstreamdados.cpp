#include<iostream>
#include<fstream>









int main(){

system("clear");
std::string linha;
std::ifstream arquivo("../arquivo.txt");

if(arquivo.is_open()){

    while(getline(arquivo,linha)){
        std::cout<<linha<<std::endl;
    }

    arquivo.close();
}else{


    std::cout<<"Erro ao abrir o arquivo"<<std::endl;
}
   














    return 0;
}