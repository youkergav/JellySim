/*
Author:         Gavin Youker
Date:           02/17/18
Description:    High-tech jellyfish simulation
                program for a better understanding
                of the immortality of jellyfish.
Minimum Specs:  Intel Quad-Core i7
                GTX 1080i (FE only)
                128GB of RAM
*/

#include <stdio.h>
#include <stdlib.h>

void swim();
int main() {
    // Happily enjoy it's life.
    int eaten = 0;
    int i = 1;

    while(eaten != 1) {
        swim(i);
        eaten = rand() % 10;

        i++;
        system ("CLS");
    }

    // RIP </3
    printf("BLEEP!");
}

// Function that defines everything of a jellyfish.
void swim(motion) {
    // Change animation per frame.
    if(motion % 2 == 0) {
        printf(" ___\n(   )\n ---\n/ | \\");
    } else {
        printf(" ___\n(   )\n ---\n\\ | /");
    }

    // Probability of blimps and bloomps.
    int stuff = rand() % 2;
    if(stuff == 0) {
        printf("  ...Blimp.");
    } else {
        printf("  ...Bloop.");
    }

    // Advanced delay algorithm.
    for(int i = 0; i < 1000000000; i++);
}
