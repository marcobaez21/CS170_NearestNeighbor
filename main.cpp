#include <iostream>

using namespace std;

int main() {
    int numoffeatures = 0;
    int numofalgo = 0;
    cout<<"Welcome to Marco Baez's Feature Selection Algorithm."<<endl<<endl;
    cout<<"Please enter total number of features: " << endl;
    cin>>numoffeatures;
    cout<<endl<<"Great! We'll use " << numoffeatures << " features."<<endl;
    cout<<endl<<"Now please tyoe the number of the algorithm you want to use: " <<endl;
    cout<<endl<<"1 for forward selection"<<endl;
    cout<<endl<<"2 for backward selection"<<endl;
    cin>>numofalgo;

    return 0;
}