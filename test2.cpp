//============================================================================
// Name        : test2.cpp
// Author      : albert
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

class Weapon
{
    public:
      virtual void features()
      	  { cout << "Loading weapon features.\n"; }
};

class Bomb : public Weapon
{
    public:
       void features()
         { cout << "Loading bomb features.\n"; }
};

class Gun : public Weapon
{
    public:
       void features()
         { cout << "Loading gun features.\n"; }

};

class Loader
{
   public:
     void loadFeatures(Weapon *weapon)
     {
        weapon->features();
     }
};

class cars
{
	public:
		static int cnt1;
};

int cars::cnt1 = 0;

unsigned long long int factorial(unsigned int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}


int main()
{
    char str1[20];
    //char str2[20];
    char *str2 = "123456789";
    char c, c1;
    int i = 4;
    cars A1, B1;

    A1.cnt1 = 10;

    printf("B1.cnt1 = %d\n", B1.cnt1);

    printf("Factorial of %d is %d\n", i, factorial(i));

    printf("strlen of 123456789 = %d\n", strlen(str2));

    scanf("%19s", str1);
    //to skip the '\n' newline from user input
    while((c=getchar())!='\n' && c!=EOF);

    scanf(" %c", &c1);
    //scanf("%s", str2);
    printf("%s  %c\n", str1, c1);

	Loader *l = new Loader;
    Weapon *w;
    Bomb b;
    Gun g;

    w = &b;
    l->loadFeatures(w);

    w = &g;
    l->loadFeatures(w);

    return 0;
}
