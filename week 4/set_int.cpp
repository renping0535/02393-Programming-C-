#include <iostream>
#include <set>
#include <string>

using namespace std;

enum action{add, del, qry, quit, none};

action str2action(string s)
{
    if(s=="add") return add;
    if(s=="del") return del;
    if(s=="quit") return quit;
    if(s=="qry") return qry;
    return none;
}

int main()
{
    // define a "bag_set"
    set<int> bag_set;
    int input_data;

    int flag = 1;
    while(flag)
    {
        string input_act;
//        cout << "please input your action:" << endl;
        cin >> input_act;
        action act = str2action(input_act);


        switch(act)
        {
        case add:
            {
                // add an input data-----insert
                cin >> input_data;
                bag_set.insert(input_data);
                break;
            }
        case del:
            {
                cin >> input_data;
                bag_set.erase(input_data);
                break;
            }
        case qry:
            {
                cin >> input_data;
                if(bag_set.find(input_data)!=bag_set.end())
                    cout << "T";
                else
                    cout << "F";
                break;
            }
        case quit:
            {
                flag = 0;
                break;
            }
        case none:
            break;
        }
    }
    return 0;
}
