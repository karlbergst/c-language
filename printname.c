#include <unistd.h>

void printname(char *name) {
    int i=0;
    while(name[i]!='\0')
    {
        write(1, &name[i], 1);
        i=i+1;
    }
}

int main (void) {
    printname("Karl und Tanja sitzen in C\n"); 
}
