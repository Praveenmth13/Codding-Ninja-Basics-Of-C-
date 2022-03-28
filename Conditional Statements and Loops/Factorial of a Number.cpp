#include <iostream>
using namespace std;

int main() {
    //Write your code here
	int n, fact = 1;
   cin >> n;

   if(n >= 0){
       for(int i = 1; i <= n; i++)
            fact *= i;
        cout << fact;
   } 
   else
        cout << "Error";  
    return 0;
}
