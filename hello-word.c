#include <unistd.h>

void printhelloworld() {
    write(1, "Hello, world!\n", 14);
}

int main (void) {
    printhelloworld(); 
}
