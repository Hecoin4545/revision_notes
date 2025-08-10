#include <bits/stdc++.h>
using namespace std;

// void ExactDigits(int n){
//     while (n > 0)
//     {
//         int a = n % 10;
//         cout << a << endl;
//         n = n / 10;
//     }
// }

// void CountDigits(int n){
//     int counting = 0;
//     while(n>0){
//         counting = counting +1;
//         n = n / 10 ;
//     }
//     cout << counting;
// }


// void ReverseNumber(int n){
//     int revNum = 0;
//     while(n>0){
//         int lastdigit = n % 10;
//         revNum = (revNum * 10) + lastdigit;
//         n = n / 10;
//     }
//     cout << revNum;
// }

// void Pallindrome(int n){
//     int newN = n;
//     int revNum = 0;
//     while(n>0){
//         int lastdigit = n % 10;
//         revNum = (revNum * 10) + lastdigit;
//         n = n / 10;
//     }
//     if(newN == revNum){
//         cout << "True";
//     }else{
//         cout << "False";
//     }
// }

// void ArmstrongNum(int n){
//     int arm = 0;
//     int dupn = n;
//     while(n>0){
//         int lastdigit = n % 10;
//         arm = arm + (lastdigit*lastdigit*lastdigit);
//         n = n /10;
//     }
//     if(arm == dupn){
//         cout << "True";
//     }else{
//         cout << "False";
//     }
// }

// void DivisorOfN(int n){
//     for(int i = 1 ; i <=n ; i++){
//         if (n%i == 0){
//             cout << i << endl;
//         }
//     }
// }


// void Primes(int n){
//     int count = 0;
//     for(int i = 1 ; i <= n ; i++){
//         if(n % i == 0){
//             count = count + 1;
//         }
//     }
//     if( count == 2){
//         cout << "prime Number";
//     }else{
//         cout << "not a prime number";
//     }
// }

// void gcd(int n , int p){
//     int gcd= 0 ;
//     for(int i = 1; i <=min(n, p) ; i++){
//         if(n % i == 0 & p %i == 0){
//             gcd = i;
//         }
//     }
//     cout << gcd;
// }

// Euclidean Algorithym 
// gcd(a,b) == gcd(a-b,b)
// here a > b always 


int main(){
    int n , p;
    cin >> n >> p;
    // ExactDigits(n);
    // CountDigits(n);
    // ReverseNumber(n);
    // Pallindrome(n);
    // ArmstrongNum(n);
    // DivisorOfN(n);
    // Primes(n);
    // gcd(n , p);
}