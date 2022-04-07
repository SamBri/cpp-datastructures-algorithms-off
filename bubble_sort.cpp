#include<iostream>
using namespace std;

int bubble_sort(int arr[], int n){

	for(int times=1; times<=n-1; times++){
		
		for(int j=0; j <= n - times - 1; j++){
			
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
			
			
		}
	}
	
}	



int main(){

 int arr[] = {80,32,43,23,245,63,21,456};
 int n = sizeof(arr)/sizeof(int);
 
 bubble_sort(arr,n);
 
 for(int i = 0; i < n; i++)
 {
 	cout << arr[i] << endl;
 }
  

 


return 0;

}

