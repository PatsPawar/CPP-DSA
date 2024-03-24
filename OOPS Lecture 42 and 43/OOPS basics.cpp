#include<iostream>
using namespace std;
class Hero{
    public:
    int health=70;
    char level='A';
};
int main(){
 Hero Ramesh;
 cout << "Health is :" << Ramesh.health << endl;
 cout << "Level is :" << Ramesh.level << endl;
}