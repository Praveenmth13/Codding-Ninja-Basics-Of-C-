#include <iostream>

using namespace std;

int main() {
    //Write your code here
    int Principal;
    float rate;
    int time;
    cin>>Principal>>rate>>time;
    int Simple=(Principal*rate*time)/100;
    cout<<Simple;
    return 0;
}
