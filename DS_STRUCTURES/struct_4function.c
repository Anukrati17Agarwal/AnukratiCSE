#include <stdio.h>
#include <string.h>
struct time
{
    int hrs;
    int mins;
    int secs;
} t1, t2;

  void conversion(struct time t1 , struct time t2)
    {
        int sum_hrs, sum_mins, sum_secs;
        sum_hrs = t1.hrs + t2.hrs;
        sum_mins = t1.mins + t2.mins;
        sum_secs = t1.secs + t2.secs;

        sum_mins = sum_mins + sum_secs / 60;
        sum_secs = sum_secs % 60;
        sum_hrs = sum_hrs + sum_mins / 60;
        sum_mins = sum_mins % 60;

        printf("THE ANS IS: %d hrs %d mins %d secs \n", sum_hrs, sum_mins, sum_secs);
    }
void main()
{
    
    printf("ENTER THE FIRST TIME IN HOURS , MINS AND SECONDS:\n");
    scanf("%d%d%d", &t1.hrs, &t1.mins, &t1.secs);

    printf("ENTER THE SECOND TIME IN HOURS , MINS AND SECONDS:\n");
    scanf("%d%d%d", &t2.hrs, &t2.mins, &t2.secs);

    conversion(t1,t2);

}
