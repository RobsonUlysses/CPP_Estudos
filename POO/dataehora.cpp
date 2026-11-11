#include<iostream>
#include<ctime>









int main(){


time_t horaatual = time(0);
tm* minhahora = localtime(&horaatual);

std::cout<<"hora:"<< minhahora->tm_hour<<":"<<minhahora->tm_min<<":"<<minhahora->tm_sec<<std::endl;







}