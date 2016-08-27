#include <QCoreApplication>
#include <iostream>
#include <string>
#include <numeric>
#include <math.h>
using namespace std;


int main ()
{

    long long int c=2;
    int maxsumofprime;

   cin >> maxsumofprime;

     for (long long int i=2; i>1; i++)
      {  for (long long int j=2; j<i; j++)
        {
             if (i>maxsumofprime)
                 break;
            if (i % j == 0)
                break;
            else if (i == j+1)
               {
                if (i>maxsumofprime)
                    break;
                   c=c+i;
                   cout << c << endl;
                }

        }

}
    return 0;
}

