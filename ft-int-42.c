#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_ft(int *nbr) {
    *nbr=42;
    
          
    
}

int main (int argc, char** argv) {
    int test;
    test=atoi(argv[1]);

    ft_ft(&test);

    printf("test=%d\n", test);

    return 0;
          
}
