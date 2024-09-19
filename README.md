# AtCoder-Line

The AtCoder railway line has N stations, numbered 1,2,…,N.

On this line, there are **inbound** trains that start at station 1 and stop at the stations 2,3,…,N in order, 
and **outbound** trains that start at station N and stop at the stations N−1,N−2,…,1 in order.

Takahashi is about to travel from station X to station Y using only one of the inbound and outbound trains.

Determine whether the train stops at station Z during this travel.

**Constraints**
-> 3 <= N <= 100
-> 1 <= X,Y,Z <= N
-> X,Y and Z are distinct
-> All input values are integers

**Output**
If the train stops at station Z during the travel from station  X to station Y, print YES; otherwise print NO;

Sample 1 -> 7, 6, 1, 3 = YES
Sample 2 -> 10, 3, 2, 9 = NO
Sample 3 -> 100, 23, 67, 45 = YES
