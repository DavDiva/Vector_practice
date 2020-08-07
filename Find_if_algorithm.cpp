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
//bool isDefNum(int i)
//{
//	return ((i / 4) == 3);
//}
//int main()
//{
//	vector<int> vect;
//	vect.push_back(10);
//	vect.push_back(20);
//	vect.push_back(10);
//	vect.push_back(30);
//	vect.push_back(10);
//	vect.push_back(31);
//	vect.push_back(10);
//	vector<int>::iterator iter;
//	iter = find_if(vect.begin(), vect.end(), isDefNum);/*find_if() Returns an iterator to the first element
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
//	int num = count(vect.begin(), vect.end(), 10);//count() Count appearances of value in range
//	                                              //Returns the number of elements in the range[first, last) that compare equal to val.
//
//	cout << num << endl;
//
//	return 0;
//}
