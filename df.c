/*
* Task to fix this code
* 30-08-2021
* copyrignt under fR3YC0D3
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
char card_name[3];
puts("Enter the card name:");
scanf("%2s", card_name);
int val = 0;
if (card_name[0] == 'K'){
val = 10;
} else if (card_name[0] == 'Q'){
val = 10;
} else if (card_name[0] == 'J'){
val = 10;
} else if (card_name[0] == 'A'){
val = 11;
} else {
val = atoi(card_name);
}
printf("The card valur is : %i\n", val);
return 0;
}
