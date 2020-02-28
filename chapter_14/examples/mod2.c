/*
 * Because square wants to access the vlaue of this varaible, which is 
 * defined in another source file (in mod1.c), and appropriate extern
 * declaration appears here.
 */
extern double x;

double square (void)
{
  return x * x;
}