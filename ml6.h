/*========== ml6.h ==========
Header file for fucntions we will use in ml6
Sets the maximum XYES and YRES for images as well as the maximum
color value you want to use.
Creates the point structure in order to represent a pixel as a color triple
=========================*/
#ifndef ML6_H
#define ML6_H

#define XRES 500
#define YRES 500
#define MAX_COLOR 255
#define DEFAULT_COLOR 0

/*
  Every point has an individual int for
  each color value
*/
extern struct point_t {

  unsigned char red;
  unsigned char green;
  unsigned char blue;
} point_t;

/*
  We can now use color as a data type representing a point.
  eg:
  color c;
  c.red = 0;
  c.green = 45;
  c.blue = 187;
*/
typedef struct point_t color;

/*
  Likewise, we can use screen as a data type representing
  an XRES x YRES array of colors.
  eg:
  screen s;
  s[0][0] = c;
*/
typedef struct point_t screen[XRES][YRES];

#endif