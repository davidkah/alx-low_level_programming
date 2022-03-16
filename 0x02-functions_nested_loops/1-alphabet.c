
#include "main.h"

void print_alphabet(void){

    char c;
    for (c='a'; c<='z' ; c++) 
      _puchar( " %c  \n", c);
    
}


int main(void)
{
   print_alphabet() ;
   return (0);
}
