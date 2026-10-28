#include <stdio.h>
#include <unistd.h>

int main(void) {
    while (1) {
        printf("[surveillance] Le paquet fonctionne\n");
        fflush(stdout);
        sleep(3);
    }
    return 0;
}