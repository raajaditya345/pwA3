#include <iostream>
using namespace std;
int main (){
   int marks;
   cout<<"enter yor marks "<<endl;
   cin>>marks;
     if (marks>=90){
        cout<<" Grade is A+ "<<endl;
     }
     else if (marks>=80){
        cout<<" Grade is A "<<endl;
     }
     else if (marks>=70){
        cout<<" Grade is B+ "<<endl;
     }
     else if (marks >=60){
        cout<< "Grade is B "<<endl;
     }
     else if (marks >=50){
        cout<< "Grade is C "<<endl;
     }
      else if (marks >=40){
        cout<< "Grade is D "<<endl;
     }
      else if (marks >=30){
        cout<< "Grade is E "<<endl;
     }
      else if (marks < 30){
        cout<< "Grade is F "<<endl;
     }
      else {
        cout<< " Enter valid marks "<<endl;
     }
    return 0;
}
