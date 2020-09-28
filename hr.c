#include <stdio.h>

int main()
{
   
    int emp = 0, i, j, temp, ind,a, min;
    char *b;
   
 
 printf("enter the number of employee : ");

 scanf("%d", &emp);
 
  char *goodies[] = {"Fitbit Plus", "IPods", "MI Band", "Cult Pass", "Macbook Pro", "Digital Camera","Alexa","Sandwich Toaster","Microwave Oven","Scale"};
   int price[]= {7980,22349,999,2799,229900,11101,9999,2195,9800,4999};

  int n = 10;
  for (i = 0; i < n; i++) 
        {
 
            for (j = i + 1; j < n; j++)
            {
 
                if (price[i] > price[j]) 
                {
 
                    a =  price[i];
                    price[i] = price[j];
                    price[j] = a;
                    b = goodies[i];  
                    goodies[i] = goodies[j];
                    goodies[j] = b;
                }
 
            }

        }

  
 
  i= 0;
  temp = 0;
  ind = 0;
  while (i < n) {
   j = i + (emp - 1);
   if (j < n) {
      

     min= price[j] - price[i];

     if (min < temp || temp == 0) {
       temp = min;
       
       
       ind = i;
       
       
     }
   }
   i++;
  }
  printf("Here the goodies that are selected for distribution are:\n");
  for (i = ind; i < ind + emp; i++) {
   printf("%s : %d\n", goodies[i], price[i]);
  }
  printf("And the difference between the chosen goodie with highest price and the lowest price is %d", temp);
}
