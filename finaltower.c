#include<stdio.h>

// n represents the number of disks
// A represents the starting disk
// B represents the auxiliary disk
// E represents the destination(End) disk.
void TowerOfHenoi(int n,char from,char to,char aux)
  {

    //Check whether disk is inserted, if yes,recursively call the function

        if(n>=1)

          {


            // first recursive call moves n-1 disks from initial peg B to auxiliary A using E.
            //After that call n-1 disks are in auxiliary A tower and the beginning tower B contains the nth disk i.e largest disk
            //Now move the disk from "B" to end tower(destination) "E".
             TowerOfHenoi(n-1,from,aux,to);
             printf("Move disk %d from %c to %c\n",n,from,to);
             // Call  TowerOfHenoi n-1 disk from auxiliary A  to E peg using B.
             TowerOfHenoi(n-1,aux,to,from);
         }


        // after all these the Peg "E" contains all disks in order of size.

   }
int main()
  {
      int n;

      printf("Enter the number of disks\n");
      scanf("%d",&n);
      // Call the function of Tower of Henoi
      TowerOfHenoi(n,'A','E','B');
      return 0;
  }


