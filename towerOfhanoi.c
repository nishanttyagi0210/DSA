#include <stdio.h>
 int count = 0;
// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{    
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
		return;
	}else
	towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
	printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
	towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
count++;
}

int main()
{   
	int n = 9; // Number of disks
	towerOfHanoi(n, 'A', 'C', 'B'); 
	printf("\nTotal no. of steps are %d\n" , count);// A, B and C are names of rods
	return 0;
}
