//LFSR-software-basico
//Linear-feedback_shift_register de Software Basico (1/2017)

#include <stdio.h>
#include <string.h>
#define size_bits 24

/* define a structure with bit fields */
struct {
   unsigned int value : 1;
} onebit;

struct body
{
    onebit lsfr[size_bits];//position
};

int main( ) {
   printf( "Memory size occupied by bit : %d\n", sizeof(onebit));
   return 0;
}

/*
#include<stdio.h>
#define n 3
struct body
{
    double p[3];//position
    double v[3];//velocity
    double a[3];//acceleration
    double radius;
    double mass;
};

struct body bodies[n];

int main()
{
    int a, b;
     for(a = 0; a < n; a++)
     {
            for(b = 0; b < 3; b++)
            {
                bodies[a].p[b] = 0;
                bodies[a].v[b] = 0;
                bodies[a].a[b] = 0;
            }
            bodies[a].mass = 0;
            bodies[a].radius = 1.0;
     }

    return 0;
}
*/
