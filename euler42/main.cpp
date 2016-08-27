#include <QCoreApplication>
#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

long long int Trinum(long long int max)
{
    long long int a=1;
    for (long long int i=1; i>0; i++)
    {
        if (a>max)
            break;
        a=i*(i+1)/2;

    }
    return a;
}

int main ()
{

    return 0;
}
