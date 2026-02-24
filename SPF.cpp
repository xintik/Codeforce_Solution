#include <bits/stdc++.h>
using namespace std;

const int N = 1000000;
int spf[N + 1];

void buildSPF() {
    for (int i = 1; i <= N; i++)
        spf[i] = i;

    for (int i = 2; i * i <= N; i++) {
        if (spf[i] == i) {              // i is prime
            for (int j = i * i; j <= N; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

vector < int >  printPrimeFactors(int x) {
    vector < int > vec;
    while (x != 1) {
        vec.push_back(spf[x]);
        cout << spf[x] << " ";
        x /= spf[x];
    }
    return vec;
}

int main() {
    buildSPF();

   int t;
   cin >> t;
   while(t--)
   {
    int n; 
    cin >> n;
    set < int > st;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
   }
   if(st.find(1)) cout << "1" << " ";
   else cout << "-1" << " ";
    for (int i = 2; i <= n; i++) {
       
        if (i != 1)
           vector < int > ans =  printPrimeFactors(i);
        
    }

    return 0;
}
