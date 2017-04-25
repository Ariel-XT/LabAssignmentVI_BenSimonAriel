#include <iostream>
#include <string>

using namespace std;

class RomanType
{
public:
  RomanType()
  {
    sum = 0;
    romanNum = "";
  }
  void print()
  {
    cout << "The Equivalent of the Roman Numberal " << romanNum << " is " << sum << endl;
  }
  int convert()
  {
                     int length = romanNum.length();

                     int previous = 0;
                     bool error = false;
                     int nIndex = 0;
                     sum = 0;
                     while( (error == false) && (nIndex < length) )
              {
             switch(romanNum[nIndex])
             {
                   case 'M':
                            sum += 1000;
                  if(previous < 1000)
                  {
               sum -= 2 * previous;
                  }
                  previous = 1000;
                  break;
                 case 'D':
                  sum += 500;
                  if(previous < 500)
                  {
                sum -= 2 * previous;
                  }
                  previous = 500;
                  break;
                 case 'C':
                  sum += 100;
                  if(previous < 100)
                  {
                 sum -= 2 * previous;
                  }
                  previous = 100;
                  break;
                case 'L':
                  sum += 50;
                  if(previous < 50)
                  {
                sum -= 2 * previous;
                  }
                  previous = 50;
                  break;
                case 'X':
                  sum += 10;
                  if(previous < 10)
                  {
                  sum -= 2 * previous;
                  }
                  previous = 10;
                  break;
                case 'V':
                  sum += 5;
                  if(previous < 5)
                  {
                sum -= 2 * previous;
                  }
                         previous = 5;
                  break;
                case 'I':
                  sum += 1;
                  if(previous < 1)
                  {
                 sum -= 2 * previous;
                  }
                  previous = 1;
                  break;
                      default:
                           cout << romanNum[nIndex] << " is not a Roman Numeral!" << endl;
                           error = true;
                           sum = 0;
                } // switch
                              nIndex++;
                     } // while
                     return sum;
        }
  string getRomanNum(){return romanNum;}
  void setRomanNum(string input){romanNum = input;}
  int getNum(){return sum;}
private:
  string romanNum;
  int sum;

};

int main()
{
  string copy;
  cout << "Enter a roman number : ";
  getline(cin, copy);
  RomanType obj1;
  obj1.setRomanNum(copy);
  obj1.getRomanNum();
  obj1.convert();
  obj1.print();


  return 0;
}
