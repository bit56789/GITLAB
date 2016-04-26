#include <stdio.h>
void main()
{
  int WinLotteryNo[10] = {1522, 1711, 5515, 7233, 5614, 8876, 1215, 4232, 9155, 9995}; 
<<<<<<< HEAD
  float WinAmount[10] = {500000, 10000, 10000, 5000, 5000, 5000, 5000, 3000, 3000, 3000};
=======
  float WinAmount[10] = {500001, 10000, 10000, 5000, 5000, 5000, 5000, 3000, 3000, 3000};
>>>>>>> 8212b2cf06b6468ae9cc3c82957f27d1d95570c8
  int N = 10;
  int i, won; 
  
  int YourLotteryNo;  
   
  printf("Enter Number (0 to end): "); 
  scanf("%d", &YourLotteryNo); 
  while (YourLotteryNo != 0) 
  { 
    won = 0; 
    for (i=0;i<N && !won; i++) 
    {
       if (YourLotteryNo == WinLotteryNo[i]) 
       {
<<<<<<< HEAD
          printf("Kidding You Won %8.2f baht\n", WinAmount[i]); 
=======
          printf("Kidding You Won %8.2f baht\n", WinAmount[i]); 
>>>>>>> 97df704817f63f82efded7b96d94003306d684ad
          won = 1;
       }
    }
    if (!won) 
      printf("Congratulations Lottery Number %4d did not win\n", YourLotteryNo); 
    printf("Enter your Lottery Number (0 to end): "); 
    scanf("%d", &YourLotteryNo); 
  }
  printf("GOODBYE");
  scanf("%d", &i);
}
