#include<bits/stdc++.h>
using namespace std;

// basis Of array :-
// 1. It contains similar elements of any datatype

// if we define arrary globally then it will store 0 automatically 
// whereas if we declare it inside main than i will store some 
// garbage value 

// the maximun size we can define is 10^6 inside int main 
// where gobally we can define it till 10^7

// 1. largest element in an array :- 

// Method 01:- optimum way

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     int max = 0;
//     for(int i = 0;i<n;i++){
//         if(arr[i] > max){
//             max=arr[i];
//         }
//     }
//     cout << max ;
// }


// Method 02:- brute force way

// void sort(int arr[] , int n){
//     for(int i = 0;i<n-2;i++){
//         int mini = arr[i];
//         for(int j=i;j<n-1;j++){
//             if(arr[j] <mini){
//                 mini = arr[j];
//             }
//         }
//         swap(arr[i] , mini);
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     sort(arr , n);
//     cout << arr[n-1];
// }




// 2. second largest element in an array without sorting :-

// Method 01 :- Better way 

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     int max = 0;
//     int second_max = 0;
//     for(int i =0;i<n;i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     for(int i =0;i<n;i++){
//         if(arr[i] <  max && arr[i] > second_max){
//             second_max= arr[i];
//         }
//     }
//     cout << second_max;
// }


// Method 02 :- optimal way (good soch)

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     int largest = arr[0];
//     int second_largest = -1;
//     for(int i = 0;i<n;i++){
//         if(arr[i] > largest){
//             second_largest = largest;
//             largest = arr[i];
//         }
//         if(arr[i] < largest && arr[i] > second_largest){
//             second_largest = arr[i];
//         }
//     }
//     cout << second_largest;
// }




// 3. Check if the array is sorted or not  :-

// bool check_sort(int arr[] , int n , int i){
//     if (i == n-1) return true;
//     int mini = arr[i];
//     for(int j = i;j<n;j++){
//         if(arr[j] < mini){
//             return false;
//         }
//     }
//     check_sort(arr , n , i+1);
// }

// int main(){
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << check_sort(arr , n , 0);
// }


// 4. remove the duplicated from an array :- 

// Method 01:- brute force

// void remove_duplicates(int arr[] , int n ){
//     set <int> st;
//     for(int i = 0;i<n;i++){
//         st.insert(arr[i]);
//     }
//     int index = 0;
//     for(auto it:st){
//         arr[index] = it;
//         index++;
//     }
//     cout << index;
// }

// int main(){
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     remove_duplicates(arr , n );
// }


// Method 02 :- Optimal approach

// int remove_duplicates(int arr[] , int n){
//     int i = 0;
//     for(int j = 1; j<n;j++){
//         if(arr[j] != arr[i]){
//             arr[i+1] = arr[j];
//             i++;
//         }
//     }
//     return (i+1);
// }

// int main(){
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << remove_duplicates(arr , n );
// }




// 5. rotate one element from an array 

// Method 01 :- 
// void rotate_element(int arr[] , int n){
//     for(int i = 0;i<n-1;i++){
//         swap(arr[i] , arr[i+1]);
//     }
// }

// int main(){
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     rotate_element(arr , n );
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }



// Rotate element by d times :-

// Method 01 :- brute force 

// void rotate_element_by_d(int arr[] , int n , int d){
//     d = d%n;
//     int temp[d];
//     for(int i = 0;i<d;i++){
//         temp[i] = arr[i];
//     }
//     for(int i = n-d-1;i<n;i++){
//         arr[i-(n-d-1)] = arr[i];
//     }
//     for(int i = n-d;i<n;i++){
//         arr[i] = temp[i-(n-d)];
//     }
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int d;
//     cin >> d;

//     rotate_element_by_d( arr , n , d);
    
//     for(int i =0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// Method 02 :- optimal way 
// void reverse(int arr[], int ini , int fin){
//     while(ini<=fin){
//         swap(arr[ini] , arr[fin]);
//         ini++;
//         fin--;
//     }
// }

// void rotate_element_by_d(int arr[] , int n , int d){
//     d = d%n;
//     d = d-1;
//     reverse(arr ,0 , n-d-1);
//     reverse(arr ,n-d , n -1);
//     reverse(arr ,0 , n-1 );
// }



// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int d;
//     cin >> d;

//     rotate_element_by_d( arr , n , d);
    
//     for(int i =0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// move zero to the end 

// Method 01 :- brute force

