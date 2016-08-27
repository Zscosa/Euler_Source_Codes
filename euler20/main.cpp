#include <iostream>
#include <string>

using namespace std;

long long int factorial (long long int number)
{
    long long int result=number;
    for (long long int i=1; i<number; i++)
    {
       result*=i ;
    }
    return result;
}

int main ()
{
    cout << factorial(100);
    return 0;
}
