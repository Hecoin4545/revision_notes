#include<bits/stdc++.h>
using namespace std;

// 11:46


// 1) Number hashing :- 

// But if we declared the hasing arr here (globally) than we can go upto 10^7
// hasing is like pre storing something and than fetching when required 
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }


//     // precompute

//     // here inside hash instead of 13 we can maximun go to 10^6 if we go beyond
//     // that it will show us an error (for integers)

//     // For boolean we can go upto 10^7 inside int main and gobally we can go 
//     // upto 10^8
//     int hash[13] = {0};
//     for(int i = 0 ; i < n;i++){
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         int number;
//         cin >> number;
//         // fetch
//         cout << hash[number] << endl;
//     }


// }




// 2) character hashing :- 

// int main(){
//     string s;
//     cin >> s;


//     int hash[26] = {0};

//     // if we want to iterate over a string than 
//     for(int i = 0 ; i < s.size();i++){
//         hash[s[i] - 'a']++;
//     }
    

//     int q;    
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         cout << hash[c-'a'] << endl;
//     }
// }


// number hasing through maps 
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     map<int , int>mpp;
//     for(int i = 0;i<n;i++){
//         mpp[arr[i]]++;
//     }

//     // note in map time complexity is log n where as in unordered map time 
//     // compolexity is (for best or average case is 1 whereas for worst case)
//     // it is linear 

//     // how to iterate in a map 
//     for(auto it:mpp){
//         // it.first is the jey and it.second is the values 
//         cout << it.first << "-->" << it.second << endl;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         int number;
//         cin >> number;
//         cout << mpp[number] << endl;
//     }
// }

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    map<int , int>mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;
    }
    int maxelement = 0;
    int maxfreg =0 ;
    int minelemtn =0;
    int minfreg = n;
    for(auto it:mpp){
        if(it.second >maxfreg ){
            maxfreg = it.second;
            maxelement = it.first;
        }
        if(it.second < minfreg ){
            minfreg = it.second;
            minelemtn = it.first;
        }
    }

    cout << maxelement <<endl<< minelemtn;


}
