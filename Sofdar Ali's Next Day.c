 #include <bits/stdc++.h>

int main()
{
   long long T, D, M, Y, leapYear = 0;
   long long days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   char months[12][5] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

   scanf("%lld", &T);

   while (T--) {
        leapYear = 0;

        scanf(" %lld %lld %lld", &D, &M, &Y);

        if ((Y % 4) != 0) leapYear = 0;
        else if ((Y % 100) != 0) leapYear = 1;
        else if ((Y % 400) != 0) leapYear = 0;
        else leapYear = 1;
        //if (((Y % 400) == 0) || ((Y % 4 == 0) && (Y % 100 != 0))) leapYear = 1;

        D++;

        if (leapYear == 1) {
            if ((D > 29)  && (M == 2)) {
                D = 1;
                M++;
            } else if ((D <= 29)  && (M == 2)) {
                // Do nothing
            } else if (D > days[M - 1]) {
                D = 1;
                M++;
            }

            if (M > 12) {
                M = 1;
                Y++;
            }
        } else if (leapYear == 0) {
            if (D > days[M - 1]) {
                D = 1;
                M++;
            }

            if (M > 12) {
                M = 1;
                Y++;
            }
        }

        if (D < 10) {
            printf("0%lld %s, %lld\n", D, months[M - 1], Y);
        } else {
            printf("%lld %s, %lld\n", D, months[M - 1], Y);
        }
   }

   return 0;
}