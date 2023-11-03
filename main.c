#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Klavyeden kucuk harflerle girilen bir cumle icerisinde en fazla kullanýlan
    //  karakterin bulunmasýný saglayan C programý yazýnýz.
    char cumle[150];
    int i=0;
    int encok;
    int kucukharf[26]={0};
    char harf;
    printf("Lutfen bir cumle giriniz.\n");
    gets(cumle);
    while(cumle[i])
    {
        if(cumle[i]>='a' && cumle[i]<='z')
        {
            kucukharf[cumle[i]-'a']++;
        }
        i++;
    }

    encok=kucukharf[0];
    for(i=1;i<26;i++)
    {
        if(kucukharf[i]!=0)//Bu kucuk harf kullanýlmýs ise demek
        {
            if(kucukharf[i]>encok)
            {
                encok=kucukharf[i];
                harf=i+'a';
            }
        }
    }
    printf("En fazla kullanilan harf : %c",harf);
    return 0 ;
}
