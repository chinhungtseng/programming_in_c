/*
 * If many functions in the file foo.c need to access the vlaue of i, 
 * it is easier to make the extern declaration just once at the front
 * of the file.
 */

extern int i;

void foo (void)
{
  //extern int i;
 
 /*
  * However, if only one function or a small number of functions need 
  * to access this variable, there is something to be said for making 
  * separate extern declarations in each such function:
  * It makes the program more organized and isolates the use of the 
  * particular variable to those funcitons that actually use it.
  */
 
  i = 100;
}