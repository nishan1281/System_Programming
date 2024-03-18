#include <stdio.h>
#include <pthread.h>

void *computation();

int main(int argc, char **argv) {
    pthread_t thread1;
    pthread_create(&thread1, NULL, computation, NULL );
    pthread_join(thread1,NULL);
    return 0;

}

void *computation(){
    printf("computation running \n");
    return NULL;
}
