#include<iostream>
using namespace std;
class Student {
    public:
    double marks;
    Student(){}
    Student(double m){
    marks = m;
    }
    void calculateAvg(Student S1,Student S2, Student S3, Student S4, Student S5){
      double Average = (S1.marks+ S2.marks + S3.marks+ S4.marks + S5.marks)/5;
      cout << "Average marks of 5 students is :"<< Average << endl;
      }
};
 int main(){
  Student obj;
  Student Std1(89), Std2(36), Std3(87), Std4(78), Std5(87);
  obj.calculateAvg(Std1,Std2,Std3,Std4,Std5);
  return 0;
  }


