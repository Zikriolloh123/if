#include<iostream>
using namespace std;
int main()
{
    int percent,a;
    cout<<" bali xudro guzored";
    cin>>percent;
    if(percent>=90 && percent<=100)
    {
      cout<<" A = ";
      cout<<percent;
    }
    else if(percent>100 || percent<0)
    {
        cout<<" Teacher you can not ";
    }
    else if(percent<65 && percent>=50)
    {
        cout<<" bahoi shumo 3";
    }
    else if(percent<50)
    {
        cout<<" bahoi shumo 2 ";
    }
    else
    {
        cout<<" shumo bahoi az imkon berun guzoshted";
    }
    main();
}
