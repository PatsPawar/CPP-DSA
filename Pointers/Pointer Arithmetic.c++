#include<iostream>
using namespace std;
int main(){
    int num = 9;
    int *ptr = &num;
    /* cout << " Before " << ptr << endl;
    ptr = ptr + 1;
    cout << " After " << ptr << endl;
    */
    cout << " Before " << *ptr << endl;
    *ptr = *ptr + 1;
    cout << " After " << *ptr << endl;
    return 0;
    




}