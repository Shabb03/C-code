#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
   int my_height = atoi(argv[1]);
   int your_height = atoi(argv[2]);                      

   if(your_height > my_height) {
      printf("You are taller than me.\n");
   }
   else if(your_height < my_height){
      printf("I am taller than you.\n");
   }
   else{
      printf("We are exactly the same height.\n");
   }
   return 0;
}
