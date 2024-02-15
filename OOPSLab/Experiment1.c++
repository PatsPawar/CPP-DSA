// Aim= Implement the concept of class, data members and member functions in C++
#include<iostream>
using namespace std;
class student
{
    string name;
    int rollno;
    string department;

    public:
            void getdata(void);
            void display(void);
};
void student :: getdata(void){
    cout << " Enter your name =  " ;
    getline(cin, name);
    cout << "Enter your roll no = " ;
    cin >> rollno;
    cout << " Enter your department = ";
    cin.ignore();
    getline(cin, department);


};
void student :: display(void){
    cout << "Your name is "<< name << endl;
    cout << "Your roll no is "<< rollno<< endl;
    cout << "Your department is "<< department << endl;
}
int main(){
    student S1,S2,S3;
    cout << "Enter data for student 1"<< endl;
    S1.getdata();
    S1.display();
    cout << "Enter data for student 2"<< endl;
    S2.getdata();
    S2.display();
    cout << "Enter data for student 3 "<< endl;
    S3.getdata();
    S3.display();
    return 0;
}