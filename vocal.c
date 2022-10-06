#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
int main(){
    char c;
    char *msg = "Es una vocal\n";
    char *msg1 = "No es una vocal\n";
    char may;
    int n;
    do{
        n = read(STDIN_FILENO,&c,1);
        may = toupper(c);
        if(may == 'A' || may == 'E' || may == 'I' || may == 'O' || may == 'U'){
            write(STDOUT_FILENO,msg,14);
        }
    }while(n != 0);

    return 0;
}


