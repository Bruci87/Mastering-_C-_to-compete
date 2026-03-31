/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> array = {1, 2, 3, 5, 7, 9};
    int n=6, x=5;
    auto k = lower_bound(array.begin(), array.end(), x) - array.begin();
    if(k  < n && array[k] ==x){
        cout<<"certo";
    }
    
}
