#include <iostream>
using namespace std;

int main() {
    //Write your code here
	 char ch;

   ch=cin.get();

   

   if(ch>='A' and ch<='Z') cout<<1<<endl;

   else if(ch>='a' and ch<='z') cout<<0<<endl;

   else cout<<-1<<endl;
    return 0;
}
