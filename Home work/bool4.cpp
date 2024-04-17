#include<iostream>
using namespace std;
int main()
{   //bool 4;
    int a,b;
    cout<<" a = ";
    cin>>a;
    cout<<" b = ";
    cin>>b;
    if(a>2 && b>=3)
    {
        cout<<" adadi "<<a<<" az 2 kalon ast, va "<<" adadi "<<b<<" ba 3 barobar yo az 3 kalon ast "<<endl;
    }
    else if(a==2)
    {
        cout<<" adadi 2 ba "<<a<<" barobar ast "<<endl;
    }
    else
    {
        cout<<" nodurust adadi "<<a<<" az 2 xurd ast, va adadi "<<b<<" az 3 xurd ast "<<endl;
    }

    main();
}
