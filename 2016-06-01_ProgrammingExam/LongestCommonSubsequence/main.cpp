#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s1, s2;
    while(cin >> s1 >> s2)
    {
        vector<vector<int> > v(s1.length()+1,vector<int>(s2.length()+1,0));



        for(int i = 1; i<= s1.length() ; i++ )
        {
            for(int j = 1; j<= s2.length() ; j++ )
            {
                if(s1[i-1] == s2[j-1])
                {
                    v[i][j] =  v[i-1][j-1] +1;
                }
                else
                {
                    if(v[i][j-1] > v[i-1][j])
                        v[i][j]  = v[i][j-1];
                    else
                        v[i][j] = v[i-1][j];
                }
            }
        }
            cout << v[s1.length()][s2.length()] << endl;


    }

    return 0;
}
