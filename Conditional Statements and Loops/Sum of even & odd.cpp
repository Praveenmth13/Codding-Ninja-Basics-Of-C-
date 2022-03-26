#include <iostream>
using namespace std;
int main() {
    //Write your code here
    int n;
    int sum1=0;
    int sum2=0;
    cin>>n;
    while(n!=0){
        int rem=n%10;
        if(rem%2==0){
            sum1=sum1+rem;
        }
        else{
           sum2=sum2+rem; 
        }
        n=n/10;
    }
    cout<<sum1<<" "<<sum2; 
    return 0;
}
