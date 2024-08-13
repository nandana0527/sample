#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"enter the alphabet";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        cout<<c<<"vowel";
    }
    else
    {
        cout<<c<<"consonant";
    }
}