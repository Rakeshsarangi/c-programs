/*displays admitted or not according to conditions
(i) marks in mathematics >= 60,and marks in physics >= 50,and marks in chemistry >= 40
(ii) total in all three subjects >= 200 */
#include<stdio.h>
#include<conio.h>
void main()
{
  int marksInMathematics,marksInPhysics,marksInChemistry,totalMarks;
  printf("this program displays admission result if any one following condition is true\n");
  printf("(i) marks in mathematics >= 60,and marks in physics >= 50,and marks in chemistry >= 40\n");
  printf("(ii) total in all three subjects >= 200\n");
  printf("-------------------------------------------------------------------------------------------------------------------\n");
  printf("enter marks in mathematics:");
  scanf("%d",&marksInMathematics);
  printf("enter marks in physics:");
  scanf("%d",&marksInPhysics);
  printf("enter marks in chemistry:");
  scanf("%d",&marksInChemistry);
  totalMarks=marksInMathematics+marksInPhysics+marksInChemistry;
  if(marksInMathematics>=60 && marksInPhysics>=50 && marksInChemistry>=40)
  {
      printf("Admitted.");
  }
  else if(totalMarks>=200)
  {
      printf("Admitted.");
  }
  else
  {
      printf("Not Admitted.");
  }
  getch();
}
