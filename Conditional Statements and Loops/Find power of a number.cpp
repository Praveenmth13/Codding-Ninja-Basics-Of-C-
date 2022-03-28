#include <iostream>
using namespace std;

int main() {
    //Write your code here
	int n;
    int x;
    cin>>n;
    cin>>x;
    int p=1;
    for(int i=1;i<=x;i++){
        p=p*n;
    }
    cout<<p;
    return 0;
}
