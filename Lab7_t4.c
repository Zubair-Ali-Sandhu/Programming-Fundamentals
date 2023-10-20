#include<stdio.h>
int main()
{
	int ali_distancekm=100;
	float ali_timehr=2;
	float ali_timemin=4;
	float ali_timesec=ali_timehr*3600.0+ali_timemin*60.0;
	float ali_distancemet=ali_distancekm*1000.0;
	float ali_speed=ali_distancemet/ali_timesec;
	printf("the speed of ali is %.2f m/s\n",ali_speed);
	int haider_distancekm=200;
	float haider_timehr=4;
	float haider_timemin=2;
	float haider_timesec=haider_timehr*3600+haider_timemin*60;
	float haider_distancemet=haider_distancekm*1000;
	float haider_speed=haider_distancemet/haider_timesec;
	printf("the speed of haider is %.2f m/s",haider_speed);
	
	 
	return 0;
	
}
