
#include <bits/stdc++.h>
using namespace std;
void display(list<int>&lst){
    list<int> :: iterator it;
    for (it= lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }

}
int main(int argc, char const *argv[])
{
	list<int> list1;
	//list<int> list2;
	list1.push_back(5);
	list1.push_back(4);
	list1.push_back(7);
	list1.push_back(8);
	list1.push_back(9);

    display(list1);
	return 0;
}
