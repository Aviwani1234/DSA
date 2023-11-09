#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int rem;
   for (int i = 2; i < n; i++)
   {
      rem = n % i;
      if (rem == 0)
      {
         cout << "not prime";
         break;
      }
   }

   if (rem != 0)
   {
      cout << "prime num" << endl;
   }

   return 0;
}