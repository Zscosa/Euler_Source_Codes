#include <iostream>
using namespace std;
int repeat(int lk)
{
    int b=0;
   for ( int j=lk; j>=1; j-=1)
   { for (int i=1; i<=j; i++)
    {
        b=b+i;    //(4+3+2+1)+(3+2+1)+(2+1)+1
    }
   }
   return b;
}
int main() {
    int w;
    int k;
    int p=0;
    int o=0;
    cin >>w >>k;
    for( int g=w; g>=1; g-=k)  //(4+3+2+1)+(3+2+1)+(2+1)+1+(3+2+1)+(2+1)+1+(2+1)+1+1+(2+1)+1+(3+2+1)+(2+1)+1+(2+1)+1+

    {
    for (int d=g; d>=1; d--)  //(4+3+2+1)+(3+2+1)+(2+1)+1+(3+2+1)+(2+1)+1+(2+1)+1+1
    {
        p=repeat(d);
        o=o+p;
    }
}
    cout << o;
    return 0;
}
