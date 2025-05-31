#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "../include/testlib.h"

#define WIDTH 130
#define HEIGHT 6

void animate(char buffer[HEIGHT][WIDTH + 1], short *frame) {
   memset(buffer, ' ', HEIGHT * (WIDTH + 1));
   for (int i = 0; i < HEIGHT; i++) {
      buffer[i][WIDTH] = '\0';
   }
   int x = *frame % WIDTH;

   buffer[HEIGHT / 2][x]     = '>';
   buffer[HEIGHT / 2][x + 1] = '<';
   buffer[HEIGHT / 2][x + 2] = '>';

   puts(clearterm);

   for (int i = 0; i < HEIGHT; i++) {
      printf("%s\n", buffer[i]);
   }
   (*frame)++;
   usleep(109999);
}

int main(void) {
   char buffer[HEIGHT][WIDTH + 1];
   short frame = 0;

   while (1) {
      animate(buffer, &frame);
   }

   return 0;
}
