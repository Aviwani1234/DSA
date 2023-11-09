#include <bits/stdc++.h>
using namespace std;

void printCounting(int n)
{
   if (n == 0)
      return;

   cout << n << endl; // head recursion

   printCounting(n - 1);

   // cout << n << endl;       //tail recusion
}

int main()
{

   int n;
   cin >> n;
   cout << endl;

   printCounting(n);

   return 0;
}