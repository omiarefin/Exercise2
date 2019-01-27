#include <pthread.h>
#include <stdio.h>

int i = 0;

pthread_mutex_t lock;

// Note the return type: void*
void* incrementingThreadFunction(){
    pthread_mutex_lock(&lock);
    for (int j = 0; j < 1000000; j++) {
	  // TODO: sync access to i
	     i++;
    }
    pthread_mutex_unlock(&lock);
    return NULL;
}

void* decrementingThreadFunction(){
  pthread_mutex_lock(&lock);
    for (int j = 0; j < 1000000; j++) {
  	// TODO: sync access to i
	     i--;
    }
    pthread_mutex_unlock(&lock);
    return NULL;
}


int main(){
    pthread_mutex_init(&lock,NULL);

    pthread_t incrementingThread;
    pthread_t decrementingThread;

    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);

    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);

    pthread_mutex_destroy(&lock);

    printf("The magic number is: %d\n", i);
    return 0;
}
