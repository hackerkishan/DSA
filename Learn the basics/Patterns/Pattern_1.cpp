#include<iostream>
using namespace std;

void pattern_1(int n)
{
    for (int i = 1; i<=n; i++)
    {
        for (int j=1;j<=n; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main() {
    int n;
    cin>>n;
    pattern_1(n);
    return 0;
}
