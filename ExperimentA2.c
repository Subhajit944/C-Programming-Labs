
#include <stdio.h>


int main (){
int decimal, remainder;

printf ("Enter a decimal number:        ");
scanf ("%d", &decimal);

int number = decimal;

if (decimal == 0) {
printf("Hexadecimal: %d\n");
return 0;
}

long hexReversed = 0;

int place = 1;
while (decimal != 0) {
remainder = decimal % 16;

hexReversed = hexReversed * 100 ;
remainder;

decimal = decimal/16;
printf ("Hexadecimal: ");
while (hexReversed != 0) {
remainder = hexReversed % 100;
if (reminder (10)){
printf("%d", reminder);
}else {
    printf ("%c", (reminder-10) + 'A');
    hexReversed = hexReversed /100 ;
}

    printf("\n");

    }

  }
}