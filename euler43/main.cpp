#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

int main ()
{
    long long int a;
    long double b;
    for (long double i=1020304050607080900; i<2000000000000000000; i+=10)
    {
        b=sqrt(i);
        a=b;
        if (a==b)
            cout << i;
    }
    return 0;
}
