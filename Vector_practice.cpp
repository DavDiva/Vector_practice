#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <ctime>
using namespace std;

int main()
{
    vector<int> vect{};
   int size = vect.size();
    cin >> size;
   
    int value;
    for (int i = 0; i < size; i++)
    {
        cin >> value;
        vect.push_back(value);
    }

    sort(vect.begin(), vect.end());
    for (int i = 0; i < size; i++)
    {
        cout<< vect[i];
    }

    vector<string>vect_str(10,"nothing");
    vect_str.push_back("one");
    vect_str.push_back("two");
    vect_str.push_back("three");
    vect_str[0] = "hello";
    vect_str.pop_back();
    vect_str.clear();
    if (vect_str.empty())
    {
        cout << "Vector is empty." << endl;
    }
    else 
    {
        
        for (int i = 0; i < vect_str.size(); i++)
        {
            cout << vect_str.at(i) << endl;
        }

    }
    vector<string>::iterator my_iterator;//declare iterator
    vector<string>::const_iterator iter;//declare const iterator(CANNOT change value of the element it points to)
    vect_str.push_back("I");
    vect_str.push_back("am");
    vect_str.push_back("C++");
    vect_str.push_back("Developer");
    for (iter = vect_str.begin(); iter != vect_str.end(); ++iter)
    {
        cout << *iter << endl;
    }
    cout << endl << endl << endl;
    my_iterator = vect_str.begin();
    *my_iterator = "We";
    my_iterator = vect_str.begin() + 1;
    *my_iterator = "are";
    my_iterator = vect_str.begin() + 3;
    *my_iterator = "Developers";
    for (iter = vect_str.begin(); iter != vect_str.end(); ++iter)
    {
        cout << *iter << endl;
    }
    cout << endl << endl << endl;
    cout << (*my_iterator).size() << endl;//number of letters in the element of the vector pointed by my_iterator
    my_iterator = vect_str.begin();
    cout << (*my_iterator).size() << endl;
    cout << my_iterator->size() << endl;//better way to call function from iterator
    cout << endl << endl << endl;
    
    vect_str.insert(my_iterator, "Great");
    for (iter = vect_str.begin(); iter != vect_str.end(); ++iter)
    {
        cout <<  *iter << endl;
    }
    cout << endl << endl << endl;
    vect_str.erase(vect_str.begin(), vect_str.begin()+2);
    for (iter = vect_str.begin(); iter != vect_str.end(); ++iter)
    {
        cout << *iter << endl;
    }
    cout << endl << endl << endl;
    

    //Algorithms STL
    my_iterator=find(vect_str.begin(), vect_str.end(), "are");//find(), arguments: range of search and value
    cout << *my_iterator;
    cout << endl << endl << endl;


    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(vect_str.begin(), vect_str.end());//random_shuffle() ramdomize elements of vector

    for (iter = vect_str.begin(); iter != vect_str.end(); ++iter)
    {
        cout << *iter << endl;
    }

    cout << endl << endl << endl;

    vector<int>game;
    vector<int>::const_iterator int_iter;
    cout << "Size: " << game.size() << endl;//size()
    cout << "Capacity: " << game.capacity() << endl;//capacity()
    game.push_back(1);
    game.push_back(2);
    game.push_back(3);
    game.push_back(4);
    game.push_back(5);
    random_shuffle(game.begin(), game.end());
    for (int_iter = game.begin(); int_iter != game.end(); int_iter++)
    {
        cout << *int_iter << endl;
    }

    string di = "Diana";
    random_shuffle(di.begin(), di.end());
    cout << di;
    cout << endl << endl << endl;

    sort(game.begin(), game.end());
    for (int_iter = game.begin(); int_iter != game.end(); int_iter++)
    {
        cout << *int_iter << endl;
    }
    cout << endl << endl << endl;

    cout << "Size: " << game.size() << endl;//size()
    cout <<"Capacity: "<< game.capacity() << endl;//capacity()
    game.push_back(6);
    game.push_back(7);
    game.push_back(8);
    cout <<"Size: "<< game.size() << endl;//size()
    cout << "Capacity: " << game.capacity() << endl;//capacity()
    cout << endl << endl << endl;


    game.reserve(15);//reserve()

    cout << "Size: " << game.size() << endl;//size()
    cout << "Capacity after reserve: " << game.capacity() << endl;//capacity()

    return 0;
    
}






