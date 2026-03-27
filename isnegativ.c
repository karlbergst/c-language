#include <stdio.h>
#include <unistd.h>

void is_negative(int n)

{
if (n>0){

    write (1, "p", 1);
} //если n больше 0

//напечатать букву p

if (n<0){

    write (1, "n", 1);


}
    write (1, "\n", 1);
    
//если n меньше 0
//напечатать букву n




}