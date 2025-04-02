// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int first(){
    vector<int> arr = {1,2,5,5,5,5,99,88};
    int left = 0;
    int right = 6;
    int k =5;
    while(left<right){
        int mid = (left+right)/2;
        if(arr[mid]>k){
            right--;
        }
        else{
            left++;
        }
        if(arr[left] == k){
            return  left;
        }
        else if(arr[right] == k){
            return right;
        }
    }
    return left;
}
int last() {
    vector<int> arr = {1,2,5,5,5,5,99,88};
    int left = 0;
    int right = 6;
    int k =5;
    while(left<right){
        int mid = (left+right)/2;
        if(arr[mid]<k){
            left++;
        }
        else{
            right--;
        }
        if(arr[left] == k){
            return  left;
        }
        else if(arr[right] == k){
            return right;
        }
    }
    return left;
}
int main() {
    cout<<first()<<endl;
    cout<<last()<<endl;
    
    return 0;
}