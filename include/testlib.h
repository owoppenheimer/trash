#pragma once
#ifndef TYPES_H
#define TYPES_H

/* This'll be used only for expressions where you need to put <type> many times */
typedef double f64;
typedef float f32;

char clearterm[] = "\033[H\033[J";

typedef struct Point {
   double x, y;
} Point;

#endif
