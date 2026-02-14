#include<stdio.h>
//#include<conio.h>
void main()
{
 printf("        Welcom to www.kgamek.com");
 int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,p,q,r,s,t,u,v,w,x,y,z,s1,s2;
 char t1,t2,t3,t4,pl1,pl2;
 printf("\n\n          TIK TAK TOE\n\n");
 printf("         1 | 2 | 3\n        ----------\n         4 | 5 | 6\n        ----------\n         7 | 8 | 9 \n\n(please memorise the cell codes perfectly)");
 getchar();
 //clrscr();
 printf("\n(Disclaimer:First player will get first chance.)\n\nEnter first player name: ");
 scanf("%s",& pl1);
 do { printf(" \nEnter your symbol number(no.1 to 9): ",pl1);
scanf("%d",& s1);
 if(s1>9||s1<1)
 {
 printf("\nInvalid symbol\nRetry");
 }} while (s1>9||s1<1);
 printf("\nEnter second player name: ");
 scanf("%s",& pl2);
 do { printf(" \nEnter your symbol number(no.1 to 9): ",pl1);
scanf("%d",& s2);
 //clrscr();
 if(s2>9||s2<1||s2==s1)
 {
 printf("\nInvalid symbol or similar with first player\nRetry");
 }} while (s2>9||s2<1||s2==s1);
 printf("\n            LET'S BEGIN\n\n");
 getchar();
 do {
 printf("\nEnter first player cell code: ",pl1);
 scanf("%d",&p);
 if(p>9||p<1)
 printf("\nwrong cell code");
    } while(p>9||p<1);
 

 switch(p)
 {
 case 1:
 a=s1;
 break;
 case 2:
 b=s1;
 break;
 case 3:
 c=s1;
 break;
 case 4:
 d=s1;
 break;
 case 5:
 e=s1;
 break;
 case 6:
 f=s1;
 break;
 case 7:
 g=s1;
 break;
 case 8:
 h=s1;
 break;
 case 9:
 i=s1;
 break;
 default:
printf("Error");
 }
//clrscr();
 printf("\nCurrent situation:\n         %d | %d | %d\n        ----------\n         %d | %d | %d\n        ----------\n         %d | %d | %d ",a,b,c,d,e,f,g,h,i);
 //----------_----+-----+++-------------
 do {
 printf("\nEnter second player cell code: ",pl2);
 scanf("%d",&q);
 if(q>9||q<1||q==p)
 printf("\nwrong cell code or previously chosen");
    } while(p>9||p<1||q==p);
 

 switch(q)
 {
 case 1:
 a=s2;
 break;
 case 2:
 b=s2;
 break;
 case 3:
 c=s2;
 break;
 case 4:
 d=s2;
 break;
 case 5:
 e=s2;
 break;
 case 6:
 f=s2;
 break;
 case 7:
 g=s2;
 break;
 case 8:
 h=s2;
 break;
 case 9:
 i=s2;
 break;
 default:
printf("Error");
 }
//clrscr();
//cgcigxjgxjgxjgxjgxjgxjxjgxjgxigxjgxjgxugxjgxjgxigc
 printf("\nCurrent situation:\n         %d | %d | %d\n        ----------\n         %d | %d | %d\n        ----------\n         %d | %d | %d ",a,b,c,d,e,f,g,h,i);
do {
 printf("\nEnter first player cell code: ",pl1);
 scanf("%d",&r);
 if(r>9||r<1||r==p||r==q)
 printf("\nwrong cell code or previously chosen");
    } while(r>9||r<1||r==p||r==q);
 

 switch(r)
 {
 case 1:
 a=s1;
 break;
 case 2:
 b=s1;
 break;
 case 3:
 c=s1;
 break;
 case 4:
 d=s1;
 break;
 case 5:
 e=s1;
 break;
 case 6:
 f=s1;
 break;
 case 7:
 g=s1;
 break;
 case 8:
 h=s1;
 break;
 case 9:
 i=s1;
 break;
 default:
printf("Error");
 }
//clrscr();
 printf("\nCurrent situation:\n         %d | %d | %d\n        ----------\n         %d | %d | %d\n        ----------\n         %d | %d | %d ",a,b,c,d,e,f,g,h,i);

//tfitditdiycigxitdufxufxfuxugiggi
do {
 printf("\nEnter second player cell code: ",pl2);
 scanf("%d",&s);
 if(s>9||s<1||s==p||s==q||s==r)
 printf("\nwrong cell code or previously chosen");
    } while(s>9||s<1||s==p||s==q||s==r);
 

 switch(s)
 {
 case 1:
 a=s2;
 break;
 case 2:
 b=s2;
 break;
 case 3:
 c=s2;
 break;
 case 4:
 d=s2;
 break;
 case 5:
 e=s2;
 break;
 case 6:
 f=s2;
 break;
 case 7:
 g=s2;
 break;
 case 8:
 h=s2;
 break;
 case 9:
 i=s2;
 break;
 default:
printf("Error");
 }
//clrscr();
 printf("\nCurrent situation:\n         %d | %d | %d\n        ----------\n         %d | %d | %d\n        ----------\n         %d | %d | %d ",a,b,c,d,e,f,g,h,i);
//fuofohfihcgicigcicyicigcigxurzgixkgzurd
do {
 printf("\nEnter first player cell code: ",pl1);
 scanf("%d",&t);
 if(t>9||t<1||t==p||t==q||t==r||t==s)
 printf("\nwrong cell code or previously chosen");
    } while(t>9||t<1||t==p||t==q||t==r||t==s);
 

 switch(t)
 {
 case 1:
 a=s1;
 break;
 case 2:
 b=s1;
 break;
 case 3:
 c=s1;
 break;
 case 4:
 d=s1;
 break;
 case 5:
 e=s1;
 break;
 case 6:
 f=s1;
 break;
 case 7:
 g=s1;
 break;
 case 8:
 h=s1;
 break;
 case 9:
 i=s1;
 break;
 default:
printf("\nError");
 }
//clrscr();
 printf("\nCurrent situation:\n         %d | %d | %d\n        ----------\n         %d | %d | %d\n        ----------\n         %d | %d | %d ",a,b,c,d,e,f,g,h,i);
//ydiydiydifoufoyfiyfoy
if(a==b&&a==c&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//idgjdjgdkgxkgxkxkgckfg
else if(d==e&&d==f&&d!=0)
{if(d==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(d==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//gdyifigdhifoyfoluflufo
else if(g==h&&g==i&&g!=0)
{if(g==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(g==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fydofufoufuofofoufuo
else if(a==d&&a==g&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//hfofyifoyfoyfofohf
else if(b==e&&b==h&&b!=0)
{if(b==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(b==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//hchofohfkhfkhckhckfh
else if(c==f&&c==i&&c!=0)
{if(c==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(c==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fiyfyofohfohfhof
else if(a==e&&a==i&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fiyfiyfohfofyofohfk
else if(c==e&&c==g&&c!=0)
{if(c==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(c==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
else 
{
do {
 printf("\nEntersecond player cell code: ",pl2);
 scanf("%d",&u);
 if(u>9||u<1||u==p||u==q||u==r||u==s||u==t)
 printf("\nwrong cell code or previously chosen");
    } while(u>9||u<1||u==p||u==q||u==r||u==s||u==t);
 

 switch(u)
 {
 case 1:
 a=s2;
 break;
 case 2:
 b=s2;
 break;
 case 3:
 c=s2;
 break;
 case 4:
 d=s2;
 break;
 case 5:
 e=s2;
 break;
 case 6:
 f=s2;
 break;
 case 7:
 g=s2;
 break;
 case 8:
 h=s2;
 break;
 case 9:
 i=s2;
 break;
 default:
printf("\nError");
 }
//clrscr();
 printf("\nCurrent situation:\n         %d | %d | %d\n        ----------\n         %d | %d | %d\n        ----------\n         %d | %d | %d ",a,b,c,d,e,f,g,h,i);
//ydiydiydifoufoyfiyfoy
if(a==b&&a==c&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//idgjdjgdkgxkgxkxkgckfg
else if(d==e&&d==f&&d!=0)
{if(d==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(d==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//gdyifigdhifoyfoluflufo
else if(g==h&&g==i&&g!=0)
{if(g==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(g==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fydofufoufuofofoufuo
else if(a==d&&a==g&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//hfofyifoyfoyfofohf
else if(b==e&&b==h&&b!=0)
{if(b==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(b==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//hchofohfkhfkhckhckfh
else if(c==f&&c==i&&c!=0)
{if(c==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(c==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fiyfyofohfohfhof
else if(a==e&&a==i&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fiyfiyfohfofyofohfk
else if(c==e&&c==g&&c!=0)
{if(c==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(c==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
else 
{
do {
 printf("\nEnter first player cell code: ",pl1);
 scanf("%d",&v);
 if(v>9||v<1||v==p||v==q||v==r||v==s||v==t||v==u)
 printf("\nwrong cell code or previously chosen");
    } while(v>9||v<1||v==p||v==q||v==r||v==s);
 

 switch(v)
 {
 case 1:
 a=s1;
 break;
 case 2:
 b=s1;
 break;
 case 3:
 c=s1;
 break;
 case 4:
 d=s1;
 break;
 case 5:
 e=s1;
 break;
 case 6:
 f=s1;
 break;
 case 7:
 g=s1;
 break;
 case 8:
 h=s1;
 break;
 case 9:
 i=s1;
 break;
 default:
printf("\nError");
 }
//clrscr();
 printf("\nCurrent situation:\n         %d | %d | %d\n        ----------\n         %d | %d | %d\n        ----------\n         %d | %d | %d ",a,b,c,d,e,f,g,h,i);
//ydiydiydifoufoyfiyfoy
if(a==b&&a==c&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//idgjdjgdkgxkgxkxkgckfg
else if(d==e&&d==f&&d!=0)
{if(d==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(d==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//gdyifigdhifoyfoluflufo
else if(g==h&&g==i&&g!=0)
{if(g==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(g==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fydofufoufuofofoufuo
else if(a==d&&a==g&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//hfofyifoyfoyfofohf
else if(b==e&&b==h&&b!=0)
{if(b==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(b==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//hchofohfkhfkhckhckfh
else if(c==f&&c==i&&c!=0)
{if(c==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(c==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fiyfyofohfohfhof
else if(a==e&&a==i&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fiyfiyfohfofyofohfk
else if(c==e&&c==g&&c!=0)
{if(c==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(c==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
else 
{
do {
 printf("\nEnter second player cell code: ",pl2);
 scanf("%d",&w);
 if(w>9||w<1||w==p||w==q||w==r||w==s||w==t||w==u||w==v)
 printf("\nwrong cell code or previously chosen");
    } while(w>9||w<1||w==p||w==q||w==r||w==s||w==t||w==u||w==v);
 

 switch(w)
 {
 case 1:
 a=s2;
 break;
 case 2:
 b=s2;
 break;
 case 3:
 c=s2;
 break;
 case 4:
 d=s2;
 break;
 case 5:
 e=s2;
 break;
 case 6:
 f=s2;
 break;
 case 7:
 g=s2;
 break;
 case 8:
 h=s2;
 break;
 case 9:
 i=s2;
 break;
 default:
printf("\nError");
 }
//clrscr();
 printf("\nCurrent situation:\n         %d | %d | %d\n        ----------\n         %d | %d | %d\n        ----------\n         %d | %d | %d ",a,b,c,d,e,f,g,h,i);
//ydiydiydifoufoyfiyfoy
if(a==b&&a==c&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//idgjdjgdkgxkgxkxkgckfg
else if(d==e&&d==f&&d!=0)
{if(d==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(d==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//gdyifigdhifoyfoluflufo
else if(g==h&&g==i&&g!=0)
{if(g==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(g==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fydofufoufuofofoufuo
else if(a==d&&a==g&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//hfofyifoyfoyfofohf
else if(b==e&&b==h&&b!=0)
{if(b==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(b==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//hchofohfkhfkhckhckfh
else if(c==f&&c==i&&c!=0)
{if(c==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(c==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fiyfyofohfohfhof
else if(a==e&&a==i&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fiyfiyfohfofyofohfk
else if(c==e&&c==g&&c!=0)
{if(c==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(c==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
else 
{
do {
 printf("\nEnter first player cell code: ",pl1);
 scanf("%d",&x);
 if(x>9||x<1||x==p||x==q||x==r||x==s||x==t||x==u||x==v||x==w)
 printf("\nwrong cell code or previously chosen");
    } while(x>9||x<1||x==p||x==q||x==r||x==s||x==t||x==u||x==v||x==w);
 

 switch(x)
 {
 case 1:
 a=s1;
 break;
 case 2:
 b=s1;
 break;
 case 3:
 c=s1;
 break;
 case 4:
 d=s1;
 break;
 case 5:
 e=s1;
 break;
 case 6:
 f=s1;
 break;
 case 7:
 g=s1;
 break;
 case 8:
 h=s1;
 break;
 case 9:
 i=s1;
 break;
 default:
printf("\nError");
 }
//clrscr();
 printf("\nCurrent situation:\n         %d | %d | %d\n        ----------\n         %d | %d | %d\n        ----------\n         %d | %d | %d ",a,b,c,d,e,f,g,h,i);
//ydiydiydifoufoyfiyfoy
if(a==b&&a==c&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//idgjdjgdkgxkgxkxkgckfg
else if(d==e&&d==f&&d!=0)
{if(d==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(d==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//gdyifigdhifoyfoluflufo
else if(g==h&&g==i&&g!=0)
{if(g==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(g==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fydofufoufuofofoufuo
else if(a==d&&a==g&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//hfofyifoyfoyfofohf
else if(b==e&&b==h&&b!=0)
{if(b==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(b==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//hchofohfkhfkhckhckfh
else if(c==f&&c==i&&c!=0)
{if(c==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(c==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fiyfyofohfohfhof
else if(a==e&&a==i&&a!=0)
{if(a==s1)
printf("\n%s HAVE WON THE GAME",pl1);
else if(a==s2)
printf("\n%s HAVE WON THE GAME",pl2);
}
//fiyfiyfohfofyofohfk
else if(c==e&&c==g&&c!=0)
{if(c==s1)
printf("\n %s HAVE WON THE GAME",pl1);
else if(c==s2)
printf("\n %s HAVE WON THE GAME",pl2);
}
else 
{
printf("\n######OH Noo! Draw match######");
}
}
}
}
}











}