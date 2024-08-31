#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b){
    if(a > b) return a;
    else return b;
}

int findMaxSubarraySum(int arr[], int size, int k){
    int i = 0, j = 0, sum = 0, max = INT_MIN;
    while(j < size){
        sum = sum + arr[j];

        if(j-i+1 < k) j++;

        else if(j-i+1 == k){
            max = maximum(sum,max);
            sum = sum - arr[i];
            i++; j++;
        }
    }
    return max;
}
int main(){
    int size; cin>>size; int arr[size];
    for(int i = 0; i < size; ++i) cin>>arr[i];
     
    int k; cin>>k;
    int ans = findMaxSubarraySum(arr, size, k);
    cout<<ans<<endl;

    return 0;
}