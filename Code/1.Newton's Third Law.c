```
// This code won't work since I have included 2 main function in single file. Kindly separate them.
/*
This program is to describe Newton's third law of motion.
*/
/*
**********************************************
We know that F=ma and in 3rd law, for every
action, there is equal and opposite reaction.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
   float m,a,force;
   printf("Enter mass :");
   scanf("%f",&m);
   printf("Enter acceleration:");
   scanf("%f",&a);
   if(m<0 || a<0)
   {
      printf("Invalid input\n");
      return 0;
   }
   force=m*a;
   printf("Force=%f N\n", force);
   return 0;
}

/*
To check for 3rd law of newton, we need to prove +m1a1=-m2a2
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
float f1, f2, m1, m2, a1, a2, Total;
printf (" Enter the mass of first body:");
scanf("%d", &m1);
printf (" Enter the mass of second body:");
scanf("%d", &m2);
printf ("Enter acceleration of the first body : ");
scanf ("%f", &a1);
printf ("Enter acceleration of the second body : ");
scanf ("%f", &a2);
if(m1<0 || a1<0 || m2<0 || a2 < 0) //F=+ma , Hence positive values of mass and acceleration are required.
    {
    printf("You have entered negative value. Please input positive values.\n");
    return 0;
    }
else if
    {
    f1=m1*a1;
    f2=m2*a2;
    Total = f1 == -f2;
    printf("The values hold true for newton's 3rd law");
    return 0;
    }
else
    {
    printf("Invalid inputs given.");
    return 0;
    }
}
```
