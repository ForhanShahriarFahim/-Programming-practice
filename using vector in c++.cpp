#include<iostream>
#include<vector>

using namespace std;
int main()
{
    //Foramt: vector<DataType> nameOfVector
    //myVector.push_back(value) ==> adds an element to the end of the vector (also resize it )
    //myVector.at(index) ==> return element at specified index number
    //myVector.size() ==> returns an unsigned int equal top the number of elements
    //myVector.begin() ==> read vector from the first element (index 0)
    //myVector.insert(myVector.begin() + integer,new value) ==> adds element before specified index number
    //myVector.erase(myVector.begin() + integer) ==> removes element at specified index number
    //myVector.clear() ==> remove all the element in the vector
    //myVector.empty() ==> returns boolean value if whether vactor is empty
    vector<int>myVector;

    myVector.push_back(3);
    myVector.push_back(7);
    myVector.push_back(4);
    myVector.push_back(8);
    myVector.push_back(4);

    cout<< "Vector: ";
    for(unsigned int i = 0; i<myVector.size();i++)
    {
        cout<< myVector[i]<<" ";
    }

    myVector.insert(myVector.begin()+4,5);

    cout<<endl<< "Vector: ";
     for(unsigned int i = 0; i<myVector.size();i++)
     {
         cout<<myVector[i]<<" ";

     }

     cout<<endl<< "Vector: ";
     myVector.erase(myVector.begin() + 3);

     for(unsigned int i = 0; i<myVector.size();i++)
     {
         cout<< myVector[i] << " ";
     }

     if(myVector.empty())
     {
         cout<<endl<<"Is Empty!";
     }
     else{
        cout<<endl<<"Is not empty";
     }


     myVector.clear();
     if(myVector.empty())
     {
         cout<<endl<<"Is Empty!";
     }
     else{
        cout<<endl<<"Is not empty";
     }

     cout<<endl;



}
