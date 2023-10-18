#include <stdio.h>
#include <stdlib.h>

int main () {
	int T1;
    int BoughtCups, EmptyCupsA;
    int TotalCups, EmptyCupsB;
    int ExchangeCups;

    scanf("%d", &T1);

    for(int i = 1; i <= T1; i++){
        scanf("%d %d", &BoughtCups, &EmptyCupsA);

        TotalCups = BoughtCups;
        EmptyCupsB = BoughtCups;

        while(EmptyCupsB >= EmptyCupsA){
            ExchangeCups = EmptyCupsB / EmptyCupsA;
            TotalCups += ExchangeCups;
            EmptyCupsB = ExchangeCups + (EmptyCupsB % EmptyCupsA);
        }

        printf("Case #%d: %d\n", i, TotalCups);
    }

    return 0;
}