// void swap_zero_end(int arr[] , int n){
//     vector <int> sp;
//     for(int i = 0;i<n;i++){
//         if(arr[i] != 0){
//             sp.push_back(arr[i]);
//         }
//     }
//     for(int i = 0 ; i<sp.size();i++){
//         arr[i] = sp[i];
//     }
//     for(int i =sp.size();i<n;i++){
//         arr[i] = 0;
//     }
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     swap_zero_end( arr , n);
    
//     for(int i =0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// Method 02:- optimal 

// void swap_zero_end(int arr[] , int n){
//     int j = -1;
//     for(int i = 0;i<n;i++){
//         if(arr[i] == 0){
//             j = i;
//             break;
//         }
//     }
//     for(int i = j+1;i<n;i++){
//         if(arr[i]!= 0){
//             swap(arr[i] ,arr[j]);
//             j++;
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

//     swap_zero_end( arr , n);
    
//     for(int i =0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// Linear Search :- 
// int linear_search(int arr[] , int n , int d){
//     for(int i = 0;i<n;i++){
//         if(arr[i] == d){
//             return i;
//             break;
//         }
//     }
//     return -1;

// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int d;
//     cin >> d;
//     cout << linear_search( arr , n , d);

//     return 0;
// }



// Find the union of two sorted array 

// Method 01 :- brute force 
// void unions(int arr1[] , int arr2[] , int n,int p){
//     set <int> st;
//     for(int i =0;i<n;i++){
//         st.insert(arr1[i]);
//     }
//     for(int i =0;i<p;i++){
//         st.insert(arr2[i]);
//     }
//     for(auto it:st){
//         cout << it << " ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int p;
//     cin >>p;
//     int arr1[n];
//     int arr2[p];
//     for(int i = 0;i<n;i++){
//         cin >> arr1[i];
//     }
//     for(int i = 0;i<p;i++){
//         cin >> arr2[i];
//     }
//     unions(arr1 ,arr2, n,p );
// }


// Method 02 :- optimal solution 

// void unions(int arr1[] , int arr2[] , int n , int p){
//     int i = 0;
//     int j = 0;
//     vector <int> unionArr;
//     while(i< n && j < p){
//         if(arr1[i] <= arr2[j]){
//             if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
//                 unionArr.push_back(arr1[i]);
//             }
//             i++;
//         }else{
//             if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
//                 unionArr.push_back(arr2[j]);
//             }
//             j++;
//         }
//     }
//     while(i<n){
//         if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
//             unionArr.push_back(arr1[i]);
//         }
//         i++;
//     }

//     while(j<p){
//         if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
//             unionArr.push_back(arr2[j]);
//         }
//         j++;
//     }

//     for(auto it:unionArr){
//         cout << it <<" ";
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int p;
//     cin>>p;

//     int arr1[n];
//     int arr2[p];
//     for(int i = 0;i<n;i++){
//         cin >> arr1[i];
//     }
//     for(int i =0;i<p;i++){
//         cin >> arr2[i];
//     }

//     unions( arr1 , arr2 , n , p );

//     return 0;
// }


// Intersection Of two sorted Arrays :-


// Method 02 :- optimal solution 
// void intersections(int arr1[] , int arr2[] , int n , int p){
//     int i = 0;
//     int j = 0;
//     vector <int> st;
//     while(i < n && j < p){
//         if(arr1[i] == arr2[j] ){
//             if(st.size() == 0 || st.back() != arr1[i]){
//                 st.push_back(arr1[i]);
//             }
//             i++;
//             j++;
//         }
//         else if (arr1[i] < arr2[j]){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     for(auto it:st){
//         cout << it << " ";
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int p;
//     cin>>p;

//     int arr1[n];
//     int arr2[p];
//     for(int i = 0;i<n;i++){
//         cin >> arr1[i];
//     }
//     for(int i =0;i<p;i++){
//         cin >> arr2[i];
//     }

//     intersections( arr1 , arr2 , n , p );

//     return 0;
// }



// Find the missing number from an array :-

// Method 01:- brute force 

// void find_missing(int arr[] , int n , int p){
//     for(int i = 0;i<n-1;i++){
//         int mini = i;
//         for(int j = i;j<n;j++){
//             if(arr[mini] > arr[j]){
//                 mini = j;
//             }
//         }
//         swap(arr[mini] , arr[i]);
//     }

//     for(int i = 0;i<=n;i++){
//         if ((i+1) != arr[i]){
//             cout << i+1;
//             break;
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
//     int p;
//     cin >> p;
//     find_missing(arr , n , p);
//     // for(int i = 0;i<n;i++){
//     //     cout << arr[i] << " ";
//     // }    
// }


// Method 02 :- brute force 02

