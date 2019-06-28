#include<stdio.h>

#include<math.h>

int main() {

  int j, i, op, arith, n1, n2, n3, sum, sub, mul, p, rate, t, bus, amt, dis, cp, sp, loss, pft, tem, geo, per;
  float div, si, res, kel, area, s, fah, cel;

  printf("\t\t CALCULATOR\n");
  CALC:
    printf("\n");
  for (i = 20; i >= 1; i--) {
    printf("* ");
  }
  printf("\nSelect the type of operation you wish to do:");
  printf("\n1.Arithmetic\n2.SI,profit loss,discount\n3.Temperature conversion\n4.Geometry\n5.EXIT\n");
  scanf("%d", & op);
  for (i = 20; i >= 1; i--) {
    printf("* ");
  }
  printf("\n");
  switch (op) {
  case 1:
    printf("Which operation you want to perform:");
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", & arith);
    for (i = 20; i >= 1; i--) {
      printf("* ");
    }
    switch (arith) {
    case 1:
      printf("\nEnter First Number:");
      scanf("%d", & n1);
      printf("Enter Second Number:");
      scanf("%d", & n2);
      sum = n1 + n2;
      printf("%d + %d = %d", n1, n2, sum);
      goto CALC;
    case 2:
      printf("\nEnter First Number:");
      scanf("%d", & n1);
      printf("Enter Second Number:");
      scanf("%d", & n2);
      sub = n1 + n2;
      printf("%d - %d = %d", n1, n2, sub);
      goto CALC;
    case 3:
      printf("\nEnter First Number:");
      scanf("%d", & n1);
      printf("Enter Second Number:");
      scanf("%d", & n2);
      mul = n1 * n2;
      printf("%d X %d = %d", n1, n2, mul);
      goto CALC;
    case 4:
      printf("\nEnter First Number:");
      scanf("%d", & n1);
      printf("Enter Second Number:");
      scanf("%d", & n2);
      div = n1 / (float) n2;
      printf("%d / %d = %f", n1, n2, div);
      goto CALC;
    }
    break;
  case 2:
    printf("What do you want to claculate:");
    printf("\n1. Simple Interest\n2. Pofit and loss\n3. Discount\n");
    scanf("%d", & bus);
    for (i = 20; i >= 1; i--) {
      printf("* ");
    }
    switch (bus) {
    case 1:
      printf("\nEnter Principle:");
      scanf("%d", & p);
      printf("Enter Rate:");
      scanf("%d", & rate);
      printf("Enter Time:");
      scanf("%d", & t);
      si = p * rate * (float) t / 100;
      printf("Simple Interest is: %.2f", si);
      goto CALC;
    case 3:
      printf("\nEnter the amount:");
      scanf("%d", & amt);
      printf("Enter the discount offered:");
      scanf("%d", & dis);
      res = amt - ((dis * (float) amt) / 100);
      printf("The final amount will be: %.2f rupees", res);
      goto CALC;
    case 2:
      printf("\nEnter the cost price:");
      scanf("%d", & cp);
      printf("Enter the selling price:");
      scanf("%d", & sp);
      if (cp > sp) {
        loss = cp - sp;
        printf("Loss is of %d rupees", loss);
      } else {
        pft = sp - cp;
        printf("Profit is of %d rupees", pft);
      }
      goto CALC;
    }
    break;
  case 3:
    printf("What do you want to do:");
    printf("\n1. Fahrenheit to Celcius\n2.Celcius to fahrenheit\n3.Celcius to Kelvin\n");
    scanf("%d", & tem);
    for (i = 20; i >= 1; i--) {
      printf("* ");
    }
    switch (tem) {
    case 1:
      printf("\nEnter temperature in degree fahrenheit:");
      scanf("%d", & fah);
      cel = ((fah - 32) / 1.8);
      printf("Temperature in degree celcius is %.3f", (float) cel);
      goto CALC;
    case 2:
      printf("\nEnter temperature in degree celcius:");
      scanf("%d", & cel);
      fah = (1.8 * cel) + 32;
      printf("Temp in degree fahrenheit is %f", (float) fah);
      goto CALC;
    case 3:
      printf("\nEnter temperature in celcius:");
      scanf("%d", & cel);
      kel = cel + 273.15;
      printf("The temp in kelvin is : %f", kel);
      goto CALC;
    }

    break;
  case 4:
    printf("what do you want to do:");
    printf("\n1.Area and perimeter of square\n2. Area and perimeter of rectangle\n3. Area,perimeter and type of triangle\n");
    scanf("%d", & geo);
    for (i = 20; i >= 1; i--) {
      printf("* ");
    }
    switch (geo) {
    case 1:
      printf("\nenter side of square:");
      scanf("%d", & n1);
      area = n1 * n1;
      printf("area of square is: %.f", area);
      per = 4 * n1;
      printf("\nperimeter of square is: %d", per);
      goto CALC;
    case 2:
      printf("\nenter length of rectangle:");
      scanf("%d", & n1);
      printf("enter breadth of rectangle:");
      scanf("%d", & n2);
      area = n1 * n2;
      per = 2 * (n1 + n2);
      printf("area of rectangle is: %.f\n", area);
      printf("perimeter of rectangle is: %d", per);
      goto CALC;
    case 3:
      printf("\nEnter the sides of a triangle\n");
      printf("side A:");
      scanf("%d", & n1);
      printf("side B:");
      scanf("%d", & n2);
      printf("Side C:");
      scanf("%d", & n3);
      if ((n1 == n2) && (n2 == n3)) {
        printf("it is an equilateral triangle");
      } else if ((n1 == n2) || (n1 == n3) || (n2 == n3)) {
        printf("it is an isoceles triangle");
      } else {
        printf("it is a scalene triangle");
      }
      s = (n1 + n2 + n3) / 2.0;
      area = sqrt(s * (s - n1) * (s - n2) * (s - n3));
      printf("\nThe area of triangle is: %f\n", area);
      per = n1 + n2 + n3;
      printf("the perimtter of triangle is: %d", per);
      goto CALC;
    }
    break;
  case 5:
    break;
  }
}