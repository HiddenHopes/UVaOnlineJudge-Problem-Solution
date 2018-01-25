/* A program to find day of a given date. Almost same two methods are used:
   One is for before 1752 Sep 2. Another is for after 1752 Sep 14.*/

#include<stdio.h>
bool isLeapYear(int yy){
    if(yy<1753) return yy % 4 == 0;
    else return yy % 4 == 0 && (yy % 100 != 0 || yy % 400 == 0);
}
bool isDateValid(int dd,int mm, int yy){
    int m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(isLeapYear(yy)) m[2]+=1;
    if(dd>m[mm]||mm>12) return false;
    if(yy==1752&&mm==9){
        if(dd>2&&dd<14) return false;
    }
    return true;
}
/* here is the method for after 1752 Sep 14.
   returns 0 for sunday, 1 for monday, ... so on.
   This method is known as sakamoto's algorithm for Julian Calendar.
*/
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

int dayofweekB(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 + t[m-1] + d) % 7;
}

int main()
{
    char dayname[7][12]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    char monthname[13][12]={"","January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int x, day, month, year;

    while(scanf("%d %d %d\n",&month,&day,&year)==3){
        if(month+day+year==0) break;
        if(isDateValid(day,month,year)){
            if(year>1752) x = dayofweek(day,month,year);
            else if(year==1752&&month>9) x = dayofweek(day,month,year);
            else if(year==1752&&month==9&&day>=14) x = dayofweek(day,month,year);
            else x = (dayofweekB(day,month,year)+12)%7;// 12 days shifted in 1752
            printf("%s %d, %d is a %s\n",monthname[month],day,year,dayname[x]);
        }
        else printf("%d/%d/%d is an invalid date.\n",month,day,year);
    }
    return 0;
}
