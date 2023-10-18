#include <iostream>  
#include <math.h>
#include <time.h>

using namespace std;  
int main() 
{
  float num_tries = 0;
  float x = 0;
  float total_num_elements = 0;
  float total = 0;
  srand(time(NULL));
  for (int i=0; i<10000000; i++)
  {
    x = x + static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    num_tries++;
    if (x >= 1.0)
    {
      total = total + num_tries;
      x = 0;
      num_tries = 0;
      total_num_elements++;
    }
  }

  float total_num_elements2 = 0;
  float total2 = 0;
  for (int i=0; i<10000000; i++)
  {
    x = x + static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    num_tries++;
    if (x >= 1.0)
    {
      total2 = total2 + num_tries;
      x = 0;
      num_tries = 0;
      total_num_elements2++;
    }
  }

  float total_num_elements3 = 0;
  float total3 = 0;
  for (int i=0; i<10000000; i++)
  {
    x = x + static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    num_tries++;
    if (x >= 1.0)
    {
      total3 = total3 + num_tries;
      x = 0;
      num_tries = 0;
      total_num_elements3++;
    }
  }

  float total_num_elements4 = 0;
  float total4 = 0;
  for (int i=0; i<10000000; i++)
  {
    x = x + static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    num_tries++;
    if (x >= 1.0)
    {
      total4 = total4 + num_tries;
      x = 0;
      num_tries = 0;
      total_num_elements4++;
    }
  }

  float total_num_elements5 = 0;
  float total5 = 0;
  for (int i=0; i<10000000; i++)
  {
    x = x + static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    num_tries++;
    if (x >= 1.0)
    {
      total5 = total5 + num_tries;
      x = 0;
      num_tries = 0;
      total_num_elements5++;
    }
  }
  
  cout << ((total+total2+total3+total4+total5)/(total_num_elements+total_num_elements2+total_num_elements3+total_num_elements4+total_num_elements5)) << endl;
  cout << "Number gets closer to Eulers #: e (2.71828)" << endl;
}  