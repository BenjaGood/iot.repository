#include <stdio.h>

int main(){
    FILE *IsOutput;
    FILE *tomayIntput;
    char readBuffer[80];
    int howMany = 0;
    IsOutput = popen("ls *.c","r");
    tomayIntput = popen("./tomay","w");
    while (fgets(readBuffer,80,IsOutput)){
        fputs(readBuffer,tomayIntput);
        howMany ++;
    }
    pclose(IsOutput);
    pclose(tomayIntput);
    printf("Hay: %i archivos.c \n",howMany);
}
