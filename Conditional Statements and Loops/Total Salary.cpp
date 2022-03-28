#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Write your code here
	long long int base,total ;
    char input;
    cin >> base >> input;
    float hra = 0.20* base;
    float da  = 0.5 * base;
    float pf  = 0.11* base;
    float allow;
 
    switch (input){
    case 'A':
          allow = 1700; break;
    case 'B':
          allow = 1500; break;
    default:
          allow = 1300 ;break;
    }
    
    total = round(base + hra + da + allow - pf);
    cout << total<< endl;
    return 0;
}
