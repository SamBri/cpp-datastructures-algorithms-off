#include<iostream>
using namespace std;


void printArray(int *arr, int n){

cout <<"In Function "<<sizeof(arr) << endl;
//	int n = sizeof(arr) / sizeof(int);
for(int i = 0; i<n; i++){
	cout << arr[i] << endl;
}
cout << endl;

}



int linear_search(int arr[], int n, int key){
	
	for(int i = 0; i<n; i++){
		
		if(arr[i] == key){
			return i;
		}
	}
	
	
	return -1;
	
}



int main(){


int arr[] = {1,2,3,4,5,6};

int n = sizeof(arr) / sizeof(int);


cout <<"In Main "<<sizeof(arr) << endl;
printArray(arr, n); 


    for(int i =0; i < n ; i++){
	cout << arr[i] << endl;
	}  


return 0;

}

