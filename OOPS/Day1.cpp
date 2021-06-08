#include<bits/stdc++.h>
using namespace std;

/*
Class - A data type with functions
Object - A variable of a Class

OOPs concepts :

1. Encapsulation - Concept to bundle data and related functions together.
2. Abstraction - Concept of hiding internal details and only showing the public interface.
3. Inheritance - Concept of Reusablity of code by putting the common logics in parent class and inheriting it in child class.
4. Polymorphism - Same name functions but multiple with functionalities - Static and Dynamic Polymorphism.
*/


/*
Constructors and Deconstructor in C++

Constructors :

1. They have same name as of class.
2. They don't have any return type.
3. They are called when object of an class is created.
4. If we do not create our own constructor, a default constructor is added by the compiler which fills random values.
5. Copy constructors are created by default.

Deconstructors :

1. It is called when object goes out of scope.
2. Objects are deconstructed in the reverse order of construction ie., LIFO.
3. Compiler adds a default deconstructor if not written one.
4. Default deconstructor doesn't take care of dynamic mem. deallocation.
5. We need to write our own deconstructor to delete dynamic mem. allocation(if any).
*/


class Point
{
private:
	int x, y;
public:
	// default constructor
	Point(){
		x = 0;
		y = 0;
	}
	// parametrized constructor
	Point(int xx, int yy){
		x = xx; // this->x = x; (to avoid name collision)
		y = yy; // this->y = y;
	}
	// copy constructor
	Point(const Point& P){
		this->x = P.x; // x = P.x
		this->y = P.y;	// y = P.y
	}
	// setter
	void set(int xx, int yy){
		x = xx;
		y = yy;
	}
	/*
	1. Another way - Initialiser constructor list
	2. Better in terms of performance
	3. Members are initialised once using Initialiser constructor list unlike first default then other constructors are called.

	Point() : x(0), y(0) {}
	Point(int xx, int yy) : x(xx), y(yy) {}
	*/
	// a normal method or getter ?
	void print(){
		cout<<"("<<x<<", "<<y<<")";
	}
	// de-constructor
	~Point(){
		print();
		cout<<" is destroyed.\n";
	}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

	Point p1(1,1);
	Point p2(p1); // defualt copy constructor - shallow copy
	// create you own copy constructor to have deep copy 
	Point p3 = p1; // not a copy constructor
	
	Point p4(10,11);

	return 0;
}


/*
"this" is a special pointer passed by compiler to access the object members that is currently
being acessed or the object on which we are making function call.
eg:-
void set(int x, int y){
	this->x = x;
	this->y = y;
}

We can chain functions by operator overloading.
eg:-
(((cout<<x)<<" ")<<y);
return ostream object which is chained with another object.

Also, this pointer is constant pointer so we cannot change this pointer else we'll
get compilation error.
*/

