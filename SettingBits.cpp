#include<iostream>
using namespace std;
int main()
{
    int i=80;
    int bit_to_be_set,set,reset;
    cout << "Enter the bit to be set: ";
    cin >> bit_to_be_set;
    set=i|(1<<bit_to_be_set);
    cout << "Enter the bit to be reset: ";
    cin >> reset;
    reset=i&(~(1<<reset));
    cout << " The number after change is :"<<set<<endl;
    cout << "The number before change :"<<reset<<endl;
    
}
