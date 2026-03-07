#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();  // ignore the newline after t

    for (int tc = 1; tc <= t; tc++) {
        string line;
        getline(cin, line);  // read full line of numbers

        stringstream ss(line);
        vector<int> arr;
        int x;

        while (ss >> x) {
            arr.push_back(x);
        }

        // Output
        cout << "Testcase " << tc << ": ";
        for (int v : arr) cout << v << " ";
        cout << "\n";
    }
}

//  #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tc = 1;  // testcase counter
//     while (true) {
//         int n;
//         cin >> n;              // read array size
//         if (n == 0) break;     // stop if n = 0

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];     // read n numbers
//         }

//         cout << "Testcase " << tc << ": ";
//         for (auto &v : arr) cout << v << " ";
//         cout << "\n";

//         tc++;
//     }

//     return 0;
// }
