#include <iostream>
#include <vector>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char in_char;
    int in_num;
    vector<int> vecA;
    vector<int> vecB;

    int flag = 1;
    while(flag)
    {
        in_char = getchar();
        if(in_char == 'a')
        {
            cin >> in_num;
            vecA.push_back(in_num);
        }
        if(in_char == 'b')
        {
            cin >> in_num;
            vecB.push_back(in_num);
        }
        if(in_char == '\n')
            flag = 0;
    }
    // check the size of vecA and vecB
    int sizeA = vecA.size();
    int sizeB = vecB.size();
    if(sizeA>=sizeB)
    {
        for(int i = 0;i<sizeB;i++)
            cout << vecA.at(i) << " " <<vecB.at(i)<< " ";
        for(int i = sizeB;i<sizeA;i++)
            cout << vecA.at(i) << " ";
    }
    else
    {
        for(int i = 0;i<sizeA;i++)
            cout << vecA.at(i) << " " <<vecB.at(i)<< " ";
        for(int i = sizeA;i<sizeB;i++)
            cout << vecB.at(i) << " ";
    }

    return 0;
}
