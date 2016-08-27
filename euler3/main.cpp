#include <QCoreApplication>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main()
{
    for (long long int i=1; i<600851475143; i++)
       {
        if (600851475143%i==0)
         for (long long int a=2; a<i; a++)
         {
             if (i%a==0)
                 break;
             if (a+1==i)
                 cout << i <<endl;
         }

   }
    return 0;
}
