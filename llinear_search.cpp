#include<iostream>
using namespace std;



/*int linear_search(int arr[], int n, int key){
	
	for(int i = 0; i<n; i++){
		
		if(arr[i] == key){
			return i;
		}
	}
	
	
	return -1;
	
}
*/
// linear search algorithm
int linear_search(int arr[], int length, int key){
	
	// go from beginning to end of arr.
	for(int i = 0; i < length; i++){
		// check to confirm whether the item at index i is the item we are searching for
		if(arr[i] == key)
			return i; // tell the end user where the item existed.
	}
	
	// if not found then tell the end user it is not here
	return -1;
}



int main(){

 int arr[] = {10,20,30,40,50,60,70,80};
 int n = sizeof(arr)/sizeof(int);
 
 int key;
 cin >> key;
 
 int index = linear_search(arr,n,key);
 
 if(index != -1){
 	cout << key <<" is present at index " << index << endl;
 } else{
 	cout << key <<"is NOT Found!" << endl;
 }




return 0;

}

