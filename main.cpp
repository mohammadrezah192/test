#include <iostream>
using namespace std;
int main()
{
    int n=0 , k=0 , a[101][101] , t1=0 , t0=0 ;

    cin >> n >> k;
    for( int i=1; i<=n ; i++ )
    {
        for( int j=1; j<=n ; j++ )
        {
            cin >> a[i][j];
        }
    }
    while(k>0)
    {
        for(int i=1 ; i>0 && i <= n ; i++)
        {
            for(int j=1 ; j>0 && j <= n ; j++)
            {
                if (a[i][j + 1] == 1)
                {
                    t1++;
                }
                else
                {
                    t0++;
                }
                if (a[i + 1][j] == 1)
                {
                    t1++;
                }
                else
                {
                    t0++;
                }
                if (a[i + 1][j + 1] == 1)
                {
                    t1++;
                }
                else
                {
                    t0++;
                }
                if (a[i - 1][j - 1] == 1)
                {
                    t1++;
                }
                else
                {
                    t0++;
                }
                if (a[i][j - 1] == 1)
                {
                    t1++;
                }
                else
                {
                    t0++;
                }
                if (a[i - 1][j] == 1)
                {
                    t1++;
                }
                else
                {
                    t0++;
                }
                if (a[i + 1][j - 1] == 1)
                {
                    t1++;
                }
                else
                {
                    t0++;
                }
                if (a[i - 1][j + 1] == 1)
                {
                    t1++;
                }
                else
                {
                    t0++;
                }
                if (t1 > t0)
                {
                    a[i][j] = 1;
                }
                else
                {
                    a[i][j] = 0;
                }
                cout << a[i][j] << " ";
            }
        }
        k--;
    }
}
