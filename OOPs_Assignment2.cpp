#include<iostream>

#include<string.h>

using namespace std;

 

class student

{

     string name,cls,div,blood_group,address;

     int DOB,telephone_no,license_no;

     static int id;

     public :

 

        static int display_id()

         {

            id++;

            cout<<"Student number : "<<id<<endl;

         }

 

        student()

        {

            name = "adyaraj";

            cls = "SE";

            div = 'A';

            blood_group = "O+";

            address = "sant tukaram nagar, pimpri, pune";

            DOB = 19;

            telephone_no = 12354;

            license_no = 234;

        }

 

        student(student &s)

        {

            name = s.name;

            cls = s.cls;

            div = s.div ;

            blood_group = s.blood_group ;

            address = s.address;

            DOB = s.DOB;

            telephone_no = s.telephone_no;

            license_no = s.license_no;

        }

 

        void getdata();

        void display_data();

 

        ~student()

        {

            cout<<endl<<"MEMORY DELETED";

        }

};

 

class per_info

{

       int roll_no;

       friend class student;

};

 

void student :: getdata()

{

    per_info p;

    cout<<"Enter your Roll no : ";

    cin>>p.roll_no;

 

    cout<<"Enter your name : ";

    cin>>name;

    cout<<"Enter your class : ";

    cin>>cls;

    cout<<"Enter your division : ";

    cin>>div;

    cout<<"Enter your blood group : ";

    cin>>blood_group;

    cout<<"Enter your address : ";

    cin>>address;

    cout<<"Enter your date of birth : ";

    cin>>DOB;

    cout<<"Enter your telephone number : ";

    cin>>telephone_no;

    cout<<"Enter your license number : ";

    cin>>license_no;

}

 

void student :: display_data()

{

    per_info p;

    cout<<"Roll No :  "<<p.roll_no<<endl;

 

    cout<<"Name :  "<<name<<endl;

    cout<<"Class :  "<<cls<<endl;

    cout<<"Division :  "<<div<<endl;

    cout<<"Blood Group :  "<<blood_group<<endl;

    cout<<"Address :  "<<address<<endl;

    cout<<"Date of Birth :  "<<DOB<<endl;

    cout<<"Telephone number:  "<<telephone_no<<endl;

    cout<<"License number :  "<<license_no<<endl;

 

}

 

int student ::id;

 

int main()

{

    int n,i;

    cout<<"Enter number of students : ";

    cin>>n;

 

    student *s = new student[n];

    student s1;

 

 

    for(i=0;i<n;i++)

    {

        student::display_id();

        s[i].getdata();

        cout<<endl;

        s[i].display_data();

        cout<<endl;

    }

 

    s1.getdata();

 

    cout<<endl<<"Copy Constructor : "<<endl;

    student s2(s1);

    s2.display_data();

 

    delete s;

 

    return 0;

}

 


