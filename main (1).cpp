/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int n;
long long total_impares = 0;
int soma_prex = 0;
long long contadores [2]= {1,0};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        int bit;
        cin>>bit;
        soma_prex = (soma_prex + bit)%2;
        total_impares = contadores[1-soma_prex];
        contadores[soma_prex]++;
    }
    cout<<total_impares;

    return 0;
}