#include <iostream>
using namespace std;

int main()
{
    int a[100][100];
    int r, c;
    cout << "enter row" << endl;
    cin >> r;
    cout << "enter col" << endl;
    cin >> c;




    // taking input of the arrays
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[j][i];
        }
    }
    cout << "done" << endl;




    // sum column wise
    int sumc = 0;
    int sumf = 0;
    int indexc = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sumc = sumc + a[j][i];
        }
        if (sumf < sumc)
        {
            sumf = sumc;
            indexc = i;
        }
        sumc = 0;
    }
    // cout<<"sum of row "<<i+1<<endl;
    // cout << "column " << sumf << " " << indexc << endl;




    // sum row wise
    int sumr = 0;
    int sumfr = 0;
    int indexr = 0;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            sumr = sumr + a[i][j];
        }
        if (sumfr < sumr)
        {
            sumfr = sumr;
            indexr = i;
        }
        sumr = 0;
        // cout<<"sum of column "<<i+1<<endl;
    }
    // cout << "row " << sumfr << " " << indexr << endl;




    // comparision ho rhi hardware_constructive_interference_size
    if(sumfr >= sumf){
        cout << "row "<< indexr << " "  << sumfr << endl;
    }else{
        cout << "column " <<indexc << " " << sumf << endl;
    }

}