#include <QCoreApplication>
#include <iostream>
#include <math.h>
#include <string>

int SumOfF(long long int number)
{  long long int sum=0;
    for (long long int j=1; j<number; j++)
    {
        if (number%j==0)
          sum+=j;
        if (j==number-1)
            break;
    }
    return sum;
}
int main()
{
    long long int a=0;
    long long int b=0;
    long long int c=0;
    for (long long int i=1; i<10000; i++)
    {
        a= SumOfF(i);
        b= SumOfF(a);
       if (i==b)
        c=i+c;
       if (i==a)
           c-=i;
    }
    std::cout << c;
    return 0;
}
