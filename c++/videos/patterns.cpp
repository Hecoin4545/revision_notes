#include<bits/stdc++.h>
using namespace std;

// void Pattern1(int n){
//     for(int i = 1; i <=n ; i++){
//         for (int j = 1 ; j <= n ; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void Pattern2(int n){
//     for(int i = 1; i <= n;i++){
//         for (int j =1 ; j <=i;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void Pattern3(int n){
//     for(int i = 1;i<=n;i++){
//         for (int j = 1;j<=i;j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void Pattern4(int n){
//     for(int i = 1; i <= n;i++){
//         for(int j = 1;j<=i;j++){
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// void Pattern5(int n){
//     for(int i = n; i >= 1;i--){
//         for(int j = 1;j<=i;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void Pattern6(int n){
//     for(int i = n; i >= 1;i--){
//         for(int j = 1;j<=i;j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void Pattern7(int n){
//     for(int i = 1;i <=n;i++){
//         // spaces 
//         for(int k = n-i; k >= 1 ; k--){
//             cout << " ";
//         }
//         // stars
//         for(int j = 1; j <=(2*i)-1;j++){
//                 cout << "*";
//         }
//         // spaces 
//         for(int k = n-i; k >= 1 ; k--){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void Pattern8(int n){
//     for(int i = 0;i <n;i++){
//         // spaces 
//         for(int k = 0; k < i ; k++){
//             cout << " ";
//         }
        
//         // stars
//         for(int j = 0; j <((n-i)*2)-1;j++){
//                 cout << "*";
//         }

//         // spaces 
//         for(int k = 0; k < i ; k++){
//             cout << " ";
//         }
        
//         cout << endl;
//     }
// }

// void Pattern9(int n){
//     for(int i = 1;i <=n;i++){
//         // spaces 
//         for(int k = n-i; k >= 1 ; k--){
//             cout << " ";
//         }
//         // stars
//         for(int j = 1; j <=(2*i)-1;j++){
//                 cout << "*";
//         }
//         // spaces 
//         for(int k = n-i; k >= 1 ; k--){
//             cout << " ";
//         }
//         cout << endl;
//     }    

//     for(int i = 0;i <n;i++){
//         // spaces 
//         for(int k = 0; k < i ; k++){
//             cout << " ";
//         }
        
//         // stars
//         for(int j = 0; j <((n-i)*2)-1;j++){
//                 cout << "*";
//         }

//         // spaces 
//         for(int k = 0; k < i ; k++){
//             cout << " ";
//         }
        
//         cout << endl;
//     }

// }

// void Pattern10(int n){
//     for(int i = 1 ; i <=n;i++){
//         for(int j = 1; j <= i;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
    
//     for(int k = 1;k<n;k++){
//         for(int q = n-k-1; q>=1;q--){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void Pattern11(int n){
//     int count = 1;
//     for(int i = 1; i <=n;i++){
//         if(i%2 != 0){
//             count = 1;
//         }else{
//             count = 0;
//         }
//         for(int j = 1;j<=i;j++){
//             if(count % 2 != 0){
//                 cout << 1;
//                 count = count + 1;
//             }else{
//                 cout << 0;
//                 count = count + 1;
//             }
//         }
//         cout << endl;
//     }
// }

// void Pattern12(int n){
//     for(int i = 1;i <=n;i++){
//         int count=1;
//         int counts = i;
//         for(int j = 1; j <= i ; j++){
//             cout << count;
//             count = count + 1;
//         }

//         for(int q= ((n-i)*2); q>=1;q--){
//             cout << " ";
//         }

//         for(int k = 1; k <= i ; k++){
//             cout << counts;
//             counts = counts - 1;
//         }
//         cout << endl;
//     }
// }

// void Pattern13(int n){
//     int count = 1;
//     for(int i = 1; i <=n;i++){
//         for(int j = 1; j <=i;j++){
//             cout << count <<" ";
//             count = count +1 ;
//         }
//         cout << endl;
//     }
// }

// void Pattern14(int n){
//     for(int i = 1; i <=n;i++){
//         for(char j = 'A';j<='A' + i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void Pattern15(int n){
//     for(int i = 1 ; i <= n; i++){
//         for (char j = 'A';j< 'A' + (n-i+1);j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void Pattern16(int n){
//     char a = 'A';
//     for(int i = 1;i <=n;i++){
//         for(int j= 1;j<=i;j++){
//             cout << a;
//         }
//         a = a + 1;
//         cout << endl;
//     }
// }

// void Pattern17(int n){
//     for(int i = 1; i<=n;i++){
//         for(int j = n-i; j>=1;j--){
//             cout << " ";
//         }

//         for(char k = 'A';k< 'A' + i;k++ ){
//             cout << k;
//         }

//         for(char q = 'A'+i-2 ; q >= 'A';q--){
//             cout << q;
//         }
//         cout << endl;
//     }
// }

// void Pattern18(int n){
//     for(int i = 1; i <=n;i++){
//         char al = 'A' + (n-1);
//         for(char j = al-(i-1);j <=al; j++  ){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void Pattern19(int n){
//     for(int j = 1; j <= n ; j++){
//         cout << "*";
//     }    
//     cout << endl;
//     for(int i = 3 ; i <=n;i++){
//         cout << "*";
//         for(int k = 1; k <= n-2; k++){
//             cout << " ";
//         }
//         cout << "*" << endl;;

//     }
//     for(int j = 1; j <= n ; j++){
//         cout << "*";
//     }        
//     cout << endl;

// }

// void Pattern20(int n){
//     for(int i = 0; i < 2*n -1 ; i++){
//         for(int j = 0 ; j < 2* n -1 ; j++){
//             int top = i;
//             int left = j;
//             int bottom = (2*n-2) - i;
//             int right = (2*n-2) - j;
//             cout << n - min(min(top , bottom) , min(left , right));
//         }
//         cout << endl;
//     }
// }

int main(){
    int n;
    cin >> n;
    // Pattern1(n);
    // Pattern2(n);
    // Pattern3(n);
    // Pattern4(n);
    // Pattern5(n);
    // Pattern6(n);
    // Pattern7(n);
    // Pattern8(n);
    // Pattern9(n);
    // Pattern10(n);
    // Pattern11(n);
    // Pattern12(n);
    // Pattern13(n);
    // Pattern14(n);
    // Pattern15(n);
    // Pattern16(n);
    // Pattern17(n);
    // Pattern18(n);
    // Pattern19(n);
    // Pattern20(n);

}