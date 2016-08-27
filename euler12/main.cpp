#include <QCoreApplication>
#include <cmath>
#include <iostream>
#include <string>
#include <numeric>
#include <math.h>

using namespace std;


int main()
{
    long long int a=1;
    long long int b;
    long long int c=0;
    cin >> b;
    for(long long int i=2; i>0; i++)
    {
        a=a+i;
        cout << "F("<<a<<")= ";
        for (long long int j=1; j<=a; j++)
        {
            if (a%j==0)
            c++;
            if (j==a)
               {
                cout << "  total factors: "<< c<< endl;
                if (c>b)
                    return 0;
                c=0;
               }
        }
    }
    return 0;
}
