#include <iostream>
using namespace std;
int main (){
    int s,c;  //s= selling price, c=cost price
    cin>>s>>c;
    int profit = s-c;
    int loss = c-s;
    if (s>c){
        cout<<"profit is = "<<profit <<endl;
    }
      else if (s<c){
        cout<<"loss is = "<<loss<<endl;
      }
      else {
        cout<<"neutral"<<endl;
      }
    return 0;
}