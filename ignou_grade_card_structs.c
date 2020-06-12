#include <math.h>
#include <stdio.h>

struct Course {
  char name[15];
  int asgn1;
  int lab1;
  int lab2;
  int lab3;
  int lab4;
  int tee;
};

struct Students {
  char name[15];
  int roll;
  struct Course courses[5];
};

struct Students students[20] = {
    {"Harshit",
     123,
     {{"BCS011", 92, 0, 0, 0, 0, 72},
      {"BCS012", 91, 0, 0, 0, 0, 60},
      {"BCSL013", 92, 85, 0, 0, 0, 0},
      {"ECO01", 63, 0, 0, 0, 0, 68},
      {"FEG02", 66, 0, 0, 0, 0, 42}}},
    {"Neelam",
     124,
     {{"BCS011", 79, 0, 0, 0, 0, 78},
      {"BCS012", 85, 0, 0, 0, 0, 54},
      {"BCSL013", 84, 77, 0, 0, 0, 0},
      {"ECO01", 68, 0, 0, 0, 0, 70},
      {"FEG02", 71, 0, 0, 0, 0, 45}}},
    {"Nitin",
     125,
     {{"BCS011", 86, 0, 0, 0, 0, 66},
      {"BCS012", 85, 0, 0, 0, 0, 63},
      {"BCSL013", 90, 85, 0, 0, 0, 0},
      {"ECO01", 66, 0, 0, 0, 0, 64},
      {"FEG02", 62, 0, 0, 0, 0, 45}}},
    {"Kavita",
     125,
     {{"BCS011", 70, 0, 0, 0, 0, 67},
      {"BCS012", 86, 0, 0, 0, 0, 65},
      {"BCSL013", 84, 85, 0, 0, 0, 0},
      {"ECO01", 69, 0, 0, 0, 0, 63},
      {"FEG02", 71, 0, 0, 0, 0, 47}}},
    {"Khushi",
     126,
     {{"BCS011", 67, 0, 0, 0, 0, 67},
      {"BCS012", 66, 0, 0, 0, 0, 64},
      {"BCSL013", 65, 85, 0, 0, 0, 0},
      {"ECO01", 59, 0, 0, 0, 0, 64},
      {"FEG02", 72, 0, 0, 0, 0, 46}}},
    {"Jahnvi",
     127,
     {{"BCS011", 68, 0, 0, 0, 0, 67},
      {"BCS012", 73, 0, 0, 0, 0, 55},
      {"BCSL013", 72, 85, 0, 0, 0, 0},
      {"ECO01", 54, 0, 0, 0, 0, 64},
      {"FEG02", 30, 0, 0, 0, 0, 30}}},
};

void print_grade_card(int roll) {
  int idx = -1;
  for (int i = 0; i < 20; i++) {
    if (students[i].roll == roll) {
      idx = i;
    }
  }

  if (idx == -1) {
    printf("Cannout find record with that roll number");
  } else {
    struct Students s = students[idx];
    printf("\n\n\t\t\t\t\tINDIRA GANDHI NATIONAL OPEN UNIVERISITY\n");
    printf("Enrollment no: %d \n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Programme: BCA\n\n\n");
    printf(
        "Couse "
        "Code\t\tAsgn1\t\t\tLab1\t\t\tLab2\t\t\tLab3\t\t\tLab4\t\t\tTEE\t\t\tS"
        "tatus"
        "\n\n");
    for (int i = 0; i < 5; i++) {
      struct Course c = s.courses[i];
      printf("%s\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%"
             "d\t\t\t%d\t\t\t",
             c.name, c.asgn1, c.lab1, c.lab2, c.lab3, c.lab4, c.tee);
      float total = (c.asgn1 * 30 / 100) + (c.lab1 * 70 / 100) +
                    (c.lab2 * 70 / 100) + (c.lab3 * 70 / 100) +
                    (c.lab4 * 70 / 100) + (c.tee * 70 / 100);
      total = round(total);
      if (total >= 35) {
        printf("Completed\n\n");
      } else {
        printf("Not Completed\n\n");
      }
    }
  }
}

int main() {

  int roll;
  printf("Enter the roll number of the student\n");
  scanf("%d", &roll);

  print_grade_card(roll);

  return 0;
}
