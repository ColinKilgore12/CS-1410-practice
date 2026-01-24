#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int value1, valueX, min, max , totalval = 0, average;
    while (true){
    cout << "Insert a number that is a multiple of 3: " << endl;
    cin >> value1;
    if (value1 % 3 == 0){
        break;   
    }else{
        cout << "The number is not a multiple of 3. Try again." << endl;
    }
    }
    max = value1;
    min = value1;
    for(int i = 1; i < 5; i++){
        while(true){
            cout << "Insert a number that is a multiple of 3: " << endl;
            cin >> valueX;
            if (valueX % 3 == 0){
                break;
            } else{
                cout << "The number is not a multiple of 3. Try again." << endl;
            }
        }
        totalval = totalval + valueX;
        if (valueX < value1) {
            min = valueX;
        } else {
            max = valueX;

    
        }
    // }
    // if(value1 < min){
    //     min = value1;
    // }
    // if(value1 > max){
    //     max = value1;
    }
    totalval = totalval + value1;
    average = totalval / 5;
    cout << setw(10) << "Count" << setw(10) << "Minimum" << setw(10) << "Maximum" << setw(10) << "Total" << setw(10) << "Average" << endl;
    cout << "==================================================" << endl;
    cout << setw(10) << "5" << setw(10) << min << setw(10) << max << setw(10) << totalval << setw(10) << average << endl;
    return 0;
}