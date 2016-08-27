#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long int triNum(long long int limit)
{
    long long int a=1;
    a=limit*(limit-1)/2;
    return a;
}

long long int penNum(long long int limit1)
{
    long long int b=1;
    b=limit1*(limit1*3-1)/2;
    return b;
 }

long long int hexNum(long long int limit2)
{
    long long int c=1;
    c=limit2*(limit2*2-1);
    return c;
}
int main()
{
    long long int aa=0;
    long long int bb=0;
    long long int cc=0;
   for (long long int abc=286; abc>1; abc++)
   {
     aa=triNum(abc);
     for (long long int bcd=166; bcd >1; bcd++)
     {
         bb=penNum(bcd);
         if (bb>aa)
             break;
         if (bb==aa)
             for (long long int cde=144; cde>0; cde++)
             {
                 cc=hexNum(cde);
                 if (cc>bb)
                     break;
                 if (cc==bb)
                     cout << cc;
             }

     }
   }

    return 0;
}
