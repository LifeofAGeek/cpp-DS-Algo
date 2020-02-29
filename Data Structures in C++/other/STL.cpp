#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,30};
    v.push_back(40);
    v.push_back(50);
    v.pop_back();
<<<<<<< HEAD

    cout<<"using iterator"<<endl;

    vector<int>::iterator i;
    for(i=v.begin();i!=v.end();i++)
        cout<<*i<<" ";

=======
    
    cout<<"using iterator"<<endl;
    
    vector<int>::iterator i;
    for(i=v.begin();i!=v.end();i++)
        cout<<*i<<" ";
        
>>>>>>> 1d9b2dc66422a8908ba8e2f98c3a2a9d8515c0f6
    cout<<"using loops";
    for(int x:v)
        cout<<endl<<x;
}