// void find_missing(int arr[] , int n , int p){
//     for(int i = 1;i<=p;i++){
//         int flag = 0;
//         for(int j = 0;j<=n-1;j++){
//             if(arr[j] == i){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             cout << i;
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
//     int p;
//     cin >> p;
//     find_missing(arr , n , p);
//     // for(int i = 0;i<n;i++){
//     //     cout << arr[i] << " ";
//     // }    
// }


// Better :-
// void find_missing(int arr[] , int n , int p){
//     int hash[p+1] = {0};
//     for(int i = 0;i<n;i++){
//         hash[arr[i]] = 1;
//     }
//     for(int i = 0;i<=p;i++){
//         if(hash[i] == 0){
//             cout << i;
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
//     int p;
//     cin >> p;
//     find_missing(arr , n , p);
//     // for(int i = 0;i<n;i++){
//     //     cout << arr[i] << " ";
//     // }    
// }


// optimal solution 

// void find_missing(int arr[] , int n){
//     int sum = (n*(n+1))/2;
//     int fsum = 0;
//     for(int i = 0;i<n-1;i++){
//         fsum = fsum + arr[i];
//     }
//     cout << sum - fsum;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     find_missing(arr , n);
// }


// second optimal solution  xor method

// void find_missing(int arr[] , int n){
//     int xor1 = 0;
//     int xor2 = 0;
//     for(int i = 0;i<n-1;i++){
//         xor2 = xor2^arr[i];
//         xor1 = xor1^(i+1);
//     }
//     xor1 = xor1 ^ n;
//     cout << (xor1 ^ xor2);
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     find_missing(arr , n);
// }



// Find maximum consecutive numbers from an array 

// method 01 :- Brute force 

// void consecutive_ones(int arr[] , int n){
//     int cnt = 0;
//     int max = 0;
//     for(int i = 0;i<n;i++){
//         if(arr[i]==1){
//             if(i == n-1 && cnt > max){
//                 max = cnt +1;
//             }else{
//                 cnt = cnt +1;
//             }
//         }else{
//             if(max < cnt){
//                 max = cnt;
//                 cnt = 0;
//             }
//         }
//     }
//     cout << max;
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     consecutive_ones(arr , n);
// }



// Print the number that appears only once 

// Method 01 :- brute force 
// void appear_once(int arr[] , int n){
//     for(int i =0;i<n;i++){
//         int cnt = 0;
//         int num = arr[i];
//         for(int i = 0;i<n;i++){
//             if(num == arr[i]){
//                 cnt = cnt +1 ;
//             }
//         }
//         if(cnt == 1){
//             cout << num << " ";
//         }
//     }
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     appear_once(arr , n);
// }


// Method 02 :- better approach 
// void appear_once(int arr[] , int n){
//     int max = arr[0];
//     for(int i = 0;i<n;i++){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//     }
//     int hash[max] = {0};
//     for(int i = 0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     for(int i =0;i<n;i++){
//         if(hash[arr[i]] == 1){
//             cout << arr[i] << " ";
//         }
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     appear_once(arr , n);
// }


// Method 03 :- optimal solution 

// void appear_once(int arr[] , int n){
//     map < long long , int > mpp;
//     for(int i = 0;i<n;i++){
//         mpp[arr[i]]++;
//     }

//     for(auto it : mpp){
//         if(it.second == 1){
//             return it.first;
//         }
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     appear_once(arr , n);
// }


// optimal way :- 

// void appear_once(int arr[] , int n){
//     int xr = 0;
//     for(int i = 0;i<n;i++){
//         xr = xr ^ arr[i];
//     }
//     cout << xr;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     appear_once(arr , n);
// }



// Longest subarray with given sum K(positives)

// Method 01 :- brute force

// void longest_subarray(int arr[] , int n , int k){
//     int max_len = 0;
//     for(int i = 0;i<n;i++){
//         int sum = 0;
//         for(int j = i;j<n;j++){
//             sum += arr[j];
//             if(sum ==k){
//                 max_len = max(max_len , j-i+1);
//             }
//         }
//     }
//     cout << max_len;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int k;
//     cin >> k;

//     longest_subarray(arr , n , k);
// }



// Method 02 :- Better Method 

// void longest_subarray(int arr[] , int n , int k ){
//     map<int , int > mpp;
//     int sum = 0;
//     int max_len = 0;
//     for(int i = 0;i<n;i++){
//         sum += arr[i];
//         if(sum == k){
//             max_len = max(max_len , i+1);
//         }

//         int rem = sum -k;
//         if(mpp.find(rem) != mpp.end()){
//             int len = i-mpp[rem];
//             max_len = max(max_len , len);
//         }

