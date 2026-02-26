#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;

    // We store each blog's "contribution" to Q.
    // The contribution is the list of unique users in that blog,
    // ordered from the end of the blog to the start.
    vector<vector<int>> blogs(n);

    for (int i = 0; i < n; ++i) {
        int l;
        cin >> l;
        vector<int> a(l);
        for (int j = 0; j < l; ++j) {
            cin >> a[j];
        }

        // Only the LAST occurrence of a user in a blog matters.
        // We process from right to left to find the "front" of Q.
        set<int> seen_in_blog;
        for (int j = l - 1; j >= 0; --j) {
            if (seen_in_blog.find(a[j]) == seen_in_blog.end()) {
                blogs[i].push_back(a[j]);
                seen_in_blog.insert(a[j]);
            }
        }
    }

    // Sort the blog contributions lexicographically.
    // The smallest contribution will become the prefix of our final Q.
    sort(blogs.begin(), blogs.end());

    vector<int> final_q;
    set<int> overall_seen;

    // Build the final sequence by taking unique users from the 
    // sorted contributions in order.
    for (const auto& b : blogs) {
        for (int user : b) {
            if (overall_seen.find(user) == overall_seen.end()) {
                final_q.push_back(user);
                overall_seen.insert(user);
            }
        }
    }

    // Output the result
    for (int i = 0; i < final_q.size(); ++i) {
        cout << final_q[i] << (i == final_q.size() - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}