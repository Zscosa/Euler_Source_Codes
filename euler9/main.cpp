#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()
{
    long double a;
    long double b;
    long long int d;
    for (int i=2; i<1000; i++)
    {
        for (int j=i+1; j<1000; j++)
        {
            a=i*i+(j*j);
            b=sqrt(a);
            d=b;
            if (d>1000)
                break;
            if ((b-d==0)&&(i+j+d==1000))
            {cout << i << " ; " << j << " ; "  << d << endl;
                cout << i*j*d;
                break;}
        }

    }

        return 0;
}
