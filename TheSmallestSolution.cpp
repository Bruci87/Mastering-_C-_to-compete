#include <bits/stdc++.h>
using namespace std;

bool f(int n) {
    return n * n >= 30;
}

int main() {
    int pos = 0; 

    for (int salto = 1 << 10; salto >= 1; salto /= 2) {
        
        if (!f(pos + salto)) {
            pos += salto;
        }
    }

    int j = pos + 1;

    cout << "Menor valor do j tal que f(j) == true: " << j << endl;

    return 0;
}