#include <stdio.h>
#include<string.h>
int main(void) {
//char name[50];
int age;
long int runs;
int matches,score=0;
int ODIS,T20S,testmatches,IPL;
int captainship,centuries;
int sixs,fours,wickets_taken;
int option;
printf("\n enter 1 for MS Dhoni");
printf("\n enter 2 for Rohith sharma");
printf("\n enter 3 for Virat kolhi");
printf("\n enter 4 for Surya Kumar Yadav");
printf("\n enter 5 for Ravindra Jadeja");
printf("\n\n\n enter your option");
scanf(" %d",&option);
  switch(option)
    {
      case 1:
        {
  char name[50]="Mahendra Singh Dhoni";
      printf("\n\nName: %s\n",name);
      age=41;
      printf("Age:%d\n",age);
      runs=22244;
      printf("Total RUNS:%ld\n",runs);
        ODIS=350;
      if(ODIS<=250)
      {
        score=score+10;
        }
      else
      {
        score=score+20;
        }
    T20S=98;
      if(T20S<=50)
        {
      score=score+5;
          }
      else
      {
      score=score+10;
        }
        testmatches=90;
        if(testmatches<=50)
        {
          score=score+10;
        }
        else
        {
         score=score+15;
        }
        IPL=234;
        if(IPL<=200)
        {
          score=score+5;
        }
        else
        {
          score=score+10;
        }
        captainship=331;
        if(captainship<=200)
        {
          score=score+2;
        }
        else
        {
          score=score+4;
        }
        centuries=16;
        if(centuries<=20)
        {
          score=score+3;
        }
        else
        {
          score=score+6;
        }
        sixs=475;
        if(sixs<=250)
        {
          score=score+6;
        }
        else
        {
          score=score+12;
          }
        fours=1378;
        if(fours<=1500)
        {
        score=score+4;
          }
        else
        {
          score=score+8;
          }
        wickets_taken=1;
        if(wickets_taken<=5)
        {
          score=score+0;
        }
        else
        {
          score=score+1;
        }
      printf("Score:%d\n",score);
    break;
          }
    case 2:
      {
     char name[50]="Rohit Sharma";
      printf("\n\nName: %s\n",name);
      age=35;
      printf("Age:%d\n",age);
      runs=22646;
      printf("Total RUNS:%ld\n",runs);
        ODIS=241;
      if(ODIS<=250)
      {
        score=score+10;
        }
      else
      {
        score=score+20;
        }
    T20S=148;
      if(T20S<=50)
        {
      score=score+5;
          }
      else
      {
      score=score+10;
        }
        testmatches=45;
        if(testmatches<=50)
        {
          score=score+10;
        }
        else
        {
         score=score+15;
        }
        IPL=226;
        if(IPL<=200)
        {
          score=score+5;
        }
        else
        {
          score=score+10;
        }
        captainship=219;
        if(captainship<=200)
        {
          score=score+2;
        }
        else
        {
          score=score+4;
        }
        centuries=32;
        if(centuries<=20)
        {
          score=score+3;
        }
        else
        {
          score=score+6;
        }
        sixs=324;
        if(sixs<=250)
        {
          score=score+6;
        }
        else
        {
          score=score+12;
          }
        fours=1777;
        if(fours<=1500)
        {
        score=score+4;
          }
        else
        {
          score=score+8;
        }
        wickets_taken=4;
        if(wickets_taken<=5)
        {
          score=score+0;
        }
        else
        {
          score=score+1;
        }
      printf("Score:%d\n",score);
      break;
        }
      case 3:
        {
  char name[50]="Virat Kohli";
      printf("\n\nName: %s\n",name);
      age=34;
      printf("Age:%d\n",age);
      runs=24350;
      printf("Total RUNS:%ld\n",runs);
        ODIS=271;
      if(ODIS<=250)
      {
        score=score+10;
        }
      else
      {
        score=score+20;
        }
    T20S=115;
      if(T20S<=50)
        {
      score=score+5;
          }
      else
      {
      score=score+10;
        }
        testmatches=104;
        if(testmatches<=50)
        {
          score=score+10;
        }
        else
        {
         score=score+15;
        }
        IPL=223;
        if(IPL<=200)
        {
          score=score+5;
        }
        else
        {
          score=score+10;
        }
        captainship=213;
        if(captainship<=200)
        {
          score=score+2;
        }
        else
        {
          score=score+4;
        }
        centuries=74;
        if(centuries<=20)
        {
          score=score+3;
        }
        else
        {
          score=score+6;
        }
        sixs=278;
        if(sixs<=250)
        {
          score=score+6;
        }
        else
        {
          score=score+12;
          }
        fours=1204;
        if(fours<=1500)
        {
        score=score+4;
          }
        else
        {
          score=score+8;
          }
        wickets_taken=8;
        if(wickets_taken<=5)
        {
          score=score+0;
        }
        else
        {
          score=score+1;
        }
      printf("Score:%d\n",score);
    break;
          }
      case 4:
        {
  char name[50]="Surya Kumar Yadav";
      printf("\n\nName: %s\n",name);
      age=32;
      printf("Age:%d\n",age);
      runs=5315;
      printf("Total RUNS:%ld\n",runs);
        ODIS=20;
      if(ODIS<=250)
      {
        score=score+10;
        }
      else
      {
        score=score+20;
        }
    T20S=48;
      if(T20S<=50)
        {
      score=score+5;
          }
      else
      {
      score=score+10;
        }
        testmatches=12;
        if(testmatches<=50)
        {
          score=score+10;
        }
        else
        {
         score=score+15;
        }
        IPL=123;
        if(IPL<=200)
        {
          score=score+5;
        }
        else
        {
          score=score+10;
        }
        captainship=0;
        if(captainship<=200)
        {
          score=score+2;
        }
        else
        {
          score=score+4;
        }
        centuries=17;
        if(centuries<=20)
        {
          score=score+3;
        }
        else
        {
          score=score+6;
        }
        sixs=284;
        if(sixs<=250)
        {
          score=score+6;
        }
        else
        {
          score=score+12;
          }
        fours=480;
        if(fours<=1500)
        {
        score=score+4;
          }
        else
        {
          score=score+8;
          }
        wickets_taken=0;
        if(wickets_taken<=5)
        {
          score=score+0;
        }
        else
        {
          score=score+1;
        }
      printf("Score:%d\n",score);
    break;
          }
      case 5:
        {
  char name[50]="Ravindra Jadeja";
      printf("\n\nName: %s\n",name);
      age=34;
      printf("Age:%d\n",age);
      runs=6027;
      printf("Total RUNS:%ld\n",runs);
        ODIS=171;
      if(ODIS<=250)
      {
        score=score+10;
        }
      else
      {
        score=score+20;
        }
    T20S=63;
      if(T20S<=50)
        {
      score=score+5;
          }
      else
      {
      score=score+10;
        }
        testmatches=60;
        if(testmatches<=50)
        {
          score=score+10;
        }
        else
        {
         score=score+15;
        }
        IPL=206;
        if(IPL<=200)
        {
          score=score+5;
        }
        else
        {
          score=score+10;
        }
        captainship=3;
        if(captainship<=200)
        {
          score=score+2;
        }
        else
        {
          score=score+4;
        }
        centuries=3;
        if(centuries<=20)
        {
          score=score+3;
        }
        else
        {
          score=score+6;
        }
        sixs=207;
        if(sixs<=250)
        {
          score=score+6;
        }
        else
        {
          score=score+12;
          }
        fours=657;
        if(fours<=1500)
        {
        score=score+4;
          }
        else
        {
          score=score+8;
          }
        wickets_taken=481;
        if(wickets_taken<=5)
        {
          score=score+0;
        }
        else
        {
          score=score+1;
        }
      printf("Score:%d\n",score);
    break;
          }
        default:
            printf("the option entered is invalid\n");
      }
  return 0;
}
