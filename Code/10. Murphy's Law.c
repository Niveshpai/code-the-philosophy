### Following are the Murphy's law for computer programming.
** Anything that can go wrong will go wrong **
- Any given program, when running, is obsolete.
- If a program is useless, it will have to be documented.
- If a program is useful, it will have to be changed.
- Any non-trivial program contains at least one bug.
- Any program will expand to fill all available memory.
- The value of a program is directly proportional to the weight of its output.
- The complexity of a program will grow until it exceeds the capability of the programmer to maintain it.
- Make it possible for programmers to write in English and you will find that programmers cannot write in English.
- If builders built buildings the way programmers write programs, the first woodpecker that came along would destroy civilization.
- Inside every small program is a large program struggling to get out.
- If a test installation functions perfectly, all subsequent systems will malfunction.
- Not until a program has been in production for at least six months will its most harmful error be discovered.
- Undetectable errors are infinite in variety, in contrast to detectable errors, which are by definition limited.
- If the input editor has been designed to reject all bad input, an ingenious idiot will discover a method to get bad data past it.
- Build a system that even a fool can use, and only a fool will want to use it.
- Machines work; people should think.
- A carelessly planned project takes three times longer to complete than expected; a carefully planned project will take only twice as long.
- Adding manpower to a late project makes it later.
- The effort required to correct an error increases geometrically with time.
- Only ten percent of the code in any given program will ever be executed.

```
//I have written a simple program that gives wrong output i.e anything that can go wrong, will go wrong.
#include<string.h>
#include<stdio.h>
int main()
{
    char s[10];
    fgets(s,10,stdin);
    func(s);
    return 0;
}
void func(char a[])
{
    int i, c1, c2;
    while(a[i]!='\0')
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
        {
            if(a[i]=='A' || a[i]=='I' || a[i]=='O' || a[i]=='U'|| a[i]=='E' || a[i]=='a' || a[i]=='i' || a[i]=='o' || a[i]=='u'|| a[i]=='e')
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        i++;
    }
    printf("Consonants: %d Vowels: %d", c2, c1);
}
```
