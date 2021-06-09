#include<bits/stdc++.h>
using namespace std;

/*
Static Members in C++

1. static data members, or
2. static member functions
3. these are created once and shared in whole code.
4. static members are also called class members and are shared among all objects of a class
5. static member functions are used to modify & access static data members.
6. Thus, static members are special members that are shared among all objects created once and outside the class.
7. static functions are not allowed to access the non-static part of class, they can only access static data.
8. they don't have 'this' pointer coz they can be called by classname anywhere like player::active_player or player::getCount().
*/


class player
{
private:
	static int active_players;
public:
	player() { active_players++; }
	~player() { active_players--; }
	// to modify and access private static data members
	static int getCount(){
		return active_players;
	}
};

// to access class variable -> ::
int player::active_players = 0;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

	player p1;
	cout<<p1.getCount()<<endl;
	player p2;
	cout<<p2.getCount()<<endl;
	return 0;
}

