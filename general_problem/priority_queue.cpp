
// compare function;
#include <bits/stdc++.h>
using namespace std;
struct compare
{
  bool operator()(const vector < int > &a , const vector < int > &b) const{
    if(a[0] != b[0]) return a[0] < b[0] ; //large first;
    if(a[1] != b[1]) return a[1] < b[1] ; //large first;
    return a[2] > b[2]; //smallest first
  }
};
int main()
{
   priority_queue < vector < int > , vector < vector < int  > > , compare  > pq;
   int n;
   cin >> n;
   for(int i = 0; i < n; i++)
   {
    vector < int > temp(3);
    cin >> temp[0] >> temp[1] >> temp[2];
    pq.push(temp);
   }

   while(!pq.empty())
   {
    auto it = pq.top();
    cout << it[0] << " " << it[1] << " "<< it[2] <<"\n";
    pq.pop();

   }
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     priority_queue < int  , vector < int > , greater < int > > pq;
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         pq.push(x);
//     }

//     while(!pq.empty())
//     {
//        cout << pq.top() << " ";
//        pq.pop();
//     }
//     cout << "\n" ;
// }

// priority queue accroding to pair < int , int > 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     priority_queue < pair < int , int > > pq;
//     for(int i = 0; i < n; i++)
//     {
//         int x , y;
//         cin >> x >> y;
//         pq.push({x , y});
//     }
//     while(!pq.empty())
//     {
//         cout << pq.top().first << " " << pq.top().second << "\n";
//         pq.pop();
//     }
   
// }

// pritory queue acroding to reverce pair;
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     priority_queue < pair < int , int >  , vector < pair < int , int >> , greater < pair < int , int > > >  pq;
//     for(int i = 0; i < n; i++)
//     {
//         int x , y;
//         cin >> x >> y;
//         pq.push({x , y});
//     }
//     while(!pq.empty())
//     {
//         cout << pq.top().first << " " << pq.top().second << "\n";
//         pq.pop();
//     }
   
// }

// vector < vector < int > > vec; lets make it priority que;
// priority_queue alway consider the first one;

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     priority_queue< vector < int >  > pq;
//     for(int i = 0; i < n; i++)
//     {
       
//        vector < int > temp(3) ;
//        cin >> temp[0] >> temp[1] >> temp[2];
//        pq.push(temp);
//     }
//     while(!pq.empty())
//     {
//         auto &it = pq.top();
//         cout << it[0] << " " << it[1] << " " << it[2] << endl;
//         pq.pop();
//     }
// }

// Now reverce it
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     priority_queue< vector < int >  , vector < vector < int > > , greater < vector < int > > > pq;
//     for(int i = 0; i < n; i++)
//     {
       
//        vector < int > temp(3) ;
//        cin >> temp[0] >> temp[1] >> temp[2];
//        pq.push(temp);
//     }
//     while(!pq.empty())
//     {
//         auto &it = pq.top();
//         cout << it[0] << " " << it[1] << " " << it[2] << endl;
//         pq.pop();
//     }
// }

// more use of compare function;
// #include<bits/stdc++.h>
// using namespace std;
// struct compare {
//     bool operator() (const int &a , const int &b) const{
//      // return a > b;  // acending order;  smaller first;
//       return b > a; //decending order;  larger first
//     }
// };

// int main()
// {
//     priority_queue < int , vector < int > , compare> pq;
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++)
//     {
//         int x ;
//         cin >> x;
//         pq.push(x);
//     }
//     while(!pq.empty())
//     {
//         cout << pq.top() << " ";
//         pq.pop();
//     }
//     cout << "\n";
// }
