#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;


int main()
{
    long long int a;
    long long int b;
    long long int c;
    long long int d=0;
    for (int i=100; i<1000; i++)
    {
        for (int j=i; j<1000; j++)
        {
           a=j*i;
           if(a/100000>0)
           {
             b=a/1000;
             c=(a%10)*100+ (a/10%10)*10 + (a/100%10);
             if ((b==c)&&(a>d))
                 cout << a << endl;
           }

           else if(a%10000>0)
           {
               b=a/1000;
               c=(a%10)*10+ (a/10%10);
               if ((b==c)&&(a>d))
                   cout << a << endl;
           }
        }
        d=a;
    }
    return 0;
}
