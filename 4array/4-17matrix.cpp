#include <iostream>
#include <iomanip>
using namespace std;
const int M = 3, P = 3, N = 2;
int a[M][P], b[P][N], c[M][N] = {0};
bool multimatrix(const int a[M][P], int arow, int acol, const int b[P][N], int brow, int bcol, int c[M][N], int crow, int ccol);
int main()
{
    int i, j;
    cout << "Please intput A:\n"; //输入矩阵A的元素
    for (i = 0; i < M; i++)
        for (j = 0; j < P; j++)
            cin >> a[i][j];
    cout << "Please intput B:\n"; //输入矩阵B的元素
    for (i = 0; i < M; i++)
        for (j = 0; j < P; j++)
            cin >> b[i][j];
    if (multimatrix(a, M, P, b, P, N, c, M, N))
        for (i = 0; i < M; i++)
        {
            for (j = 0; j < N; j++)
                cout << setw(5) << c[i][j];
            cout << endl;
        }
    else
        cout << "illegal matrix multiply.\n";
}
bool multimatrix(const int a[M][P], int arow, int acol, const int b[P][N], int brow, int bcol, int c[M][N], int crow, int ccol)
{
    if (acol != brow)
        return false; //判断参数合法性
    if (crow != arow)
        return false;
    if (ccol != bcol)
        return false;
    for (int i = 0; i < crow; i++) //矩阵相乘
        for (int j = 0; j < ccol; j++)
        {
            for (int k = 0; k < acol; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    return true;
}