#include <stdio.h>
int main()
{
    char suit = 'c';
    switch(suit) {
        case 'c':
            puts("Clubs");
            break;
        case 'D':
            puts("Diamonds");
            break;
        case 'H':
            puts("Hearts");
            break;
        default:
            puts("spades");
    }
    return 0;
}
