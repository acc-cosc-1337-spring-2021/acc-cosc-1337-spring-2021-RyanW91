//cpp
#include "loops.h"
#include <iostream>


// function definition

int factorial(int num)
 {
   int count = 1; 
   for (int i=1; i<=num; i++) 
   {
       count *= i;
   }
   return count;
}

