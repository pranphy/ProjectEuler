#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>

using namespace std;
#define ENGLISH

string EDigits[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
string SDigits[]={"Cero","Uno","Dos","Tres","Cuatro","Cinco","Seis","Siete","Ocho","Nueve"};
string ESpecial[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
string SSpecial[]={"Diez","Once","Doce","Trece","Catorce","Quince","Dieciseis","Diecisiete","Dieciocho","Diecinueve"};
string ETens[]={"Zero","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
string STens[]={"Cero","Diez","Veintos","Trienta","Cuarenta","Cincuenta","Sesenta","Setenta","Ochenta","Noventa"};
string EHigher[]={"Hunderd","Thousand","Million","Billion","Trillion","Zillion"};
string SHigher[]={"Cientos","Mil","Millones","Billones","Trillones","Cillones"};
string ESaperaotr="-";
string SSaperator="y";

#ifdef SPANISH
	#define Digits SDigits
	#define Special SSpecial
	#define Tens STens
	#define Higher SHigher
	#define Saperator SSaperator
#else
	#define Digits EDigits
	#define Special ESpecial
	#define Tens ETens
	#define Higher EHigher
	#define Spaerator ESaperator
#endif // SPANISH

struct WordAndLength
{
    char Word[200];
    int Count;
};

WordAndLength HandleTwoDigit(int);
WordAndLength HandleNumber(int);
WordAndLength HandleOneDigit(int);
WordAndLength HandleThreeDigit(int);
int NumberLength(int);




int main()
{
    int Count=0;
    int From=1;
    int To=999;

    //cout<<"Enter a number "; cin>>From;
    //WordAndLength Word=HandleNumber(From);
    //cout<<Word.Word<<endl;
    for(int a=From;a<=To;a++)
    {
        WordAndLength LastTwo=HandleNumber(a);
        cout<<a<<" -> "<<LastTwo.Word<<" -> "<<LastTwo.Count<<endl;
        Count+=LastTwo.Count;
    }
    cout<<"The total count is "<<Count<<endl;

}

int NumberLength(int Number)
{
    char StringEquivalent[50];
    sprintf(StringEquivalent,"%d",Number);
    return strlen(StringEquivalent);
}

WordAndLength HandleNumber(int Number)
{
    if(Number<=9)
        return HandleOneDigit(Number);
    else if(Number>=10 and Number<=99)
        return HandleTwoDigit(Number);
    else
        return HandleThreeDigit(Number);
}


WordAndLength HandleTwoDigit(int Number)
{
    WordAndLength TwoDigit;
    TwoDigit.Word[0]='\0';
    TwoDigit.Count=0;
    int Last=Number%10;
    int First=Number/10;
    if(Number<10)
    {
        return HandleOneDigit(Number);
    }
    else if(Number<20)
    {
        strcpy(TwoDigit.Word,Special[Last].data());
        TwoDigit.Count=(strlen(Special[Last].data()));
        return TwoDigit;
    }
    else if(Number>=20 and Number<=99)
    {
        strcpy(TwoDigit.Word,Tens[First].data());
        TwoDigit.Count=strlen(Tens[First].data());
        if(Last)
        {
           strcat(TwoDigit.Word,"-");
           strcat(TwoDigit.Word,Digits[Last].data());
           TwoDigit.Count+=strlen(Digits[Last].data());

        }
        return TwoDigit;
    }
}
WordAndLength HandleOneDigit(int Number)
{
    WordAndLength OneDigit;
    OneDigit.Word[0]='\0';
    OneDigit.Count=0;

    if(Number>=0 and Number<=9)
    {
        strcpy(OneDigit.Word,Digits[Number].data());
        OneDigit.Count=strlen(Digits[Number].data());
    }
    return OneDigit;
}

WordAndLength HandleThreeDigit(int Number)
{
    WordAndLength ThreeDigit;
    ThreeDigit.Word[0]='\0';
    ThreeDigit.Count=0;
    int MSB=Number/100;
    int Lower=Number%100;

    if(Number<=999 and Number>=100)
    {
        strcpy(ThreeDigit.Word,Digits[MSB].data());
        ThreeDigit.Count=strlen(Digits[MSB].data());
        strcat(ThreeDigit.Word," ");
        strcat(ThreeDigit.Word,Higher[0].data());
        ThreeDigit.Count+=strlen(Higher[0].data());
        if(Lower)
        {
            strcat(ThreeDigit.Word," and ");
            ThreeDigit.Count+=3;
            WordAndLength LowerTwo=HandleTwoDigit(Lower);
            strcat(ThreeDigit.Word,LowerTwo.Word);
            ThreeDigit.Count+=LowerTwo.Count;
        }
    }
    return ThreeDigit;
}
