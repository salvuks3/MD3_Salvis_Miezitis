#include <stdio.h>

int main() {
  FILE *fails;

  // Open a file in read mode
  fails = fopen("filename.txt", "r");

  // Store the content of the file
  char Teksts[10000];

  // If the file exist
  if(fails != NULL) {
  
    // Read the content and print it
    while(fgets(Teksts, 10000, fails)) {
      printf("%s", Teksts);
    }
    
  // If the file does not exist 
  } else {
    printf("Nevar atvērt teksta failu.");
  }

  // Close the file
  fclose(fails);

  return 0;
}
