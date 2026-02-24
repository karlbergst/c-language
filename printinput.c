#include <unistd.h>

void printname(char *name) {
    int i=0;
    while(name[i]!='\0')
    {
        write(1, &name[i], 1);
        i=i+1;
    }
}

int main (int argc, char **argv) {
    if (argc==2) {
        write(1, "Hello, ", 7); 
        printname(argv[1]);
        write(1, "\n", 1); 
     } else{
        write(1, "wrong number of arguments\n", 27);
     } 
    
}
