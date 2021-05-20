/*Canada Cosmos Control has received a report of another incident. They believe that an alien has illegally entered our space. A person who witnessed the appearance of the alien has come forward to describe the alien’s appearance. It is your role within the CCC to determine which alien has arrived. There are only 3 alien species that we are aware of, described below:

TroyMartian, who has at least 3 antenna and at most 4 eyes;
VladSaturnian, who has at most 6 antenna and at least 2 eyes;
GraemeMercurian, who has at most 2 antenna and at most 3 eyes.*/

/*The first line contain the number of antenna that the witness claimed to have seen on the alien. 
The second line contain the number of eyes seen on the alien.*/

/*The output will be the list of aliens who match the possible description given by the witness.
If no aliens match the description, there is no output.*/

#include <stdio.h>

int main(){
    int num_antenna;
    int num_eyes;

    scanf("%d",&num_antenna);
    scanf("%d",&num_eyes);

    if ((num_antenna>=3)&&(num_eyes<=4))
    {
        printf("TroyMartian\n");
    }

    if ((num_antenna<=6)&&(num_eyes>=2))
    {
        printf("VladSaturnian\n");
    }

    if ((num_antenna<=2)&&(num_eyes>=2))
    {
        printf("GraemeMercurian");
    }

    return 0;
}