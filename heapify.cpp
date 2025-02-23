// heap is a complete binary tree h which comes with heap order priority
// heap order priority is a property of heap where the parent node is always greater than the child node
// heap is of two types: max heap and min heap
// a complete binary tree is a tree where all the levels are completely filled except the last level
// we add element in left first then go to right for each level
// we can represent heap in array
/*  for a node at index i, the left child is at 2*i+1 and right child is at 2*i+2 */
// for a node at index i, the parent is at (i-1)/2 


// insertion in heap is done by adding element at the end of the array and then heapify the array
// heapify is a process where we compare the parent node with the child node and swap them if the parent is smaller than the child
// heapify is done from bottom to top

#include <bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap(){
        size = 0;
        arr[size] = 0;
    }
    void insert(int x){
        size++;
        arr[size]=x;
        int idx = size;
        while(idx>1){ // this loop will check from bottom to root node and swap if parent is greater than the child
            if(arr[idx]>arr[idx/2]){
                swap(arr[idx],arr[idx/2]);
                idx = idx/2; // here idx is pointing to the parent node because we swapped the parent and child and now when new element is inserted at the parent node, we need to check if the parent node is greater than its parent node
            }
            // we changed the idx to idx/2 because we need to check the parent node of the parent node and so on
            else return;
        }
    }
    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deletex(){
      if(size<1){
        cout<<"Heap is empty"<<endl;
        return;
      }
      int i=1;
      arr[i]=arr[size];
      size--;
        
     while(2*i<=size){
        int left_idx = 2*i;
        int right_idx = 2*i+1;
        int idx = i;
        // if(left_idx<=size && arr[left_idx]>arr[idx]){
        //    idx = left_idx;
        // }
        // if(right_idx<=size && arr[right_idx]>arr[idx]){
        //     idx = right_idx;
        // }
// Either i can do the above code or the below code
        if(right_idx<=size && arr[right_idx]>arr[left_idx]){
            idx = right_idx;
        }
        else if(left_idx<=size){
            idx = left_idx;
        }
        
       if(idx==i) return;
       swap(arr[i],arr[idx]);
       i = idx;
     }
    }
    void heapify(int arr[],int n,int i){
        int largest = i;
        int left_i = 2*i;
        int right_i = 2*i+1;

        if(right_i<n && arr[largest]<arr[right_i] ){
            largest = right_i;
        }
        if(left_i<n && arr[largest]<arr[left_i]){
            largest = left_i;
        }
        if(largest!= i){
            swap(arr[largest],arr[i]);
         heapify(arr,n,largest);
        }
    }
};

int main(){
    heap h;
    h.insert(10); // time complexity of insertion is O(logn) because we are checking from bottom to top in while loop of the insert function
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.insert(60);
    h.insert(70);
    h.print();
    h.deletex();
    h.print();
    h.deletex();
    h.print();
    int n=6;
    int arr[n] = {-1,10,23,54,11,20};

    for(int i=n/2; i>0; i--){
        h.heapify(arr,n,i);
    }
    cout<<"Heap ";
    for(int i=1; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}