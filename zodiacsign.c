#include <stdio.h>
int main()
{
    int month;
    int date;

    printf("input the month and date of birth (format of month=01, format of date=01)\n");
    scanf("%d%d",&month,&date);

    if ((date>=22 && month==12) || (date<=19 && month==01))
      printf("zodiac sign = capricorn");
    
    else if((date>=20 && month==01 ) || (date<=17 && month==02))
      printf("zodiac sign = aquarius");
    
    else if((date>=18 && month==02) || (date<=19 && month==03))
      printf("zodiac sign = pisces");
    
    else if((date>=20 && month==03) || (date<=19 && month==04))
      printf("zodiac sign = aries");
    
    else if((date>=20 && month==04 ) || (date<=20 && month==05))
      printf("zodiac sign = taurus");
    
    else if((date>=21 && month==05) || (date<=20 && month==06))
      printf("zodiac sign = gemini");
    
    else if((date>=21 && month==06 ) || (date<=22 && month==07))
      printf("zodiac sign = cancer");
    
    else if((date>=23 && month==07) || (date<=22 && month==08))
      printf("zodiac sign = leo");
    
    else if((date>=23 && month==08) || (date<=22 && month==09))
      printf("zodiac sign = virgo");
    
    else if((date>=23 && month==09) || (date<=22 && month==10))
      printf("zodiac sign = libra");
    
    else if((date>=23 && month==10 ) || (date<=21 && month==11))
      printf("zodiac sign = scorpio");
    
    else if((date>=22 && month==11) || (date<=21 && month==12))
      printf("zodiac sign = saggitarius");

    printf("kindly don't believe in this ,it is just a program and all the zodiac signs 
    are just names of the constellations\nthey don't signify any connection with your fate\n
    your fate only depends on your work. ");

    return 0;
}