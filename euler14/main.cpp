#include <iostream>
#include <string>
#include <QCoreApplication>

long long int collatz(long long int startno)
{
  long long int chainno=0;
  long long int b= startno;
  for (long long int i=1; i>0; i++)
  {
      if(b%2==0)
          b= b/2;
      else if (b%2==1)
          b=3*b+1;
      chainno++;
      if (b==1)
          break;

  }
  if (chainno==524)
      std::cout << startno << std::endl;
  return chainno;
}

int main()
{
    long long int z=0;
    long long int x=0;
  for (long long int a=2; a<1000000; a++)
  {
    z = collatz(a);
    if (z>=x)
    x=z;

  }
  std::cout<< x;
    return 0;
}
