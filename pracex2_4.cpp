#include <iostream>
#include <cmath>

using namespace std;

double av(double,double);

//Write prototype of av() here.

int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
}

double av(double x, double y){
    double z = 0;
    double Max = 0;
    double Min = 0;
    if(x <= 0|| y<= 0){
        return z;
    }else if(x > y){
        Max = Max + x ,Min = y;
    }else if(x < y){
        Max = y,Min = x;
    }else if(Max /Min <= 100){
        return sqrt(x*y);
    }else{
        return 1;
    }
}
//Write function definition of av() here.
