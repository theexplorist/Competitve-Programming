//Day 1
//Given an array A on size N, you need to find the number of ordered pairs (i, j) such that i > j and arr[i] > arr[j].

#include <iostream>
using namespace std;
long long count = 0;

/*Time complexity of merge is O(n)
  This function merge two sorted arrays
*/
void merge(int arr[], int si, int mid, int li){
	
    int i = si, j = mid + 1, k = 0;
    int ar[li - si + 1];
    
    for(int counter = si; counter <= li; counter++){
        
        // if size of arr[si..mid] < arr[mid + 1..li] 
        if(i > mid){
            ar[k++] = arr[j++];
        }
        
        //if size of arr[si..mid] > arr[mid + 1..li] 
        else if(j > li){
            ar[k++] = arr[i++];
        }
        
        /* count is updated as mid - i + 1 if condition satisfies because 
        if arr[j] < arr[i] then for every i till mid 
        condition will be satisfied*/
        else if(arr[i] > arr[j]){
            count += mid - i + 1;
            ar[k++] = arr[j++];
        }
        
        else if(arr[i] <= arr[j]){
            ar[k++] = arr[i++];
        }
    }
    
    //Updating the original array
    for(int counter = 0; counter < k; counter++){
        arr[si++] = ar[counter];
    }
    
}

/* A divide and conquer recursive 
   bottom up approach which runs for log n steps
   calls merge for each step*/ 
void mergeSort(int arr[], int si, int li){
    
    if(si < li){
        int mid = (si + li) / 2;
        mergeSort(arr, si, mid);
        mergeSort(arr, mid + 1, li);
        merge(arr, si, mid, li);
    }
}


int main() {
    int n;
    cin >> n;
    int arr[n + 1];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
   mergeSort(arr, 0, n - 1);
   
   
   cout << count;
	return 0;
}
