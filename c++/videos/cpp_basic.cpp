#include<bits/stdc++.h>
using namespace std;

// used for math function 
// #include<math.h>

// used for using string 
// #include<string>



// basic of functions

// void printName(string a){
//     cout << a;
// }

// void sums(int a,int b){
//     cout << a+b;
// }

// if we attach & to it than it will permanently 
// change the string that is present in the main function 
// void changePerman(string &s){
//     pass;
// }

void doSomething(int arr[] , int n){
    arr[0] += 100;
    cout << "value " << arr[0] <<endl;
}

int main(){
    // how to print anything 

    // cout << "het shah" << "\n";
    // cout << "het";



    // how to take input from the user 

    // int x;
    // cin >> x;
    // cout << x << endl << "het shah";



    // different type of datatype 

    // int x = 10; // store num
    // long x = 15; // store long num
    // long long x = 12; // store very long num
    // float x = 5.6; // stores decimal
    // double x = 5



    // string str;
    // getline(cin , str); // return the entire first line 
    // cout << str;



    // char ch = 'h';  // used to store character 



    // basic if else statement 

    // int x;
    // cin >> x;
    // if (x >= 18){
    //     cout << "you are an adult";
    // }
    // else{
    //     cout << "you are not an adult";
    // }


    // basic switch statement

    // int day;
    // cin >> day;
    // switch(day){
    //     case 1:
    //         cout << "Monday" ;
    //         break;
    //     case 2:
    //         cout << "tuesday";
    //         break;
    //     default:
    //         cout << "rest day";
    // }



    // array is used when entire data is of similar type 

    // One d array 
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // arr[3] += 10;
    // cout << arr[3];

    // two d array 
    // i will have 3 boxes and eacch box hai 5 element 

    // int arr[3][5];
    // arr[1][3] = 10;
    // cout << arr[1][3];



    // string basic 

    // string s = "het";
    // int len= s.size();
    // cout << s[0] << len;



    // for loops 
    // for (int i = 1; i <= 10 ; i = i + 1 ){
    //     cout << i << endl;
    // }



    // while loop
    // int i = 1;
    // while (i <= 10)
    // {
    //     cout << i << endl;
    //     i = i +1 ;
    // }
    



    // do while loop 
    // int i = 2;
    // do {
    //     cout << "het" << i << endl;
    //     i = i + 1;
    // }while(i <= 1);


    // string s;
    // cin >> s;
    // printName(s);


    // int a;
    // int b;
    // cin >> a >> b;
    // sums(a ,b);
    // return 0;

    // int arr[5];
    // for(int i = 0; i < 5 ; i = i+ 1){
    //     cin >> arr[i];
    // }
    // for(int i = 0; i < 5 ; i = i+ 1){
    //     cout << arr[i] << endl;
    // }
    
    int n = 5;
    int arr[n];
    for(int i=0;i<n;i= i+1){
        cin >> arr[i];
    }

    doSomething(arr , n);
    
    
}