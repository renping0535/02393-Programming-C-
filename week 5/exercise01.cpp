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
    int sum = 0;
    // element wise product
    if(sizeA>=sizeB)
    {
        for(int i = 0;i<sizeB;i++)
            sum = sum+vecA.at(i)*vecB.at(i);
        cout << sum;
    }
    else
    {
        for(int i = 0;i<sizeA;i++)
            sum = sum+vecA.at(i)*vecB.at(i);
        cout << sum;
    }

    return 0;
}
