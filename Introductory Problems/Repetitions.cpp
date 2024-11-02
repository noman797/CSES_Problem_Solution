#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    string s;
    cin >> s;
    int size = s.size();
    int mx = 0;
 
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'A')
        {
 
            b = 0;
            c = 0;
            d = 0;
            a++;
        }
        else if (s[i] == 'C')
        {
 
            a = 0;
            c = 0;
            d = 0;
            b++;
        }
        else if (s[i] == 'G')
        {
 
            a = 0;
            b = 0;
            d = 0;
            c++;
        }
        else if (s[i] == 'T')
        {
 
            a = 0;
            b = 0;
            c = 0;
            d++;
        }
 
        if (a > mx)
            mx = a;
        if (b > mx)
            mx = b;
        if (c > mx)
            mx = c;
        if (d > mx)
            mx = d;
    }
 
    cout << mx << endl;
 
    return 0;
}
