#include <iostream>                    
using namespace std;         


//Simple Binary Search Function
int binary_search(int arr[],int i,int j,int key){
    int m=(i+j)/2; //m=middle element
    while(i<=j){   //i=starting index j=ending index
    if(arr[m]==key){return m;}  // if key to be searched is present we will return index of the key
    else{
        if(arr[m]<key){i=m+1;}
        else{j=m-1;}
    }
    m=(i+j)/2;
    }
    return -1;  // when element is not present we will return -1
}
//Enhanced binary search function or Binary search for array with unknown lenght
int binary_search_unknown(int arr[],int key){
    //Initializing i as 0 and j as 1.
    int i=0,j=1;
    //We will increase j until arr[j] exceeds key to be searched.
    while(arr[j]<key){
        i=j;
        j=2*j;
    }
    //Now calling Simple Binary Search on range i to j.
    return binary_search(arr,i,j,key);
}
// SIddhant Pratap Singh
// 21104004