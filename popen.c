#include <stdio.h>

int main(){
    FILE *IsOutput;
    FILE *tomayIntput;
    char readBuffer[80];
    int howm
    IsOutput = popen("ls *.c","r");
    tomayIntput = popen("./tomay","w");
    while (fgets(readBuffer,80,IsOutput)){
        fputs(readBuffer,tomayIntput);
    }
    pclose(IsOutput);
    pclose(tomayIntput);
}