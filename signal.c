#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int cond;

void hola(int signalNum){
    printf("Recibi la senial %d\n", signalNum);

}

void killwith12(int signalNum){
    printf("Ciclo terminado, señal: %d\n", signalNum);
    cond = 0;
}


int main(){
    signal(12,killwith12);
    signal(2,hola);
    cond = 1;
    while(cond == 1){
        printf("Trabajando\n");
        sleep(1);
    }
    printf("Aqui nunca llega\n");
    return 0;
}

//gitpod /workspace/iot.repository (main) $ gcc  -o signal signal.c
//gitpod /workspace/iot.repository (main) $ ./signal
//ps -fea
//kill -12 (codigo)

//busqueda de -fea: ps -fea | grep (palabra)