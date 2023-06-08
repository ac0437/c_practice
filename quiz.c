#include <stdio.h>

int main()
{
  int i;
  int ans1, ans2, ans3, ans4;
  int total = 0;

  printf("  Welcome to the Game\n\n");

  printf("> Press 7 to start the game\n");
  printf("> Press 0 to quit the game\n");

  scanf("%d", &i);
  if (i == 7)
  {
    printf("The game has started\n\n");
    printf("1) What team was the first team to win the world series?\n\n");
    printf("1) Boston Americans\n");
    printf("2) Pittsburgh Pirates\n");
    printf("3) Chicago White Sox\n");
    printf("4) New York Yankees\n");
    printf("Enter your answers: ");
    scanf("%d", &ans1);

    if (ans1 == 1)
    {
      printf("Correct!\n");
      total += 25;
      printf("You have scored %d points\n", total);
    }
    else
    {
      printf("You have scored %d points\n", total);
    }

    printf("1) What team was the first team to win the Nba finals?\n\n");
    printf("1) Boston Celtics\n");
    printf("2) Los Angeles Lakers\n");
    printf("3) Chicago Bulls\n");
    printf("4) Philadelphia Warriors\n");
    printf("Enter your answers: ");
    scanf("%d", &ans2);

    if (ans2 == 4)
    {
      printf("Correct!\n");
      total += 25;
      printf("You have scored %d points\n", total);
    }
    else
    {
      printf("You have scored %d points\n", total);
    }

    printf("4) What team was the first team to win the Superbowl?\n\n");
    printf("1) Okland Raiders\n");
    printf("2) New York Jets\n");
    printf("3) Green Bay Packers\n");
    printf("4) Kansas City Chiefs\n");
    printf("Enter your answers: ");
    scanf("%d", &ans3);

    if (ans3 == 3)
    {
      printf("Correct!\n");
      total += 25;
      printf("You have scored %d points\n", total);
    }
    else
    {
      printf("You have scored %d points\n", total);
    }

    printf("4) What team was the first team to win the Stanley Cup?\n\n");
    printf("1) Detroit Red Wings\n");
    printf("2) Montreal Canadiens\n");
    printf("3) Toronto Maple Leafs\n");
    printf("4) Boston Bruins\n");
    printf("Enter your answers: ");
    scanf("%d", &ans4);

    if (ans4 == 2)
    {
      printf("Correct!\n");
      total += 25;
      printf("You have scored %d points\n", total);
    }
    else
    {
      printf("You have scored %d points\n", total);
    }
  }
  else if (i == 0)
  {
    printf("The game has ended\n\n");
    return 0;
  }
  else
  {
    printf("Invalid answer\n\n");
  }
}