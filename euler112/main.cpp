#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

long long int digits(long long int number)
{long long int a=1;
long long int b=0;
    b=number;
    for (long long int length=1; length>0; length*=10)
    {   a=length;
        if (b<10)
            break;
        b/=10;
    }
   return a;
}


bool bouncy(long long int number1)
{   int last_digit=0;
    int last_digit1=0;
    bool up=true;
    bool down=true;
    bool bouncy_number=false;
    long long int ttt=number1;
    long long int xxx=number1;
    if (ttt<100)
    {bool bouncy_number=false;
        return bouncy_number;}
    for (long long int qwe=1; qwe>0; qwe++)
     {
        last_digit=ttt%10;
        ttt/=10;
        last_digit1=ttt%10;
        if (last_digit1>last_digit)
        {
            up=false;
            break;
        }
        else if (ttt<10)
        {
            up=true;
            break;
        }
        last_digit=last_digit1;
    }

    for (long long int qwe=1; qwe>0; qwe++)
     {
        last_digit=xxx%10;
        xxx/=10;
        last_digit1=xxx%10;
        if (last_digit1<last_digit)
        {
            down=false;
            break;
        }
        else if (ttt<10)
        {
            down=true;
            break;
        }
        last_digit=last_digit1;
    }

    if ((up==false)&&(down==false))
        bouncy_number=true;
    return bouncy_number;
}

int main()
{
    long int bouncynumber=0;
    long int not_bouncynumber=0;
    long double qqq=0;
   for (long int stt=1; stt>0; stt++)
   {   cout << stt << endl;
       if ((bouncy(stt))==true)
               bouncynumber++;
      else if ((bouncy(stt))==false)
               not_bouncynumber++;
      qqq=bouncynumber/stt;
       if (qqq>=0.99)
              break;

   }

    return 0;
}
