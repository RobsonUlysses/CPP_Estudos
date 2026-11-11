#include<string>
#include<ncurses.h>






int main(){

    std::string ola = "Hello World";
    char *helo = &ola[0];
//inicialisa o ncurses
initscr();
//move o print para a posicao 10,10
move(10,10);
//imprime na tela
printw(helo);
printw("nada de novo");
printw("nada aqui");



//atualiza a tela
refresh();
//espera o usuario apertar uma tecla
getch();
//encerra o ncurses
endwin();
//std::cout<<"Hello World"<<std::endl;








}