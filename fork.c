#include <stdio.h>
#include <unistd.h>

int main{
    while(1){
    int pid = fork();
    if pid == 0{
        printf("soy el proceso hijo; pid = %f\n",pid);
    }else{
        printf("soy el proceso padre; pid = %d\n",pid);
    }
    }
    return o;
}