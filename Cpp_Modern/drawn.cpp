#include<ncurses.h>
#include<string>
#include<unistd.h>


int main(int argc, char *argv[]){
    std::string ola = "Hello World";
    const char *hello = argc > 1 ? argv[1] : ola.c_str();
    const int delay{30000};
    int X = 0, Y = 0;

    initscr();
    
    while (true) {
        clear();
        mvprintw(Y, X, "o");
        refresh();
        usleep(delay);
        X++;
        
    }
    move(10,50);
    printw(hello);
    refresh();
    getch();
    endwin();
    return 0;
}
