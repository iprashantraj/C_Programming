// //while loop
// #include <stdio.h>
// int main()
// {
//     int x=1;
//     while (x<=1000)
//     {
//         printf("%d\n",x);
//         x++;
//     }
//    return 0;
// }

// //do while loop
// #include <stdio.h>
// int main()
// {
//     int x=1;
//     do
//     {
//       printf("%d\n",x);
//       x++;
//     } while (x<=1000);
//     return 0;
// }

// //for loop
// #include <stdio.h>
// int main()
// {
//     int x;
//     for ( x=1; x<=1000; x++)
//     {
//         printf("%d\n",x);
//     }
//     return 0;
// }

// // for loop reversed number
// #include <stdio.h>
// int main()
// {
//     int x;
//     for(x=1000;x>=1;x--)
//     {
//         printf("%d\n",x);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int c=1,sum=0;
//     while (c<=1000)
//     {
//         sum=sum+c;
//         c=c+1;
//     }
//     printf("%d\n",sum);
//     return 0;
// }

#include <stdio.h>
int main()
{
  int n1=1,n2=1,n3=0,term=1;
  printf ("%d %d",n1,n2);
  while (term<=50)
  {
    n3=n2=n1;
    printf ("%d",n3);
    n1=n2;
    n2=n3;
    term++;
  }
  return 0;
}