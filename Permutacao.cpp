
#include <bits/stdc++.h>
using namespace std;
int n = 3;
vector<int> permutation;
vector<bool> chosen(3);

void procura(){
    if(permutation.size()==n){
        cout<< "nova permutacao: " << "\n";
        for(auto x: permutation){
            cout << x << "\n";   
        }
    } else{
        for(int i =0; i < n; i++){
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            procura();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main(){
    
    procura();
    return 0;
}
