#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string findQuadrant(double deg);

string findQuadrant(double deg){
    double rad = 3.14 * deg / 180;
    if(sin(rad) >= 0 && cos(rad) >= 0){
        return "Quadrant 1";
    } else if(sin(rad) >= 0 && cos(rad) < 0){
        return "Quadrant 2";
    } else if(sin(rad) < 0 && cos(rad) < 0){
        return "Quadrant 3";
    } else{
        return "Quadrant 4";
    }
}

int main(){
    cout << findQuadrant(23) << endl;
    cout << findQuadrant(123) << endl;
    cout << findQuadrant(223) << endl;
    cout << findQuadrant(323) << endl;
    return 0;
}