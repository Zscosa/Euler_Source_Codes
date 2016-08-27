#include <QCoreApplication>
#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

long long int prime(long long int AmountOfPrime)
{
    long long int lastprime=1;
    long long int b=1;
    for (long long int i=2; i>1; i++)
      {lastprime=i;
        for (long long int j=2; j<i; j++)
        {
           if (i % j == 0)
               break;
           else if (i == j+1)
           b++;
           if (b==AmountOfPrime)
               break;
       }
        if (b==AmountOfPrime)
            break;
    }

 return lastprime;
}

int main()
{
    long long int h=1;
    long long int g=1;
    long long int e=1;
    long long int o=1;
   for (long long int q=3; q>1; q++)
   {
     h= prime(q) ;
     o=pow(h,2);
     g= pow((h-1),q) + pow ((h+1),q);

     e=g%o;
     cout << h << " mod: " << e << endl;
     if (e>pow(10,10))
         return 0;
   }
    return 0;
}
