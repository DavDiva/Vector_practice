//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//bool isOdd(int i)
//{
//	return ((i % 2) == 1);
//}
//
//int main()
//{
//	vector<int> vect;
//	vect.push_back(10);
//	vect.push_back(20);
//	vect.push_back(30);
//	vect.push_back(31);
//	vector<int>::iterator iter;
//	iter = find_if(vect.begin(), vect.end(), isOdd);/*find_if() Returns an iterator to the first element
//													in the range [first,last) for which pred returns true.
//												   If no such element is found, the function returns last.
//												   Unary function that accepts an element in the range as
//												   argumentand returns a value convertible to bool.
//												   The value returned indicates whether the element is considered
//												   a match in the context of this function.
//													The function shall not modify its argument.
//												   This can either be a function pointer or a function object.*/
//
//	if (iter != vect.end())
//	{
//		cout << "Found." << endl;
//	}
//	else
//	{
//		cout << "Not found." << endl;
//	}
//
//
//	return 0;
//}
