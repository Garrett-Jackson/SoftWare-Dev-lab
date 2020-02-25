#include <iostream>

using namespace std;
void power(double base, int pwr);

int main()
{

    cout<<" Git Test  "<<endl;

    power(5.0,2);
	system("pause");
    return 0;
}
//--

void power(double base, int pwr)
{
    int result= 1;
    for(int i =0; i < pwr; i++)
    {
      result   =  base * result;
    }
  
    cout <<result <<endl;

}