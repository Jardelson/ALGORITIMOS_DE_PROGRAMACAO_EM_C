#include <stdio.h>

int main() {
  printf("\x1b[35m--------------------------\x1b[35m\n");
  printf("\x1b[34m    N O T A L E G A L     \x1b[34m\n");
  printf("\x1b[36m--------------------------\x1b[36m\n");
  printf("\x1b[0mITEM          QTD VALOR     \n");
  printf("%-13s %03i %4.2f\n" , "Banana nanica", 2, 2.50);
  printf("%-13s %03i %4.2f\n" , "Uva globo", 1, 3.00);
  printf("%-13s %03i %4.2f\n" , "Laranja Lima", 1, 4.00);
  
  //printf("Banana nanica  2   R$ 2.50\n");
  //printf("Uva globo      1   R$ 3.00\n");
  //printf("Laranja Lima   1   R$ 4.00\n");
  printf("--------------------------\n");
  printf("TOTAL:         %8.2f\n", 12.00);
  
return 0;
}