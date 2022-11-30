// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Write C++ code here
    typedef map<string,int> maptype;
    maptype populationmap;
    populationmap.insert(pair<string, int >("Maharashtra" , 9843213));
    populationmap.insert(pair<string, int >("Rajasthan " , 456113));
    populationmap.insert(pair<string, int >("Bihar" , 156513));
    populationmap.insert(pair<string, int >("Panjab" , 9546413));
    populationmap.insert(pair<string, int >("Kerala" , 123548));
    populationmap.insert(pair<string, int >("Goa" , 1654783));
    
    maptype::iterator iter;
    string state_name;
    cout<<"Enter the state name: ";
    cin>>state_name;
    iter = populationmap.find(state_name);
    if(iter != populationmap.end()){
        cout<<iter->first<<" Population is : "<<iter ->second;
    }
    else {
        cout<<"state is not in map ";
    }

    return 0;
}
