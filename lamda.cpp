#include<bits/stdc++.h>
using namespace std;

int main()
{   //[capture_list](parameters)->return_type{ function body};

    auto f=[](){cout<<"Hello World!";};
    f();
    int s=[](int x,int y)->int{return(x+y);}(10,5);
    cout<<s<<endl;
}
