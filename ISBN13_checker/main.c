#include <stdint.h>
#include <stdio.h>

int check_no_length(uint64_t isbn) {
  
  int count = 0;
  while (isbn != 0) {
    isbn = isbn / 10;
    count ++;
  }
  printf("count = %d", count);
  return count;
}

int check_valid_isbn(uint64_t isbn) {
  int sum = 0;

  for(int i = 0; i < 13; i++) {
    if()  
  }
}

int main(int argc, char *argv[]) {
  
  uint64_t isbn;
  int valid_isbn = 1;

  
  if (scanf("%13lu", &isbn) == 1) {
    if (check_no_length(isbn) != 13) {
      printf("isbn has to have length 13! \n");
      return 1;
    }
    
  }
  else {
    printf("insert valid ISBN13 number !");
  }
  printf("isbn = %lu \n", isbn);
  return 0;
}


