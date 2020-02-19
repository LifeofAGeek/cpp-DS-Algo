#include<iostream>
#include<algorithm>
using namespace std;

void findMaxGuests(int arrl[], int exit[], int n)
{
sort(arrl, arrl+n);
sort(exit, exit+n);

int guests_in = 1, max_guests = 1, time = arrl[0];
int i = 1, j = 0;

while (i < n && j < n)
{
	// If next event in sorted order is arrival,
	// increment count of guests
	if (arrl[i] <= exit[j])
	{
		guests_in++;

		// Update max_guests if needed
		if (guests_in > max_guests)
		{
			max_guests = guests_in;
			time = arrl[i];
		}
		i++; //increment index of arrival array
	}
	else // If event is exit, decrement count
	{ // of guests.
		guests_in--;
		j++;
	}
}

cout << "Maximum Number of Guests = " << max_guests
		<< " at time " << time;
}

int main()
{
	int arrl[] = {1, 2, 10, 5, 5};
	int exit[] = {4, 5, 12, 9, 12};
	int n = sizeof(arrl)/sizeof(arrl[0]);
	findMaxGuests(arrl, exit, n);
	return 0;
}
