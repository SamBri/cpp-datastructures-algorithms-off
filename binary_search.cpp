#include <iostream>

using namespace std;

int binary_search(int arr[], int length, int key){
	// implement binary search 
	
	cout << "running" <<endl;
	
	int start = 0;
	int end = length - 1;
	
	while(start <= end){
		cout <<"loop"<<endl;
		int mid = (start + end) / 2; // start from the mid point 
		cout << "start:" << start<<endl;
		cout << "mid:"<< mid << endl;
		cout <<"end:"<< end <<endl;
		if(arr[mid] == key){
			return mid;
		} else if(arr[mid] > key){
			// define a new end to be closer
			end = mid - 1;
		} else{
			start = mid + 1;
		}
		
		
	}
	
	
	return -1;
	
	
}


int main(){
	
	int arr[] = {10,20,40,50,70,80,90};
	int n = sizeof(arr)/sizeof(int);
	
	int key;
	cin >> key;
	
	int index = binary_search(arr,n, key);
	if(index != -1){
		cout <<key <<" is present at index "<< index << endl;
	} else{
		cout << key << "is NOT Found!" << endl;
	}
	
	return 0;
}
