#include<iostream>
using namespace std;


void reverseArray(int arr[], int length){

	int start = 0;
	int end = length - 1;
	
	while(start < end)
	{
		swap(arr[start],arr[end]);
		start = start + 1;
		end   = end - 1;
	}

	
}


int main(){

 int arr[] = {10,20,30,40,50,60,70,80};
 int n = sizeof(arr)/sizeof(int);
 reverseArray(arr,n);
 
 for(int i = 0; i < n; i++){
 	cout << arr[i] << " ";
 }
 
 cout << endl;




return 0;

}

