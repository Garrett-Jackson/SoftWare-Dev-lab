#include <iostream>
using namespace std;
int power(double base, int pwr);

int main()
{

  int check;
    cout<<" Git Test  "<<endl;

    check = power(5.0,2);
    cout <<check <<endl;
  	system("pause");
    return 0;
}
//--

int power(double base, int pwr)
{
    int result= 1;
    for(int i =0; i < pwr; i++)
    {
      result   =  base * result;
    }
  
  return result;
}