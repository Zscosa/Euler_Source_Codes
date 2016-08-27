#include <iostream>
#include <numeric>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

long long int result(int number, int power)
{
    if (power==0)
    {
        return 1;
    }

   long long int one=number;
   long long int two=1;
    for (int a=1; a<power;a++)
    {
        one=one*number;
        if(one>100000000000)
        {
            one%=100000000000;
        }
        two=one;
    }
    return (two);
}
int main()
{

     int random=11;
     long long int h=0;
     long long int j=0;
     for (int b=1; b<991;b++)
     {
         h=result(random,random);
         j+=h;
         random++;
     }
     long long int first1=1;
       long long int second1=2;
       long long int third1=0;
       long long int fourth1=0;

      for (int a; a < 5; a++)
      {
            third1= pow (first1,first1) + pow (second1,second1);
            first1 +=2;
        second1 +=2;
        fourth1=third1+fourth1;
      }
    cout << (j+fourth1)%10000000000;
    return 0;
}
