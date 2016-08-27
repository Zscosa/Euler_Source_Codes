#include <QCoreApplication>
#include <iostream>

using namespace std;

int SumOfF(long long int number)
{  long long int sum=0;
    for (long long int j=1; j<number; j++)
    {
        if (number%j==0)
          sum+=j;

    }
    return sum;
}
int main()
{
   long long int a;
   long long int count=1;
   long long int count1=1;
   for (long long int i=12495; i<1000000; i++)
   {
       a= SumOfF(i);
     for (long long int j=1; j>0; j++)
     {
         count++;
       a = SumOfF(a);
       if ((a>1000000)||(a==i)||(count>500))
           break;
     }

     if ((count>count1)&&(count<500))
       {count1=count;
         cout << i << "  number of number in chains:" << count << endl;}
     count=1;

   }

    return 0;
}
