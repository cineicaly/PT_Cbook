#include <ctype.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


int main(void) {
  
  char isbn10[11] = "0521396549";
  int sum = 0;
  int check = -1;

  if(isdigit(isbn10[9])) {
    check = isbn10[9] - '0';
    printf("check = %d\n", check);
  }
  else if(isbn10[9] == 'X'){
    sum = 10;
  }
  else {
    printf("invalid number");
    return EXIT_FAILURE;
  }

  for(int count = 0; count < 9; count++) {
    if(isdigit(isbn10[count])) {
      sum += (isbn10[count] - '0') * (count + 1);
      printf("sum = %d, sum = %d * %d \n", sum, isbn10[count] - '0', count + 1);
    }
  }
  
  if(sum % 11 == check) 
    printf("isbn10 is valid ! sum %% 11 = %d \n", sum % 11);
  else
    printf("isbn10 is not valid ! sum %% 11 = %d \n", sum % 11);
  return EXIT_SUCCESS;
}
