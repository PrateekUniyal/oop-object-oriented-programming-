#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cout<<"Enter number of rows and columns :";
    cin>>r>>c;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i>1&&i<c&&j>1&&j<c)
            cout<<" ";
            else if(i==1 || i==9)
            cout<<"*";
            else
            cout<<"*";

        }
        cout<<"\n";
    }
}
