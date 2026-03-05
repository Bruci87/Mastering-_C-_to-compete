 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     ios::sync_with_stdio(0);
     cin.tie(0); 
     #ifndef online_judge
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w",stdout);
     #endif
     long long soma = 0;
     cin >> n;

     int n;
     for(int i=0; i< n; i++){
         int x;
         cin >>x;
         soma +=x;
     }
     cout<<soma<<"\n";
     return 0;

 }