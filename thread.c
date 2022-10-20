#include <pthread.h>
#include <stdio.h>

#define NUM_THREADS 10


typedef struct thread_data{
    int threadId;
    char name[20];
} ThreadData;
typedef char caracter;

void * helloWorld(void *arg){
    ThreadData *myData = (ThreadData *)arg;
    printf("Hola desde el hilo y mi id es % d\n", myData -> threadId);
    pthread_exit(NULL);
   //return NULL;
}


int main(){
    ThreadData threadData[NUM_THREADS];
    for(int i = 0; i < NUM_THREADS; i++){
        ThreadData myData;
        pthread_t threadId;
        myData.threadId = i;
        pthread_create(&threadId,NULL,helloWorld,(void *) &myData);
    }
    pthread_exit(NULL); 
    printf("Nunca llega");
    //return 0;
}

//gcc -o thread thread.c -lpthread
//./thread