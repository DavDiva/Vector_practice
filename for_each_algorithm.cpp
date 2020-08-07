//for_each algorithm example
#include <algorithm> //std::for_each
#include <iostream>// std::cout
#include <vector>//std::vector

using namespace std;


void showString(string str)
{
	cout << str << endl;
}

class FlowerShop
{
public:
	void operator() (string str)
	{
		cout << str << endl;
	}
}shopKiev;



int main()
{
	vector<string>vect_str{ "rose", "tulip", "cammomile","pansy" };
	for_each(vect_str.begin(),vect_str.end(), showString);//using function pointer cout each element of vector vect_str to the screen
	for_each(vect_str.begin(), vect_str.end(), shopKiev);//using function object cout each element of vector vect_str to the screen
	
	

	return 0;
}