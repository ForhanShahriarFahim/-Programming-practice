#include<iostream>
#include<vector>
using namespace std;
void fillVector(vector<int>&);


void printVector(const vector<int>&);
//fillVector
void reverse1(const vector<int>&);

void replace(vector<int>&);

int main()
{
    vector<int>myvector;
    fillVector(myvector);
    printVector(myvector);
    reverse1(myvector);
    replace(myvector);

}
void fillVector(vector<int> &newmyVector)
{
    cout<<"Type in a list of numbers (-1 to stop): ";
    int input;
    cin>>input;
    while(input!=-1)
    {
        newmyVector.push_back(input);
        cin>>input;
    }
    cout<<endl;
}

void printVector(const vector<int>&newmyVector)
{
    cout<<"Vector: ";
    for(int i=0;i<newmyVector.size();i++)
    {
        cout<<newmyVector[i]<<" ";

    }
    cout<<endl;
}

void reverse1(const vector<int>&newmyVector)
{
    cout<<"Vector Reverse : ";
    for(int i = newmyVector.size();i>0;i--)
    {
        cout<<newmyVector[i-1]<<" ";
    }
    cout<<endl;
}

void replace(vector<int>&newmyVector)
{
    int old,replace;
    cout<<"Type in a number to be raplace with another no : ";
    cin>>old>>replace;
    for(int i=0;i<newmyVector.size();i++)
    {
        if(newmyVector[i]==old)
        {
            newmyVector[i] = replace;
        }
    }
    printVector(newmyVector);
    cout<<endl;
}
