#include <stdlib.h>
#include <time.h>
/*more headers goes here*/
/*betty style doc for functon main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n=rand()-RAND_MAX / 2;
  /*your code goes there */
  if(n>0){
    printf("is positive");
      }
  else if(n=0){
    printf("is zero")
      }
  else(n<0){
      printf("is negative");
	}
  return (0);
}
