#include <QCoreApplication>
#include <iostream>
#include <string>
#include <numeric>
#include <math.h>
using namespace std;


int main ()
{
    int a;
    int b=1;

   cin >> a;
   cout << "2 1 " <<endl;
     for (int i=2; i>1; i++)
        for (int j=2; j<i; j++)
        {
            if (i % j == 0)
                break;
            else if (i == j+1)
                cout << i << " "<<b++ << endl;
            if (b==a)
                break;

        }
    return 0;
}
