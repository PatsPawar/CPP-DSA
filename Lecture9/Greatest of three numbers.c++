#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << " Enter the value of a " << endl;
    cin >> a;
    cout << " Enter the value of b " << endl;
    cin >> b;
    cout << " Enter the value of c " << endl;
    cin >> c;
    if(a>b && a>c ){
        cout << "Largest number is "<< a ;
    }
    else if(b>c && b<a){
        cout << " Largest number is " << b;
    }
    else {
        cout << "Largest number is " << c;
    }


    
}
