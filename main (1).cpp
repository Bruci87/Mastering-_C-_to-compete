// /******************************************************************************

// Welcome to GDB Online.
//   GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
//   C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
//   Code, Compile, Run and Debug online from anywhere in world.

// *******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    int x = 5328;
    cout<< __builtin_clz(x);

    int x = -4272837224;
     unsigned int y = x;
    cout<<x<<"\n";
    cout<<y<<"\n";
    int x =40;
    for(int i=31; i>=0; i--){
        if(x&(1<<i)){
          cout<<"1"; 
        }else{
          cout<<"0";  
        }
        
    }
    int x =10;
    int i = 2;
    cout<<(x|(1<<i)); 
    
    int x =10;
    int i = 2;
    cout<<(x& ~(1<<i)); 
    
     int x =10;
    int k = 2;
    cout<<(x ^(1<<k)); 
     int x =14;
    int k = 2;
    cout<<(x& (x-1)); 
     int x =11;
    int k = 2;
    cout<<(x& (-x));
    int x =8;
    int k = 2;
    cout<<(x& (-x));
    int x =7;
    int k = 2;
    cout<<(x| (x-1));
          
          
    
}