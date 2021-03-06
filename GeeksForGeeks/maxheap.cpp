//Implementation of max heap

#include <bits/stdc++.h>
using namespace std;

void maxHeapify(vector<int> &v, int parent){
    int leftChild = 2*parent + 1;
    int rightChild = 2*parent + 2;
    int largest = parent;
    if((leftChild <= v.size() - 1) && v[leftChild] > v[parent]){
        largest = leftChild;
    }else{
        largest = parent;
    }
    
    if((rightChild <= v.size() - 1) && v[rightChild] > v[largest]){
        largest = rightChild;
    }
    
    if(largest != parent){
        swap(v[largest], v[parent]);
           maxHeapify(v, largest);
    }
    
 
}

void buildMaxHeap(vector<int> &v){
    int heapSize = v.size();
    for(int i = v.size()/2 - 1; i >= 0; i--){
        maxHeapify(v, i);
    }
}

int main() {
	vector<int> arr{4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
	buildMaxHeap(arr);
	for(int e : arr){
	    cout << e << " ";
	}
	return 0;
}