#include <stdio.h>
/*
int main()
{
    printf("Hello World");
    return 0;
}
*/
int main(){
    /*
    int a,b,c,d,e;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
     //to print the largest number among the 5 numbers
    int largest = a;
    if(b > largest)
        largest = b;
    if(c > largest)
        largest = c;
    if(d > largest)
        largest = d;
    if(e > largest)
        largest = e;
    printf("The largest number is: %d", largest);
    */
   /*
   int i=1,n,sum=0;
   printf("Enter a number: ");
   scanf("%d", &n);
   for (i=1;i<=n;i++){
        printf("%d ",i);
   }*/
  /*
  for (i;i<=n;i++){
        sum = sum + i;
}printf("The sum of the first %d numbers is: %d", n, sum);
*/
/*
int i=1,largest=0;
for (i;i<=10;i++){
    if(i>largest)
        largest = i;
   }
   printf("The largest number is: %d", largest);
   */
  // to count how many times a number appears in an array
  /*
int arr[10],i,n,count=0;
printf("Enter 10 numbers: ");
for(i=0;i<10;i++){
    scanf("%d", &arr[i]);
}
printf("Enter a number to count its occurrences: ");
scanf("%d", &n);
for(i=0;i<10;i++){
    if(arr[i]==n)
        count++;
}
printf("The number %d appears %d times in the array.", n, count);*/
/*
int a[10],i,sum=0;
printf("Enter 10 numbers: ");
for(i=0;i<10;i++){
    scanf("%d", &a[i]);
}
for(int i = 0; i < 10; i++)
{
    printf("%d ", a[i]);
}
for(i=0;i<10;i++){
        sum = sum + a[i];
    }
printf("The sum of the numbers is: %d", sum);
// to find largest number in an array
int largest = a[0];
for(i=1;i<10;i++){
    if(a[i]>largest)
        largest = a[i];
}
printf("The largest number is: %d", largest);
//to perform linear search in an array
int n,found=0;
printf("Enter a number to search: ");
scanf("%d", &n);
for(i=0;i<10;i++){
    if(a[i]==n){
        found = 1;
        break;
    }
}
if(found)
    printf("Number found in the array.");
else
    printf("Number not found in the array.");*/
/*
 //to insert an element in an array at a specific position
 int a[10],i,pos,val;
 printf("enter 5 numbers:");
 for(i=0;i<5;i++){
    scanf("%d", &a[i]);
}
printf("enter position and value to insert:");
 scanf("%d %d", &pos, &val);
 for(i=4;i>=pos;i--){
    a[i+1] = a[i];
 }
 a[pos] = val;
 printf("array after insertion:");
 for(i=0;i<6;i++){
    printf("%d ", a[i]);
 }*/
/*
//to delete an element from an array at a specific position
int a[10],i,pos;
printf("enter 5 numbers");
for(i=0;i<5;i++){
    scanf("%d", &a[i]);}
    printf("enter position to delete:");
    scanf("%d", &pos);
    for(i=pos;i<4;i++){
    a[i] = a[i+1];
    }
    printf("array after deletion:");
    for(i=0;i<4;i++){
        printf("%d ", a[i]);
    }*/
 return 0;
 }

