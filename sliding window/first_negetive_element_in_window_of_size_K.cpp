#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size];
    
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    
    list<int> l;
    int k; 
    cin >> k;
    vector<int> ans;
    int i = 0, j = 0;
    
    while(j < size){
        if(arr[j] < 0)
            l.push_back(arr[j]); // Push negative numbers into the list
        
        if(j - i + 1 < k)
            j++;
        else if(j - i + 1 == k){
            if(l.empty()) {
                ans.push_back(0); // No negatives in the current window
            } else {
                ans.push_back(l.front()); // First negative number
            }
            
            // Before sliding the window, check if the first element of the window
            // is the same as the first element in the list.
            if(arr[i] == l.front()) {
                l.pop_front(); // Remove that element from the list
            }
            
            // Slide the window forward
            i++; 
            j++;
        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
