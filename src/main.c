#include <stdio.h>
#include "../include/types.h"

void change_pos(Point* point, f64 x, f64 y, f64 z) {
   point-> x = x;
   point-> y = y;
   point-> z = z;
}

int main(void) {
   Point a = { 1, 1, 1 };

   printf("%lf %lf %lf\n", a.x, a.y, a.z);
   change_pos(&a, 2, 2, 2);
   printf("%lf %lf %lf\n", a.x, a.y, a.z);

   return 0;
}
