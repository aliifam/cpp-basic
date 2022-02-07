#include <iostream>
#include <array>

using namespace std;

int main() {

    array<int, 11> score;

    cout << "menampilkan grafik nilai "<< score.size() << endl << endl;

    for (int i = 0; i < score.size(); i++)
    {
        cout << "jumlah mahasiswa dengan nilai  ";
        if (i == 0)
        {
            cout << "0 - 9 = ";

        } else if (i == 10)
        {
           cout << "100 = ";

        } else
        {
            cout << i * 10 << " - " << (i * 10) + 9 << " = ";
        }
        cin >> score[i];
    }

    cout << endl;

    cout << "Grafik nilai siswa" << endl;

    for (int i = 0; i < score.size(); i++)
    {
        if (i == 0)
        {
            cout << "nilai 0 - 9   = ";
        } else if (i == 10)
        {
            cout << "nilai 100     = ";
        } else
        {
            cout << "nilai "<< i * 10 << " - " << (i * 10) + 9 << " = ";
        }

        for (int j = 0; j < score[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}