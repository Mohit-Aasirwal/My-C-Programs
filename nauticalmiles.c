#include <stdio.h>
#include <math.h>
int main()
{
    float lat1,lat2,lon1,lon2,dis;
    printf("enter the values of latitudes\n");
    scanf("%f%f",&lat1,&lat2);
    printf("enter the values of longitudes\n");
    scanf("%f%f",&lon1,&lon2);

    lat1=lat1*3.14/180;
    lat2=lat2*3.14/180;
    lon1=lon1*3.14/180;
    lon2=lon2*3.14/180;
    dis=3963* acos(sin (lon1) * sin(lon2)+cos(lon1) * cos (lon2) * cos (lat2-lat1));

    printf("distance between these two points in nautical miles is :%f\n",dis);

    return 0;
}