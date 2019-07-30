#include <stdio.h>
#define N 100

int main()
{
  int array[N], maximum,minimum, banyak, i, lokasi_array = 1;

  printf("Masukkan banyak data : ");
  scanf("%d", &banyak);

  printf("Masukkan %d data\n", banyak);

  for (i = 0; i < banyak; i++)

    scanf("%d", &array[i]);

  maximum = array[0];

  for (i = 1; i < banyak; i++)
  {
    if (array[i] > maximum)
    {
       maximum  = array[i];
       lokasi_array = i+1;
    }
  }

    minimum = array[0];
   for (i = 1; i < banyak; i++)
  {
    if (array[i] < minimum)
    {
       minimum  = array[i];
       lokasi_array = i+1;
    }
  }
    printf("Data maksimum berada pada indeks array ke-%d dengan nilai %d .\n", lokasi_array, maximum);
    printf("Data minimum berada pada indeks array ke-%d dengan nilai %d .\n", lokasi_array, minimum);
  return 0;
}
