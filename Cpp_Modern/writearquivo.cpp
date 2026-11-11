#include<iostream>
#include<fstream>





int main(){

std::string conteudo,outro,linha;
std::ofstream arquivo;




arquivo.open("arquivo.txt",std::ios::app);

std::cout<<"Digite algo para escrever no arquivo: ";
std::getline(std::cin,outro);

arquivo<<conteudo<<outro<<std::endl;
arquivo.close();

std::ifstream arquiv("arquivo.txt");

if(arquiv.is_open()){

    while(getline(arquiv,linha)){
        
    std::cout<<linha<<std::endl;






}
arquivo.close();
}
else{
    
    std::cout<<"Erro ao abrir o arquivo"<<std::endl;
}



}



