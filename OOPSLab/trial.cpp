// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int arr[5]={1,2,3,4,5};
    int start=2;
    int end=5-1;
    while(start<end){
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
        
        
    }
    
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }

    return 0;
}