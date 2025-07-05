#include <iostream>

using namespace std;

int main()
{
    int qs[4], ingredient[4], q;
    cin >> qs[0] >> qs[1] >> qs[2] >> qs[3];
    cin >> ingredient[0] >> ingredient[1] >> ingredient[2] >> ingredient[3];
    cin >> q;

    int cookie = 0;

    for(int j = 0; j < q; j++)
    {
        int cq, i;
        cin >> cq >> i;
        switch (cq)
        {
        case 1:
            if(qs[0] >= ingredient[0] * i && qs[1] >= ingredient[1] * i && qs[2] >= ingredient[2] * i && qs[3] >= ingredient[3] * i)
            {
                cookie += i;
                cout << cookie << endl;
                for(int k = 0; k < 4; k++)
                {
                    qs[k] -= ingredient[k] * i;
                }
            }
            else
            {
                cout << "Hello, siumii" << endl;
            }
            break;
        case 2:
            qs[0] += i;
            cout << qs[0] << endl;
            break;
        case 3:
            qs[1] += i;
            cout << qs[1] << endl;
            break;
        case 4:
            qs[2] += i;
            cout << qs[2] << endl;
            break;
        case 5:
            qs[3] += i;
            cout << qs[3] << endl;
            break;
        
        default:
            break;
        }
    }
    // cout << qs[0] << qs[1] << qs[2] << qs[3];
}