#include <stdint.h>
#include <stdio.h>

int check_no_length(uint64_t isbn) { //isbn has to have length 13
  
  int count = 0;
  while (isbn != 0) {
    isbn = isbn / 10;
    count ++;
  }
  printf("count = %d\n", count);
  return count;
}

int check_valid_isbn(uint64_t isbn) { // sum = even * 3 + odd
  int sum = 0;

  for(int i = 12; i > 0; i--) {
    if(i % 2 == 0) {
      sum += (isbn % 10) * 3;
      // printf("%d = sum + %lu * 3\n", sum, (isbn % 10));
      isbn = isbn / 10;
    }
    else {
      // printf("%d = sum + %lu\n", sum, (isbn % 10));
      sum += isbn % 10;
      isbn = isbn / 10;
    }
  }

  printf("sum = %d\n", sum);

  return sum;
}

int main(int argc, char *argv[]) {
  
  uint64_t isbn;
  
  if (scanf("%13lu", &isbn) == 1) { //enter 13 digit long isbn number
    if (check_no_length(isbn) != 13) {
      printf("isbn has to have length 13! \n");
      return 1;
    }
    if ((check_valid_isbn(isbn / 10) + (isbn % 10)) % 10 == 0) { //check isbn validity with formula
      printf ("isbn is valid \n"); //returned sum of func + last digit of isbn has to be divisible by 10
    }
    else {
      printf("isbn is invalid \n");
    }
  }
  else {
    printf("insert valid ISBN13 number !\n");
  }

  return 0;
}


