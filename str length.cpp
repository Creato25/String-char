#include<iostream>
using namespace std;

int main()
{
    int i, count=0;
    string str;
    cin>>str;
    for(i=0; str[i] != '\0'; i++)
    {
    count++;
    }
    cout<<"Length of the string is :"<<count<<endl;
    return 0;
}
