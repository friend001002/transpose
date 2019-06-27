#include <iostream>

using namespace std;

template<size_t r, size_t c = r>
void Print(double in[r][c])
{
  for (size_t i {}; i < r; ++i)
  {
    for (size_t j {}; j < c; ++j)
    {
      cout << in[i][j] << '\t';
    }

    cout << endl;
  }

  cout << endl;
}

template<size_t r, size_t c = r>
void Transpose(double in[r][c], double out[c][r])
{
  for (size_t i{}; i < r; ++i)
  {
    for (size_t j{}; j < c; ++j)
    {
      out[j][i] = in[i][j];
    }
  }
}

int main()
{
  double d[3][4] = {  { 1.0,  2.0,  3.0,  4.0 } 
                    , { 5.0,  6.0,  7.0,  8.0 } 
                    , { 9.0, 10.0, 11.0, 12.0 }};

  Print<3, 4>(d);

  double t[4][3];

  Transpose<3, 4>(d, t);

  Print<4, 3>(t);

  cin.get();

  return 0;
}
