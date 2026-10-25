
#include <stdio.h>

void towerOfHanoi(int n, char source, char helper, char destination)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, destination, helper);       // n-1 disk are moved  from A > B

    printf("Move disk %d from %c to %c\n", n, source, destination);

    towerOfHanoi(n - 1, helper, source, destination);
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
