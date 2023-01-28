#include<stdio.h>
void encript(char msg[100])
{
    int i,len;
    len=strlen(msg);
    for(i=0; i<len; i++)
    {
        if((msg[i]>='a' && msg[i]<='z') || (msg[i]>='A' && msg[i]<='Z'))
            msg[i]=msg[i]+1;
    }
}
void decript(char sms[100])
{
    int i,len;
    len=strlen(sms);
    for(i=0; i<len; i++)
    {
        if((sms[i]>='a' && sms[i]<='z') || (sms[i]>='A' && sms[i]<='Z'))
            sms[i]=sms[i]-1;
    }
}
int main()
{
    char s[100];
    gets(s);
    encript(s);
    printf("%s\n",s);
    decript(s);
    printf("%s\n",s);

}
