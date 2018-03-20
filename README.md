# Towers-of-Henoi
It is the program which helps you to know the actual logic of the game "Tower's of Henoi".
//
                                  README

 Have you ever played a game of towers of Hanoi? In this game, three towers are given
and one of the  tower is having a stack of disks in decreasing size of disk. We have to 
transfer these disks to the destination tower with the help of auxiliary tower. There are 
some rules to transfer disks
1. Only one disk can be moved from one tower(peg) to another.
2. At any moment of time the larger disc should not kept over smaller one and
3. A disk can be moved from top only.
        You might have seen this kinds of games in some reality shows. You might
 have played this game without knowing the actual technique. 
       Tower of Henoi is the mathematical puzzle and the it's objective is to move entire 
stack into another rod. Tower of Henoi is the example for recursive algorithm.

Time Complexity of Towers of Hanoi:
Let  the time required for n disks is T(n).
There are  two recursive call for n-1 disks and one constant time required to move a disk from ‘A’ to ‘E’ be  Q1. Therefore,
T(n)=2T(n-1)+Q1
T(0)=Q2, a constant
T(1)=2Q2+Q1
Coefficient of Q1=2^n
Coefficient of Q2=2^n -1, therefore
Time complexity is O(2^n) . It has exponential time complexity . 

Space complexity Of Towers of Hanoi:

Space Complexity of each call is independent of n  i.e., constant .Let  it be k.
When we do the 2nd recursive call 1st recursive call is over. So we can reuse the space of 1st call for 2nd  call. Hence,
T(n)=T(n-1)+k
T(0)=k
T(1)=2k
So   Space complexity is O(n).


