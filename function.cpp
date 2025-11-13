#include <iostream>
using namespace std;

void myFunction(string fname)
{
  cout << fname << " Refsnes\n";
}

void Fcountry(string country = "Norway")
{
  cout << country << "\n";
}

int doubleGame(int x){
    return x * 2;
  }

int main()
{
  Fcountry("Sweden");
  Fcountry("India");
  Fcountry();
  Fcountry("USA");

  // myFunction("Liam");
  // myFunction("Jenny");
  // myFunction("Anja");

  /***************** Double of function ****************/

  for (int i = 1; i <= 5; i++)
  {
    cout << "Double of " << i << " is " << doubleGame(i) << endl;
  }

  return 0;
}