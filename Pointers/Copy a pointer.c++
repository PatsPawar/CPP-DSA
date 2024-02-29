#include<iostream>
using namespace std;
int main(){
    int num=7;
    int *p = &num;
    cout << p << endl;
    cout << *p << endl;
    int *q = p;
    cout << q << endl;
    cout << *q << endl;
}