#include <stdio.h>
struct times{
    int hours;
    int minutes;
    int second;
};
int main() {
    
    struct times time1, time2, result;
    
    printf("enter time in format (hh mm ss) : ");
    scanf("%d %d %d",&time1.hours,&time1.minutes,&time1.second);
    
    printf("enter time in format (hh mm ss) : ");
    scanf("%d %d %d",&time2.hours,&time2.minutes,&time2.second);
    
    result.hours = time1.hours + time2.hours;
    result.minutes = time1.minutes + time2.minutes;
    result.second = time1.second + time2.second;
    
    if(result.second >= 60)
    {
        result.second -= 60;
        result.minutes += 1;
    }
    if(result.minutes >= 60)
    {
        result.minutes -= 60;
        result.hours += 1;
    }
    
    printf("the new format is : %d : %d : %d ",result.hours,result.minutes,result.second);
    return 0;
}
