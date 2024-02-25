#include<iostream>
using namespace std;
int main(){
    int num=6;
    int *ptr=&num;

    cout << num << endl;
    cout << *ptr << endl;
    *ptr = *ptr +1;
    cout << *ptr << endl;
    cout << ptr << endl;
    int *q = ptr;
    cout << *q << endl;
    cout << *ptr << endl;

}