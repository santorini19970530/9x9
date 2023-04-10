#include<stdio.h>

void printMatrix();
void printFrame();
void printContent(int, int);

int main(){
  printMatrix();
  return 0;
}

void printMatrix(){
  for (int i = 1; i <=9; i++){
    printFrame();
    for (int j = 1; j <=9; j++)
      printContent(i, j);
  }
  printFrame();
}

void printFrame(){
  printf(" ");
  for (int i = 0; i < 9; i++)
    printf("----------------");
  putchar('\n');
}

void printContent(int x, int y){
  if(y == 1)
    printf("| ");
  printf("%2d x % 2d = % 3d ", x, y, x*y);
  printf(" |");
  if (y == 9)
    putchar('\n');
}
