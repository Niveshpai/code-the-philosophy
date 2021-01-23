```
// Code to show the mean of 2 numbers

/*
Description :  Aristotle saw good as a 'mean' that stands between two bad’s: that of excess and that of deficiency.
*/

/*
Solution: I interpreted the question in 2 ways. I am not sure which is correct one. :
[1] Take mean of 2 numbers in array
[2] Also, find numbers greater than the mean in array
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   float mean;
   int sum, i;
   int n = 5;
   int a[5] = {1, 2, 3, 4, 5};
   sum = 0;
   for(i = 0; i < n; i++)
  { //first
      sum+=a[i];
      mean =  sum/(float)n;
   }
   printf("Mean = %f ", mean);
   for(i=0; i<n; i++)
   { //second
       if(a[i]>mean)
        printf("%d\t",a[i]);
   }
   return 0;
}
```
