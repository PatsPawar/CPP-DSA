#include<iostream>
using namespace std;
class Calculation
{
    public:
    float number;
    Calculation(){}
    Calculation(double n){
        number=n;
    }
    void calculateAvg(Calculation A1,Calculation A2, Calculation A3){
        float Average = (A1. number + A2 .number+ A3.number )/3 ;
        cout << "Average :" << Average << endl;
    }
    void calculateSum(Calculation S1, Calculation S2, Calculation S3 ){
        float Sum= (S1.number+ S2.number + S3.number );
        cout << "Sum :" << Sum << endl;
    }
    void calculateMultiplication(Calculation M1, Calculation M2, Calculation M3){
        float Multiplication= (M1.number * M2.number * M3.number );
        cout << "Multiplication :" << Multiplication << endl;
    }
};
int main(){
    Calculation cal1(45),cal2(76),cal3(87);
    Calculation obj;
    obj.calculateAvg(cal1,cal2,cal3);
    obj.calculateSum(cal1,cal2,cal3);
    obj.calculateMultiplication(cal1,cal2,cal3);
    return 0;
}