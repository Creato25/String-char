#include<iostream>
using namespace std;

int main()
{
    int i,j, count=0;
    string str,strrev;
    cin>>str;
    while(str[count] != '\0')
    {
        count++;
    }
    j=count-1;
    for (i = 0; i <= count; i++) 
    {
        strrev[i] = str[j];
        j--;
    }
    cout<<strrev<<endl;
}