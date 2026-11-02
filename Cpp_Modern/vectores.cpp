#include<iostream>
#include<vector>





int main(){


system("clear");


std::vector<int> num = {10,20,40,50,60,80};
std::vector<int>::iterator inicio = num.begin();




std::cout<<"o primeiro elemento e "<<*inicio<<std::endl;
std::cout<<"o ultimo elemento e "<<num.back()<<std::endl;




for(auto i :num){


    std::cout<<i<<std::endl;
}





    return 0;
}