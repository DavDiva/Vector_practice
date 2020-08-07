//sort algorithm example

#include <iostream> // std::cout
#include <vector> // std::vector
#include <algorithm> // std::sort                                     
using namespace std;
                                                        //Sorts the elements in the range[first, last) into ascending order.

                                                        //The elements are compared using operator< for the first version, and comp for the second.
                                                        
							/* comp - Binary function that accepts two elements in the range as arguments, 
							and returns a value convertible to bool.The value returned indicates whether the element 
							passed as first argument is considered to go before the second in the specific strict weak ordering it defines.
                                                        The function shall not modify any of its arguments.
                                                        This can either be a function pointer or a function object.*/


struct A
{
	bool operator () (int i, int j)
	{
		return (i < j);
    }
}a_object;

bool func(int i, int j)
{
	return (i < j);
}





int main()
{
	vector<int>vect = { 50,4,44,6,10,25,55,67 };
	vector<int>::iterator iter;
	cout << "Initial vector: " << endl;
	for (int i : vect)
	{
		cout << i << endl;
	}
	cout << "Using func as comp,sorted first 4 elements: " << endl;
	sort(vect.begin(), vect.begin()+4, func);//using func as comp,sorted first 4 elements
	for (int i : vect)
	{
		cout << i << endl;
	}

	cout << "Using a_object as comp,sorted last 4 elements: " << endl;
	sort(vect.begin()+4, vect.end(), a_object);//using a_object as comp,sorted last 4 elements
	for (int i : vect)
	{
		cout << i << endl;
	}
	cout << "All sorted: " << endl;
	sort(vect.begin(), vect.end());//default sort
	for (int i : vect)
	{
		cout << i << endl;
	}


	return 0;

}
