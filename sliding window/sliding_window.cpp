#include <iostream>
#include <limits.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i = 0; i < size; i++){
        cin>>arr[i];
	}
	int k;
	cin>>k;
	int sum = 0, max = INT_MIN, i = 0, j = 0;
    while(j < size){
         sum = sum + arr[j];
         if((j - i + 1) < k){
         	j++;
         }else if((j - i + 1) == k){
         	if(sum > max){
         		max = sum;
         	}
         	sum = sum - arr[i];
         	i++;
         	j++;
         }
    }

    cout<<max<<endl;
	return 0;
}