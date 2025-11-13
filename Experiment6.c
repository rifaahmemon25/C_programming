// Name :- Rifaah Memon
// Class : Computer Enginnering
// Division :- D
// UIN :- 251P119

#include <stdio.h>

void Counter()
{
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}

int main()
{
    Counter();
    Counter();
    Counter();

    return 0;
}