//         if(mpp.find(sum) == mpp.end()){
//             mpp[sum] = i;
//         }
//     }
//     cout << max_len;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int k;
//     cin >> k;

//     longest_subarray(arr , n , k);
// }



// most optimal:- 


// void longest_subarray(int arr[] , int n , int k){
//     int left = 0;
//     int right = 0;
//     int sum = arr[0];
//     int maxLen = 0;
//     while(right < n){
//         while(left <= right && sum > k){
//             sum -= arr[left];
//             left++;
//         }
//         if(sum == k){
//             maxLen = max(maxLen , right -left +1);
//         }

//         right++;
//         if(right < n){
//             sum += arr[right];
//         }
//     }
//     cout << maxLen;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int k;
//     cin >> k;

//     longest_subarray(arr , n , k);
// }



// 2 sum problem :- 

// method 01:- brute force 

// void two_sum(int arr[] , int n , int target){
//     int count = 0;
//     int seond_one = 0;
//     for(int i =0;i<n;i++){
//         count = target - arr[i];
//         for(int j = i+1;j<n;j++){
//             if(count == arr[j]){
//                 cout << arr[i] << " "<< arr[j] << " ";
//                 break;
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
//     int target;
//     cin >> target;
//     two_sum(arr , n , target);
// }


// Method 02 :- better 

// string two_sum(int arr[] , int n , int target){
//     map <int ,int > mpp;
//     for(int i = 0;i<n;i++){
//         int a = arr[i];
//         int more = target - a;
//         if(mpp.find(more) != mpp.end()){
//             return "YES";
//         }
//         mpp[a] = i;
//     }
//     return "NO";
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     cout << two_sum(arr , n , target);
// }


// Optimal Way :- 

// string two_sum(int arr[] , int n , int target ){
//     for(int i = 0;i<n-1;i++){
//         int mins = i;
//         for(int j=i;j<n;j++){
//             if(arr[j] < arr[mins]){
//                 mins =j;
//             }
//         }
//         swap(arr[i] , arr[mins]);
//     } 

//     int left = 0;
//     int right = n-1;
//     while(left < right){
//         int sum = arr[left] + arr[right];
//         if(sum > target ){
//             right--;
//         }
//         else if(sum < target ){
//             left++;
//         }
//         else if(sum == target){
//             return "yes";
//         }
//     }
//     return "no";
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     cout << two_sum(arr , n , target);
// }



// sorting 0s , 1s and 2s :- 

// Optimal way :- 

// void sorting_ones(int arr[] , int n){
//     int low = 0;
//     int mid = 0;
//     int high = n-1;

//     while(mid <= high){
//         if(arr[mid] == 0){
//             swap(arr[low] , arr[mid]);
//             low ++ ;
//             mid ++;
//         }

//         else if(arr[mid] == 1){
//             mid++;
//         }

//         else{
//             swap(arr[high] , arr[mid]);
//             high--;
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
//     int target;
//     cin >> target;
//     sorting_ones(arr , n);
//     for(int i = 0;i<n;i++){
//         cout << arr[i];
//     }
// }




// Majority element :- 


// Method 01 :- Brute Force 

// void majority_element(int arr[] , int n){
//     int hash[n] = {0};
//     for(int i = 0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     for(int i = 0;i<n;i++){
//         if(hash[arr[i]] > n/2){
//             cout << arr[i];
//             break;
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
//     int target;
//     cin >> target;
//     majority_element(arr , n);
// }


// method 02 :- optimal way :- 

// New algorithm :- 

// moore voting algorithm 

// void majority_element(int arr[] , int n){
//     int cnt = 0;
//     int el;
//     for(int i = 0;i<n;i++){
//         if(cnt == 0){
//             cnt = 1;
//             el = arr[i];
//         }
//         else if(arr[i] == el){
//             cnt ++;
//         }
//         else{
//             cnt--;
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
//     int target;
//     cin >> target;
//     majority_element(arr , n);
// }




// Maximum subarray sum:- 

// Method 01 :- Better Method 

// void majority_element(int arr[] , int n){
//     int cnt = 0;
//     for(int i = 0;i<n;i++){
//         int max_sum = 0;
//         for(int j = i;j<n;j++){
//             max_sum += arr[j];
//             cnt = max(cnt , max_sum);
//         }
//     }
//     cout << cnt;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     majority_element(arr , n);
// }


// Method 02 :- Optimal method 

// void majority_element(int arr[] , int n){
//     int sum = 0;
//     int maxi = INT_MIN;
//     for(int i =0;i<n;i++){
//         sum += arr[i];

