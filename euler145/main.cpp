#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;
int main()
{
    long long int a=0;
    long long int b=0;
    long long int c=0;
    for (int i=11; i<100; i++)
    {
        a=i%10+(i/10%10);
        b=a+i;
        for (int j=1; j>0; j++)
        {
            if (b%2==1)

            b/10;
            if (b==0)
                break;

        }
    }
    cout << c;
    return 0;
}
