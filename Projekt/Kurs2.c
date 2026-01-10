// assigments

int main() {
    int num;
    scan("%d", &num);
    num = 10;
    printf("num is a %d \n", num);
    return 0;
}

// assigment challenge

int main() {
    int currentYear;
    int age;

    scanf("%d", &currentYear);
    scanf("%d", &age);
    
    printf("You were born in %d \n", currentYear -age);
    return 0;
}

// assigment double challenge

int main() {
    double height, width;
    double area;
    printf("Enter height: ");
    scanf("%1f",&height);
    printf("Enter width: ");
    scanf("%1f",&width);
    area = height * width;
    printf("The area of this rectangle = %1f\n",area);
}

// casting

int main() {
    int num1=5, num2=2;
    double result; // it will be 2.000
    double num2 = 2.0; // it will be 2.5
    result = num1/(double)num2; // it will be 2.5
    
    result = num1/num2;
    // both are int = 2

    printf("result = %1f \n", result);
}

// challenge casting

int main() {
    int grade1, grade2, grade3;
    double average;

    printf("Enter grade 1");
    scanf("%d",&grade1);

    printf("Enter grade2");
    scanf("%d", &grade2);

    printf("Enter grade 3 ");
    scanf("%d", &grade3);

    average = (grade1 + grade2 + grade3)/3.0;

    printf("Average = %.21f", average)
}

// swap
int main() {

    int a = 10;
    int b = 20;
    a=b; // both 20
}

int main() {
    int a = 10;
    int b = 20;
    int temp;

    temp = a;
    a = b;
    b = temp;
}


// n-th sequence of arithmetic

int main() {
    float a1, d;
    int n;

    printf("Enter the Initial Term (a1): ");
    scanf("%f",&a1);

    printf("Enter the difference in the arithmetic Sequence: ");
    scanf("%f",&d);

    printf("Enter the number of elements in the Arithmetic Sequecne: ");
    scanf("%d", &n);

    printf("Sequence = %f\n", a1+(n-1)*d);
    return 0;
}

// sum of arithmetic sequence 

int main() {
    float a1, an, Sn;
    int n;

    printf("Enter the Initial Term (a1): ");
    scanf("%f",&a1);

    printf("Enter the the n-th Term (an) Sequence: ");
    scanf("%f",&an);

    printf("Enter the number of elements in the Arithmetic Sequecne: ");
    scanf("%d", &n);

    Sn = (a1 + an) * n/2;

    printf("sum = %.2f\n", Sn);
    return 0;
}

// salary calculator

int main() {
    float salary;
    int totalHours;

    printf("Enter your Salary per Hour: ");
    scanf("%f",&salary);

    printf("Enter the number of hours your worked in the last month");
    scanf("&d",&totalHours);

    printf("Your expected salary should be: %f\n", salary*totalHours);

    return 0;
}

// speed - how long it takes to reach certain point - distance

int main(){
    int distance = 300;
    int speed = 75;
    int hours = distance / speed;
    float speedInMinutes = speed / 60.0;
    float  remainingMinutes = (distance % speed) / speedInMinutes;
    printf("The time it will take %d hours and %.2f minutes\n",hours, remainingMinutes);

    return 0;
}

// seconds, time

int main() {
    int totalSeconds;
    int hours, minutes, remainingSeconds;
    printf("Enter total seconds: ");
    scanf("%d",&totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds - hours * 3600) / 60;
    remainingSeconds = (totalSeconds - hours * 3600) % 60;

    printf("Total Hours: %d\n", hours);
    printf("Total Minutes: %d\n", minutes);
    printf("Total Seconds: %d\n", remainingSeconds);

    return 0;
}

// extract float

int main() {
    float data;
    printf("Enter the data of floating point type: ");
    scanf("%f",&data);

    printf("The integer Part = %d \n", (int)data);
    printf("The decimal part = %f \n", data - (int)data);
    return 0;
}

// sum of triple digits

int main()  {
    int num; // 531
    int units, tens, hundreds;

    int reversedNum;

    printf("Enter a 3-digit number");
    scanf("%d",&num);

    units = num % 10; // 1
    hundreds = num / 100; // 3
    tens = (num / 10) % 10; // 5

    reversedNum = units; // 1
    reversedNum = reversedNum * 10 + tens; // 13
    reversedNum = reversedNum * 10 + hundreds; // 135
    
    printf("Reversed number of %d is: %d%d%d \n", num, units, tens, hundreds);
    printf("Reversed number of %d = %d \n", num, reversedNum);

    printf("The total sum of digit in %d\n",num, units+tens+hundreds);
    return 0;    
}


// distance between two points

#include <math.h>

int main() {
    float x1,y1,x2,y2;
    float distance;

    printf("Enter X1: ");
    scanf("%f, &x1");

    printf("Enter Y1: ");
    scanf("%f, &y1");

    printf("Enter X2: ");
    scanf("%f, &x2");

    printf("Enter Y2: ");
    scanf("%f, &y2");
    
    distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("The distance between the points (%.2f,%.2f) and (%.2f, %.2f) is %.2f\n", x1,y1,x2,y2, distance);
    return 0;
}

// efficient calculation

int main() {
    int x;
    int x2,x4,x6,x8;
    printf("Enter X: ");
    scanf("%d",%d);

    x2 = x*x;
    x4 = x*x*x*x;
    x6 = x*x*x*x*x*x;
    x8 = x*x*x*x*x*x*x*x;

    // better

    x2 = x*x;
    x4 = x2*x2;
    x6 = x4*x2;
    x8 = x4*x4;

    return 0;
}

// congratulations failed program

int main() {
    int grade;
    scanf("%d", &grade);
    if (grade >= 60)
        printf("Congratulations ! \n");
    else
        printf("Failed.. try again \n");
    return 0;
}


// find maximum

int main() {
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 > num2)
        printf("max = %d\n", num1);
    else
        printf("max = %d\n", num2);
    return 0;
}

// relational operators 

// > - greater than 
// >= - greater than or equals too 
// == - equals to
// != - not equals to


// number is odd or even

int main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    if (num%2==0)
        printf("%d is EVEN \n",num);
    else 
        printf("%d is ODD \n",num);

    return 0;
}

// min / max 

int main() {
    float num1, num2;
    printf("Enter num1: ");
    scanf("%f", &num1);

    printf("Enter num2: ");
    scanf("%f", &mum2);

    if (num1>num2){
        printf("Maximum = %f \n", num1);
        printf("Minimum = %f \n", num2);
    }
    else {
        printf("Maximum = %f \n", num2);
        printf("Minimum = %f \n", num1);
    }
    return 0;
}

// min max among 3 numbers

int main() {
    in a,b,c;
    int max, min;
    printf("Enter num1: ");
    scanf("%d", &a);

    printf("Enter num2: ");
    scanf("%d", &b);

     printf("Enter num3: ");
    scanf("%d", &c);

    max = a;
    min = b;
    if(a<b){
        max = b;
        min = a;
    }
    if(max < c)
        max = c;
    if(c < min)
        min = c;

 
    return 0;
}