//         if(sum > maxi){
//             maxi = sum;
//         }

//         if(sum < 0){
//             sum = 0;
//         }
//     }
//     cout << maxi;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     majority_element(arr , n);
// }


// Rearrange Elements by sign 

// Method 01 :- Brute Force 

// void rearrange_sign(int arr[] , int n){
//     int cnt = 0;
//     int dfg=1;
//     int temp[n];
//     for(int i = 0;i<n;i++){
//         if(arr[i] > 0){
//             temp[cnt] = arr[i];
//             cnt += 2;
//         }else{
//             temp[dfg] = arr[i];
//             dfg += 2;
//         }
//     }

//     for(int i =0;i<n;i++){
//         cout << temp[i] << " ";
//     }
// }

// int main(){
//     int n ;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     rearrange_sign(arr ,n);
// }


// Method  02 :- Brute Method 


// void rearrange_sign(int arr[] , int n){
//     int poss[n/2];
//     int negs[n/2];
//     int cnt = 0;
//     int cnt2 = 0;
//     for(int i =0;i<n;i++){
//         if(arr[i]> 0){
//             poss[cnt] = arr[i];
//             cnt++;
//         }else{
//             negs[cnt2] = arr[i];
//             cnt2++;
//         }
//     }

//     for(int i =0;i<n;i++){
//         arr[i*2] = poss[i];
//         arr[i*2 +1] = negs[i];
//     }

//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int n ;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     rearrange_sign(arr ,n);
// }



// Next Permutation 

// Method 01:- brute force 

// void next_permutation(int arr[] , int n){
//     int inde = -1;
//     for(int i = n-2 ; i>=0;i--){
//         if(arr[i] < arr[i+1]){
//             inde = i;
//             break;
//         }
//     }
//     for(int i =n-1;i>=inde;i--){
//         if(arr[i] > arr[inde]){
//             swap(arr[i] , arr[inde]);
//             break;
//         }
//     }
//     reverse(arr+inde +1 , arr+n);
// }

// int main(){
//     int n ;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     next_permutation(arr ,n);
//     for(int i = 0;i<n;i++){
//         cout <<  arr[i] << " ";
//     }
// }


// Leader in an array 

// Method 01 :- brute Force 

// void leader_in_array(int arr[] , int n){
//     for(int i =0;i<n-1;i++){
//         int cnt = 1;
//         for(int j=i+1;j<n;j++){
//             if(arr[i] > arr[j]){
//                 cnt = 1;
//             }else{
//                 cnt = 0;
//                 break;
//             }
//         }
//         if(cnt == 1){
//             cout << arr[i] << " ";
//         }
//     }
//     cout << arr[n-1] ;   
// }


// int main(){
//     int n ;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     leader_in_array(arr ,n);
// }


// Method 02 :- Optimal Solution 

// void leader_in_array(int arr[] , int n){
//     int mi = 0;
//     for(int i = n-1;i>=0;i--){
//         if(arr[i] > mi){
//             cout << arr[i] << " ";
//         }
//         mi = max(mi , arr[i]);
//     }
// }

// int main(){
//     int n ;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     leader_in_array(arr ,n);
// }



// longest consecutive sequence :-

// method 01 :- better force 

// int longest_sequence(int arr[] , int n){
//     for(int i = 0;i<n-1;i++){
//         int mini = i;
//         for(int j = i;j<n;j++){
//             if(arr[mini] > arr[j]){
//                 mini = j;
//             }
//         }
//         swap(arr[mini] , arr[i]);
//     }


//     int cnt  = 0;
//     int news = 0;
//     for(int i =1;i<n;i++){
//         if(arr[i] -1  == arr[i-1]){
//             cnt++;
//         }else{
//             news = max(news , cnt);
//             cnt = 0;
//         }
//     }
//     news = max(news , cnt);
//     return news +1 ;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << longest_sequence(arr , n);
// }


// optimal Solution  :- method 02 

// int longest_sequence(int arr[] , int n){
//     int longest = 1;
//     unordered_set<int> st;
//     for(int i = 0;i<n;i++){
//         st.insert(arr[i]);
//     }

//     for(auto it:st){
//         if(st.find(it-1) == st.end()){
//             int cnt = 1;
//             int x = it;
//             while(st.find(x+1) != st.end()){
//                 x = x+1;
//                 cnt = cnt+1;
//             }
//             longest = max(longest , cnt);
//         }
//     }
//     return longest;
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << longest_sequence(arr , n);
// }





// set matrix zero 

// method 01 :- brute force 


void set_matrix_zero(){

}


int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << arr[i][j];
        }
    }

}



