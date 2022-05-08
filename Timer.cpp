#include <iostream>
using namespace std;

int main()
{
    cout << "PRESS 1 for STOPWATCH" << endl;
    cout << "PRESS 2 for CLOCK" << endl;
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "THIS IS AN STOP WATCH !!!" << endl;
        cout << "ENTER VALUES OF HOURS MINUTES AND SECONDS TO CONTINUE-- :)" << endl;
    }
    if (n == 2)
    {
        cout << "\nTHIS IS AN CLOCK !!!" << endl;
        cout << "ENTER VALUES OF CURRENT HOURS MINUTES AND SECONDS TO CONTINUE-- :) " << endl;
        
    }
    int h, m, s;
    cin >> h >> m >> s;
    for (int i = 0; i <= h;)
    {
        if (h == 0 && m == 0 && s == 0)
        {
            break;
        }
        for (int j = 0; j <= m;)
        {
            if (h == 0 && m == 0 && s == 0)
            {
                break;
            }
            if (n == 1)
            {
                for (int k = 0; k <= s; s--)
                {
                    _sleep(1000);
                    cout << h << "h : " << m << "m : " << s << "s "
                         << "\r";

                    if (s == 0)
                    {
                        if (m != 0)
                        {
                            m--;
                            s = 60;
                        }
                        if (h != 0)
                        {
                            h--;
                            m = 59;
                        }
                    }
                    if (h == 0 && m == 0 && s == 0)
                    {
                        break;
                    }
                }
            }
            if (n == 2)
            {
                for (int k = 0; k <= s; s++)
                {
                    _sleep(1000);
                    cout << h << "h : " << m << "m : " << s << "s "
                         << "\r";

                    if (s == 60)
                    {
                        m++;
                        s = 0;

                        if (m == 60)
                        {
                            h++;
                            m = 0;
                        }
                        if (h == 24)
                        {
                            h = 0;
                            m = 0;
                            s = 0;
                        }
                    }
                }
            }
        }
    }
    cout << h << "h : " << m << "m : " << s << "s " << endl;
    cout << "TIMES UP !!!";
    return 0;
}