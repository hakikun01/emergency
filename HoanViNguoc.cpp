// #include<bits/stdc++.h>

// using namespace std;

// bool check[15] = {};
// int n, a[15] = {};

// void print()
// {
//     for (int i = n; i ; --i) cout << a[i];
//     cout << ' ';
// }
 
// void Try(int i)
// {
//     for (int j = n; j; --j)
//     {
//         if (!check[j])
//         {
//             a[i] = j;
//             check[j] = 1;
//             if(i == 1) print();
//             else Try(i - 1);
//             check[j] = 0;
//         }
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         cin >> n;
//         Try(n);
//         cout << endl;
//     }
//     return 0;
// }

// Hoan Vi Nguoc co dau phay

#include<bits/stdc++.h>

using namespace std;

bool check[15] = {};
int n, a[15] = {};
int dem;
void print()
{
    for (int i = n; i ; --i) cout << a[i];
}
 
void Try(int i)
{
    for (int j = n; j; --j)
    {
        if (!check[j])
        {
            a[i] = j;
            check[j] = 1;
            if(i == 1) 
            {
                print();
                dem--;
                if(dem>0) cout <<",";
            }
            else Try(i - 1);
            check[j] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        dem = 1;
        for(int i = 1; i <= n; i++)
            dem*=i;
        Try(n);
        cout << endl;
    }
    return 0;
}