/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
 using namespace std;
 int main(){
     int temp;
     vector<long long > array(6);
     array[0]=0;
     array[1]=1;
     array[2]=3;
     array[3]=0;
     array[4]=7;
     array[5]=4;
     for(int i =0; i< 6; i++){
         for(int j=0; j< 5; j++){
            if(array[j] > array[j+1]){
             temp = array[j+1];
             array[j+1] = array[j];
             array[j]=temp;
            }
        }
    }
    for(int i=0; i<6; i++){
        cout<<"\n "<<array[i];
    }
 }