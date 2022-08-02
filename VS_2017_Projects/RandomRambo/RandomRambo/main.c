#include <stdio.h>
#include <Windows.h>
#include <signal.h>
#include <stdbool.h>

volatile sig_atomic_t the_signal = 0;

void handle_interrupt(int sig) {
    the_signal = sig;
}

bool is_prime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

int random_prime() {
    int x;
    do {
        x = rand();
    } while (!is_prime(x));
    return x;
}

int main(void) {

    int x;

    srand(345);
    signal(SIGINT, handle_interrupt);

    for (;;) {


        x = rand();

        if (the_signal) {
            puts("ow!");
            the_signal = 0;
            signal(SIGINT, handle_interrupt);
        }

        printf("Random prime number: %d \n", random_prime());
        Sleep(500);


    }

}