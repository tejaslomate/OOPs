#include<iostream>
#include <fstream>
using namespace std;
int main()
{
fstream new_file; 
new_file.open("new_file",ios::out);  
new_file.open("new_file",ios::in);  
string name,Class,Div;
int roll_no,dob;
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter your roll no: ";
cin>>roll_no;
cout<<"Enter your division: ";
cin>>Div;
cout<<"Enter your date of birth: ";
cin>>dob;

new_file<<name<<roll_no<<Div<<dob;
cout<<endl<<"New file is created"<<endl;

new_file.close(); // Step 4: Closing file
cout<<"Your name is "<<name<<endl;
cout<<"Your roll no is "<<roll_no<<endl;
cout<<"Your division is "<<Div<<endl;
cout<<"Your date of birth is "<<dob<<endl;

return 0;
}
