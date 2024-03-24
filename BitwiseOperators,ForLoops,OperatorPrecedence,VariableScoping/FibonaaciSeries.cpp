#include<iostream>
using namespace std;
int main(){
    int first=0;
    int second=1;
    int n;
    cout << "Enter the value of n"<< endl;
    cin >> n;
    cout << first << " "<< second << " ";
    for (int i=3;i<=n;i++){
        
       int c = first+second;
       cout << c << " ";
       first=second;
       second=c;
       }
   return 0;
}