#include <iostream>
#include <string>
#include <numeric>

int main ()
{
    long long int a=1;
    long long int b=2;
    long long int c=0;
    long long int d=2;
    for (long long int i=1; i>0; i++)
    {
        c=b+a;
        if (c>4000000)
            break;
        a=b;
        b=c;
        if (c%2==0)
            d+=c;

    }
    std::cout << d;
    return 0;
}
