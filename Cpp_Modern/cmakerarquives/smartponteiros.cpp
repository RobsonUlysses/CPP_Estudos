#include<iostream>
#include<string>
#include<memory>





int main(){


	std::string msg{" "};
	std::cout<<"digite algo: ";
	std::getline(std::cin,msg);

	auto nome = std::make_shared<std::string>(msg);
	std::cout<<*nome<<std::endl;














return 0;
}
