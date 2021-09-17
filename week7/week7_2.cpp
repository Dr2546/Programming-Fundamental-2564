#include<iostream>
#include<vector>

using namespace std;

main()
{
    int n;
    cin >> n;
    vector<vector<int>> ptr;
    
    int mnum = n*(n*n + 1)/2;

    for(int i=0;i<n;i++)
    {
        vector<int> d;
        for(int j=0;j<n;j++)
        {
            int dum;
            cin >> dum;
            d.push_back(dum);
        }
        ptr.push_back(d);
    }
    for(int i=0;i<n;i++)
    {
        int sum1 = 0,sum2 = 0;
        for(int j=0;j<n;j++)
        {
            sum1 += ptr[i][j];
            sum2 += ptr[j][i];
        }
        if(sum1 != mnum || sum2 != mnum)
        {
            cout << "No";
            return 0;
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1 += ptr[i][i];
        sum2 += ptr[n-i-1][i];
    }
    if(sum1 != mnum || sum2 != mnum)
        {
            cout << "No";
            return 0;
        }
    cout << "Yes";
    return 0;

}