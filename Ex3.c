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


int main() {
    srand(time(NULL));
    printf("Who are you?\n");
    printf("> John\n");
    printf("Hello, John!\n");

    printf("Tossing a coin...\n");

    printf("Round 1:");
    toss();

    printf("Round 2:");
    toss();

    printf("Round 3:");
    toss();

    printf("Heads: %d, Tails: %d\n",h,t);

    return 0;
}



