#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int h;
int t;

void toss() {
    
        if (rand() % 2 == 0) {
            printf("Heads\n");
            h++;
        } else {
            printf("Tails\n");
            t++;
        }
}

void judge(){
if(h>t){
    printf("Rui won!\n");
}else printf("Rui lost!\n");
}

int main() {
    srand(time(NULL));
    printf("Who are you?\n");
    printf("> Rui\n");
    printf("Hello, Rui!\n");

    printf("Tossing a coin...\n");

    printf("Round 1:");
    toss();

    printf("Round 2:");
    toss();

    printf("Round 3:");
    toss();

    printf("Heads: %d, Tails: %d\n",h,t);

    judge();

    return 0;
}



