// stack over flow happens when a function calls itself(resursion) infinitely 

#include<bits/stdc++.h>
using namespace std;

// void nameR(int cnt , string n){
//     if(cnt == 5){
//         return;
//     }
//     cout << n << endl;
//     nameR(cnt+1 , n);
// }

// void numPrint(int cnt , int n){
//     if(cnt > n){
//         return;
//     }
//     cout << cnt << endl;
//     numPrint(cnt +1 , n);
// }

// void reverNum(int cnt , int n){
//     if(cnt <=0){
//         return ;
//     }
//     cout << cnt << endl;
//     reverNum(cnt -1 , n);
// }

// void sum(int cnt , int n , int s){
//     if(cnt >= n){
//         cout << s;
//         return ;
//     }
//     sum(cnt+1 , n -1 ,s+n);
// }

// void backtra(int cnt , int n){
//     if (cnt <= 0){
//         return;
//     }
//     backtra(cnt-1 , n);
//     cout << cnt << endl;
// }

// int sum(int n){
//     if( n==0){
//         return 0;
//     }
//     return n + sum(n-1);
// }

// int factorial(int n){
//     if ( n== 0){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// void r(int i , int arr[] , int n){
//     if(i >= n/2){
//         return;
//     }
//     swap(arr[i] , arr[n-i-1]);
//     r(i + 1 , arr , n);
// }

// void pali(int i , int n , string a ,string dup){
//     if(i >= n/2){
//         return ;
//     }
//     swap(a[i] , a[n-i-1]);
//     if(dup == a){
//         cout << "pali";
//     }else{
//         cout << "not pali";
//     }
//     pali(i+1 , n , a , dup);
// }

int fibo(int n){
    if(n <=1){
        return n;
    }  
    return fibo(n-1) + fibo(n-2);
}

int main(){
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i = 0 ; i < n ; i++) cin >> arr[i];
    // r(0 , arr , n);
    // for(int i = 0 ; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    // int cnt = n;
    // int s = 0;
    // string n;
    // cin >> n;
    // nameR(cnt , n);
    // numPrint(cnt , n);
    // reverNum(cnt , n);
    // sum(cnt , n ,s);
    // backtra(cnt , n);
    // cout << sum(n);
    // cout << factorial(n);
    // string a;
    // cin >> a;
    // string dup = a;
    // int n =  a.length();
    // pali(0 , n , a , dup);
    // return 0;
    int n;
    cin >> n;
    cout << fibo(n);
}