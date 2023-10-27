#include <iostream>
using namespace std;
int main()
{
   
    int size=0;
    int i;
    char str [20];
    cout<<"Type Your Name: ";
    cin.get(str,20);
    cout<<"Result: ";
    cout<<str<<endl;
    for (i=0;str[i]!='\0';i++){
        size++;
    }

    cout<<"lenght= "<<size;
}
 