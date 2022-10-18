
#include <iostream>
using namespace std;

class publication 
{   protected:
    string title; 

float price; 
public:
void getdata() {
    cout<<"Enter the title of book:"<<endl;
    cin>>title;
    cout<<"Enter the price of book:"<<endl;
    cin>>price;
    
}
void display() {
    cout<<"The title of book is "<<title<<endl;
    cout<<"The price of book is "<<price<<endl;
}

};
class books:public publication
{
    protected:
    int page_count;
    public:
    void getdata1() {
        cout<<"Enter the page count: "<<endl;
        cin>>page_count;
    }
    void display1() {
        cout<<"The page count is "<<page_count<<endl;
    }
};

class tape:public publication
{
    protected:
    int play_time;
    public:
    void getdata2() {
        cout<<"Enter the playing time:"<<endl;
        cin>>play_time;
    }
    void display2() {
        cout<<"The play time is "<<play_time<<endl;
    }
    
};
 

int main() {
    
    books b;
    b.getdata();
    b.getdata1();
    
    tape t;
    t.getdata2();
    cout<<"DETAILS:"<<endl;
    b.display();
    b.display1();
    t.display2();


    return 0;
}
