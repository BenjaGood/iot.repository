#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void hola(int signalNum){
    printf("Recibi la senial %d", signalNum);

}

int main(){
    signal(12,hola);
    while(1){
        printf("Chanbeando \n");
        sleep(1);

    }
    printf("Aqui nunca llega");
    return 0;
}

//gitpod /workspace/iot.repository (main) $ gcc  -o signal signal.c
//gitpod /workspace/iot.repository (main) $ ./signal
//ps -fea
//kill -12 (codigo)