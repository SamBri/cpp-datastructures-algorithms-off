#include<iostream>
using namespace std;


int largestSubArraySum(int arr[], int n){
	
	// prefix sums
	int prefix[100] = {0};
	prefix[0] = arr[0];
	for(int i = 1; i<n; i++){
		prefix[i] = prefix[i-1] + arr[i];
	}
	
	int largest_sum = 0;
	
	for(int i = 0; i < n; i++){	
	 
		for(int j=i; j<n; j++){
		
			int subarraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
			largest_sum = max(largest_sum,subarraySum);
						
		}
	}
		
	return largest_sum;	
}
	

// prefix sum approach
int main(){

 int arr[] = {10,20,30,40,50,60,70,80};
 int n = sizeof(arr)/sizeof(int);
 
 
  cout << largestSubArraySum(arr, n);

 


return 0;

}

