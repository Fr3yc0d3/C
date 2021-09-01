/*
 * this is for the name
 * second program
 * taking input and giving you back some cool outputs
 * by Frey 
*/

#include <stdio.h>
int main()
{
    int wtf;
    puts("Enter any number you bastard :- ");
    scanf("i", &wtf);
    if (wtf<1){
        puts("That is not a valid number of wtf you have");
        return 1;
    }
    printf("There are %i WTFs\n", (wtf + 10));
    return 0;
    
}
