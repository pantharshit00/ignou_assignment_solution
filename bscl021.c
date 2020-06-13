#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int i, v, sw, max = 0;
  char nameMax[10],
      name1[10] = "abhishek", name2[10] = "vipul", name3[10] = "ankit",
      name4[10] = "simpy", name5[10] = "pankaj", name6[10] = "ritika",
      name7[10] = "bot", name8[10] = "pallavi ", name9[10] = "bhavana",
      name10[10] = "neeraj", name11[10] = "no_choice";
  FILE *fp;
  int abhishek = 0, vipul = 0, ankit = 0, simpy = 0, pankaj = 0, nochoice = 0,
      ritika = 0, bot = 0, pallavi = 0, bhavana = 0, neeraj = 0;
  for (i = 0; i < 100; i++) {
    printf(
        "\n1.Cast Your vote(maximum 100 votes can be casted) .\n2.Display and "
        "store voting Result.\n3.Find winner.\n4.End program.\n\n");
    printf("Enter choice:");
    scanf("%d", &sw);
    switch (sw) {
    case 1: {
      printf("\n\n......votar candidate List and symbol........\n\n");
      printf("1.abhishek    for '!!'\n2.vipul    for '@@'\n3.ankit   for "
             "'##'\n4.simpyfor  '$$'\n5.pankaj   for'*'\n");
      printf("6.ritika    for '^^'\n7.bot   for '&&'\n8.pallavi  for  "
             "'**'\n9.bhavana  for'(('\n10.neeraj for '))'\n11.No choice\n");
      printf("Your vote:");
      scanf("%d", &v);
      if (v == 1) {
        abhishek = abhishek + 1;
        if (abhishek >= max) {
          max = abhishek;
          strcpy(nameMax, name1);
        }
      } else if (v == 2) {
        vipul = vipul + 1;
        if (vipul >= max) {
          max = vipul;
          strcpy(nameMax, name2);
        }
      } else if (v == 3) {
        ankit = ankit + 1;
        if (ankit >= max) {
          max = ankit;
          strcpy(nameMax, name3);
        }
      } else if (v == 4) {
        simpy = simpy + 1;
        if (simpy >= max) {
          max = simpy;
          strcpy(nameMax, name4);
        }
      } else if (v == 5) {
        pankaj = pankaj + 1;
        if (simpy >= max) {
          max = pankaj;
          strcpy(nameMax, name5);
        }
      } else if (v == 6) {
        ritika = ritika + 1;
        if (ritika >= max) {
          max = ritika;
          strcpy(nameMax, name6);
        }
      } else if (v == 7) {
        bot = bot + 1;
        if (bot >= max) {
          max = bot;
          strcpy(nameMax, name7);
        }
      } else if (v == 8) {
        pallavi = +1;
        if (pallavi >= max) {
          max = pallavi;
          strcpy(nameMax, name8);
        }
      } else if (v == 9) {
        bhavana = +1;
        if (bhavana >= max) {
          max = bhavana;
          strcpy(nameMax, name9);
        }
      } else if (v == 10) {
        neeraj = +1;
        if (neeraj >= max) {
          max = neeraj;
          strcpy(nameMax, name10);
        }
      } else {
        nochoice++;
        if (nochoice >= max) {
          max = nochoice;
          strcpy(nameMax, name11);
        }
      }
      break;
    case 2:
      printf("\n\n............Voting result Candidate-Wise............\n\n");
      printf("Abhishek : %d\n", abhishek);
      printf("Vipul    : %d\n", vipul);
      printf("Ankit    : %d\n", ankit);
      printf("Simpy    : %d\n", simpy);
      printf("Pankaj   : %d\n", pankaj);
      printf("Ritika   : %d\n", ritika);
      printf("Bot      : %d\n", bot);
      printf("Pallavi  : %d\n", pallavi);
      printf("Bhavana  : %d\n", bhavana);
      printf("Neeraj   : %d\n", neeraj);
      printf("No Choice: %d\n\n", nochoice);
      printf("...........End of Result........\n\n");
      fp = fopen("program.txt", "w");
      if (fp == NULL) {
        puts("cannot open file");
        exit(1);
      }
      fprintf(fp,
              "\n\n............Voting result Candidate-Wise............\n\n");
      fprintf(fp, "Abhishek : %d\n", abhishek);
      fprintf(fp, "Vipul    : %d\n", vipul);
      fprintf(fp, "Ankit    : %d\n", ankit);
      fprintf(fp, "Simpy    : %d\n", simpy);
      fprintf(fp, "Pankaj   : %d\n", pankaj);
      fprintf(fp, "Ritika   : %d\n", ritika);
      fprintf(fp, "Bot      : %d\n", bot);
      fprintf(fp, "Pallavi  : %d\n", pallavi);
      fprintf(fp, "Bhavana  : %d\n", bhavana);
      fprintf(fp, "Neeraj   : %d\n", neeraj);
      fprintf(fp, "No Choice: %d\n\n", nochoice);
      fprintf(fp, "...........End of Result........\n\n");
      fprintf(fp, "...................................");
      fprintf(fp, "\nThe Winner Vote Counted : %d\n", max);
      fprintf(fp, "Winner Name: %s\n", nameMax);
      fprintf(fp, "...................................");
      fclose(fp);
      break;
    case 3:
      printf("...................................");
      printf("\nThe Winner Vote Counted : %d\n", max);
      printf("Winner Name: %s\n", nameMax);
      printf("...................................");
      break;
    case 4:
      goto exit;
    default:
      printf("\n!!!....Wrong Choice....!!!\n\n");
      break;
    exit:
      exit(0);
    }
    }
  }
  return 0;
}
