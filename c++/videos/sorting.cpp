#include<bits/stdc++.h>
using namespace std;

//1. selection sort :-
// select the minimun and swap it 

// void selection_sort(int arr[] , int n){
//     for(int i = 0;i<=n-2;i++){
//         int mini = i;
//         for(int j = i;j<=n-1;j++){
//             if(arr[mini] > arr[j]){
//                 mini =j;
//             }
//         }
//         swap(arr[mini] , arr[i]);
//     }
// }

// int main(){
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i= 0;i<n;i++){
//         cin >> arr[i];
//     }
//     selection_sort(arr , n);
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }


// 2. Bubble Sort 
// Pushes the maximun to the last by adjacent swaps 
// here in the best time complextily it is bigog n where as in worst it is n^2

// void bubble_sort(int arr[] , int n){
//     for(int i = n-1;i>=1;i--){
//         for(int j=0;j<i;j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//             }
//         }
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     bubble_sort(arr , n);
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }


// Here it takes an element and place it in correct order 
// HERE THE TIME COMPLEX IS n^2 (worst case) and for best case it is bo of n
// void insertion_sort(int arr[] , int n){
//     for(int i = 1;i<=n-1;i++){
//         for(int j = i;j>=1;j--){
//             if(arr[j] < arr[j-1]){
//                 swap(arr[j] , arr[j-1]);
//             }
//         }
//     }
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     insertion_sort(arr , n);

//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// 4. Merge Sort :-
// Here it will divide and merge 
// here the time complexity is n log n 
// and space complexity is n 

// int merge(int arr[] , int n , int low , int mid , int high){
//     int left = low ;
//     int right = mid + 1;
//     vector <int> temp;
//     while(left <=mid  && right <= high){
//         if(arr[left] <= arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     while(left <= mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right <= high){
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for(int i = low ; i <= high; i++){
//         arr[i] = temp[i-low];
//     }
// }


// void merge_sort(int arr[] , int n , int low , int high){
//     if (low == high){
//         return;
//     }
//     int mid = (low+high)/2;
//     merge_sort(arr , n , low , mid);
//     merge_sort(arr , n , mid +1 , high);
//     merge(arr , n , low , mid , high);
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     merge_sort(arr , n , 0 , n-1);
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }



// 5. Recursive bubble sort 

// void recursive_bubble_sort(int arr[] , int n){
//     if(n==1) return;
//     for(int j = 0 ; j <= n-1 ; j++){
//         if(arr[j] > arr[j+1]){
//             swap(arr[j] , arr[j+1]);
//         }
//     }
//     bubble_sort(arr , n-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     recursive_bubble_sort(arr , n);

//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// 6. Recursive Insertion sort :- 

// void recursive_insertion_sort(int arr[] , int i , int n){
//     if(i == n) return ;
//     for(int j=i; j >= 1 ; j--){
//         if(arr[j] < arr[j-1]){
//             swap(arr[j] ,arr[j-1]);
//         }
//     }
//     recursive_insertion_sort(arr , i+1 , n);
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     recursive_insertion_sort(arr,1 , n);

//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// 7. Quick Sort algorithm :- 

// pick up any one elemnt by your choise and place it in its correct 
// place in the sorted array 

// than smaller on the left and larger on the right 

// here the time complexity is nlogn
// space complexity is bigo of 1  

// int sort_it(int arr[] , int low , int high){
//     int pivot = arr[low];
//     int i=  low;
//     int j = high;
//     while(i < j){
//         while(arr[i] <= pivot && i <=high-1){
//             i++;
//         }
//         while(arr[j]> pivot && j >= low+1){
//             j--;
//         }
//         if(i<j) swap(arr[i] , arr[j]);
//     }
//     swap(arr[j] , arr[low]);
//     return j;
// }

// void quick_sort(int arr[] , int low , int high){
//     if(low < high){
//         int pivot = sort_it(arr , low , high);
//         quick_sort(arr , low , pivot -1);
//         quick_sort(arr , pivot+1 , high);
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     quick_sort(arr , 0 , n-1);
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
