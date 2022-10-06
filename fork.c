/*Benjamin Gutierrez Mendoza A01642356
TECNOLOGICO DE MONTERREY CAMPUS GDA
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int pid = fork();

    if(pid == 0){
        printf("Soy el proceso hijo\n");
        excecl("/workspace/TC1104b.514/hello","hello",NULL);
        sleep(5);
        pritnf("nunca nunca nunca")
    }else{
        printf("Soy el proceso padre\n");
        wait(NULL);
    }
    return 0;
}