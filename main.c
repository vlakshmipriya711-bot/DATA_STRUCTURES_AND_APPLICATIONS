#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<math.h>

int main()
   {
      char symbol ;
      symbol = '2';
      if (isdigit(symbol))
      printf("\n %d",symbol-'0');
      else
         printf("\n not a digit ");
    return 0;
}
