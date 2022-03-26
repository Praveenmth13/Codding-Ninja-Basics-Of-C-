#include <iostream>
using namespace std;
int fahrenheit_to_celcius(int);
int main() {
   //Write your code here
   int s, e, w;
   cin >> s >> e >> w;
   do {
     int n = fahrenheit_to_celcius(s);
     cout << s << "\t" << n << endl;
       s += w;
   }
    while(s <= e); 
	return 0;
}
int fahrenheit_to_celcius(int n)
{
   int celcius = (n-32) / 1.8000;
	return celcius;
}
