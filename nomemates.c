#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void handle(int numsignal){
    printf("JAJAJAJA %d\n", numsignal)
}

int main(){
    signal(2,handle);
    while(1){
        printf("trabajando\n");
        sleep(1);
    }
    return 0;
}