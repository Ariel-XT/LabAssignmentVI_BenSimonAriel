#include <iostream>
#include <string>

using namespace std;

class car
{
public:
  car()
  {
    speed = 0;
    cout << "What is the cars year? ";
    cin >> year;
    cout << "What is the cars model? ";
    cin >> make;
    cout << "I'm in my " << year << " " << make << " Not so hot toaster." << endl;
  }
  int getSpeed(){return speed;}
  int getYear(){return year;}
  string getMake(){return make;}
  void accelerate()
  {
    speed = speed+5;
  }
  void brake()
  {
    speed = speed-5;
  }
private:
  int year, speed;
  string make;
};


int main()
{
  car obj1;
  cout << "\nI'm accelerating!\n" << endl;
  for (int i = 0; i < 5; ++i)
  {
    obj1.accelerate();
    cout << obj1.getSpeed() << endl;
  }
  cout << "\nNow I'm braking!\n" << endl;
  for (int i = 0; i < 5; ++i)
  {
    obj1.brake();
    cout << obj1.getSpeed() << endl;
  }

  return 0;
}
