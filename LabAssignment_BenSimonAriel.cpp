#include <iostream>
#include <string>
#include <fstream>
#include <set>

using namespace std;

class Operation
{
public:
  Operation()
  {
    ifstream input("input.dat");
    if (!input)
    throw -1;

    input >> A >> B;
    cout << "Given these sets: A = (" << A << ") and B = (" << B << ")";
  }
  void subSet()
  {
    int x = 0;
    bool AofB = true;
    bool BofA = true;

    if (A.size() > B.size())
    AofB = false;

    else
    {
      for (int i = 0; i < B.size(); ++i)
      {
        for (int t = 0; t < A.size(); ++t)
        {
          if (B[i] == A[t])
            ++x;
        }
      }
      if (x != A.size())
       AofB = false;
    }

    if (B.size() > A.size())
    AofB = false;

    else
    {
      for (int i = 0; i < A.size(); ++i)
      {
        for (int t = 0; t < B.size(); ++t)
        {
          if (A[i] == B[t])
            ++x;
        }
      }
      if (x != B.size())
       BofA = false;
    }

    if (AofB == true)
      cout << "\nA is a subset of B --> True" << endl;
    else
      cout << "\nA is a subset of B --> false" << endl;

    if (BofA == true)
      cout << "B is a subset of A --> True" << endl;
    else
      cout << "B is a subset of A --> false" << endl;

  }
  void Union()
  {
    string C = A;

      for (int t = 0; t < B.size(); ++t)
      {
        if (A[t] != B[t])
          C.push_back(B[t]);
      }
   cout << "A + B = " << C << endl;
  }
  void Intersection()
  {
    string C;

    for (int i = 0; i < A.size(); ++i)
    {
      for (int t = 0; t < B.size(); ++t)
      {
        if (A[i] == B[t])
          C.push_back(B[t]);
      }
    }
    cout << "A ^ B = " << C << endl;
  }
  void Complement()
  {
    string C = A;
    string D = B;
    int x = 0;
    int y = 0;

    for (int i = 0; i < A.size(); ++i)
    {
      for (int t = 0; t < B.size(); ++t)
      {
        if (A[i] == B[t])
        {
          C[i] = ' ';
        }
      }
    }
    cout << "A - B = " << C << endl;

    for (int i = 0; i < B.size(); ++i)
    {
      for (int t = 0; t < A.size(); ++t)
      {
        if (B[i] == A[t])
        {
          D[i] = ' ';
        }
      }
    }
    cout << "B - A = " << D << endl;
  }
  //~Operation();
private:
  string A;
  string B;
};
int main()
{
  Operation obj1;
  obj1.subSet();
  obj1.Union();
  obj1.Intersection();
  obj1.Complement();
  return 0;
}
