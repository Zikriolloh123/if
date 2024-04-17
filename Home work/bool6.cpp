#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<" a = ";
    cin>>a;
    cout<<" b = ";
    cin>>b;
    cout<<" c = ";
    cin>>c;
    if(a<b && b<c)
    {
        cout<<" adadi "<<c<<" az adadhoi "<<a<<" , "<<b<<" kalon ast "<<endl;
    }
    else
    {
        cout<<" adadho nodurust vorid karda shud "<<endl;
    }
    main();
}
