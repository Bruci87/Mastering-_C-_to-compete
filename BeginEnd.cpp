/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> array = {1, 2, 4, 4, 4, 6, 8};
    int n=6, x=5;
    //auto i = lower_bound(array, array+n, x);
   // auto j = upper_bound(array, array+n, x);
    
    //cout<< i - j<<"\n";

   auto r = equal_range(array.begin(), array.end(), 4);
   cout<<r.second-r.first;
    
    
}
