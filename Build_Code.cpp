#include <bits/stdc++.h>
using namespace std;
void io_setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main()
{   
    io_setup();
    int a;
    int b;
    cin >> a;
    cin >> b;

    cout << a + b;
}