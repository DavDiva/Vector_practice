//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//                                                    /* find() Returns an iterator to the first element in the range[first, last) 
//                                                    that compares equal to val.If no such element is found, the function returns last.*/
//int main()
//{
//	int array[] = { 2,3,6,7,90,55 };
//	
//	int* p;
//    p=find(array, array + 6, 55);//the second argument of find() needs the position of the element after the last one
//	if (p != array+5)
//	{
//		cout << "Found." << endl;
//	}
//	else
//	{
//		cout << "Not found" << endl;
//	}
//
//	vector<int> vect(array, array + 6);//the same but implemented by the container
//	vector<int>::iterator iter;
//	iter = find(vect.begin(), vect.end(), 90);
//	if (iter != vect.end())
//	{
//		cout << "Found." << endl;
//	}
//	else
//	{
//		cout << "Not found" << endl;
//	}
//	
//
//
//	return 0;
//}
