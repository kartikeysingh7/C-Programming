// Write a C programm to store batting information of cricket team using structure. It contains player name and runs
// scored by player. Calculate total runs scored by cricket team
#include<stdio.h>
struct  player{
char name[20] ;
int runs ;
};
int  main( ){
int i,s=0 ;
struct player a[11] ;
printf("\n Enter Name of Player Runs Scored\n") ;
for(i=0;i<=10;i++)
{
      printf("Player %d: ",i+1) ;
      scanf("%s",a[i].name);
      printf("Runs scored by %d: ",i+1) ;
      scanf("%d",&a[i].runs);
}
for(i=0;i<=10;i++)
      s=s+a[i].runs;
printf("\n Runs Scored by Player\n");
printf("Name \t\tRuns\n");
for(i=0;i<=10;i++){
      printf("%s \t\t%d\n",a[i].name,a[i].runs);
}
printf("Total Runs Scored by Team: %d",s) ;
return 0 ;
}
