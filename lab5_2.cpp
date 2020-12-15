#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg){
    double rad;
    rad = M_PI*deg/180.0;
    return rad;
}

double rad2deg(double rad){
    double deg;
    deg = 180.0*rad/M_PI;
    return deg;

}

double findXComponent(double l1, double l2, double a1, double a2){
    double x1, x2;
    x1 = l1*cos(a1);
    x2 = l2*cos(a2);
    return x1+x2; 
}

double findYComponent(double l1, double l2, double a1, double a2){
    double x1, x2;
    x1 = l1*sin(a1);
    x2 = l2*sin(a2);
    return x1+x2;
}

double pythagoras (double xcom, double ycom){
    double pyt = sqrt(xcom*xcom+ycom*ycom);
    return pyt;
}

void showResult (double vexl, double vecdi){
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    cout<<"\nLength of the resultant vector = "<<vexl;
    cout<<"\nDirection of the resultant vector (deg) = "<<vecdi;
    cout<<"\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
