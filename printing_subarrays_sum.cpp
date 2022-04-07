#include<iostream>
using namespace std;


int largestSubArraySum(int arr[], int n){
	
	int largest_sum = 0;
	
	for(int i = 0; i < n; i++){	
	 
		for(int j=i; j<n; j++){
		
			int subarraySum = 0;
		
				for(int k = i; k <= j ; k++){
				subarraySum += arr[k];
				cout << arr[k] << "," ;
			
				
				}
				
				cout <<"{The subarray sum => "<<subarraySum<<"}";		
				cout << endl;
				
				largest_sum = max(largest_sum,subarraySum);
				
				
		}
	}
		
	return largest_sum;	
}
	
	
	



int main(){

 int arr[] = {10,20,30,40,50,60,70,80};
 int n = sizeof(arr)/sizeof(int);
 
 
  cout << largestSubArraySum(arr, n);

 


return 0;

}

