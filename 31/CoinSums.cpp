#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned xx = 3;
    cout<<" pd2 "<<" pd1 "<<" p50 "<<" p20 "<<" p10 "<<" p5 "<<" p2 "<<" p1 "<<endl;
    int Amount = 200, Ways = 0;
    for(int pd2=0;pd2<=1;pd2++){
        int Cash = pd2*200;
       if(Cash == Amount){
            Ways++;
            cout<<pd2<<setw(xx)<<endl;
            break;
        }
        for(int pd1=0;pd1<=2;pd1++){
            for(int p50 = 0; p50<=4;p50++){
                 int Cash = pd2*200+pd1*100+p50*50;
                if(Cash == Amount){
                    Ways++;
                    cout<<pd2<<setw(xx)<<pd1<<setw(xx)<<p50<<endl;
                    break;
                }
                for(int p20=0;p20<=10;p20++){
                    int Cash = pd2*200+pd1*100+p50*50+p20*20;
                    if(Cash == Amount){
                        Ways++;
                        cout<<pd2<<setw(xx)<<pd1<<setw(xx)<<p50<<setw(xx)<<p20<<endl;
                        break;
                    }
                    for(int p10 =0;p10<=20;p10++){
                        int Cash = pd2*200+pd1*100+p50*50+p20*20+p10*10;
                        if(Cash == Amount){
                            Ways++;
                            cout<<pd2<<setw(xx)<<pd1<<setw(xx)<<p50<<setw(xx)<<p20<<setw(xx)<<p10<<endl;
                            break;
                        }
                        for(int p5=0;p5<=40;p5++){
                            int Cash = pd2*200+pd1*100+p50*50+p20*20+p10*10+p5*5;
                            if(Cash == Amount){
                                    Ways++;
                                    cout<<pd2<<setw(xx)<<pd1<<setw(xx)<<p50<<setw(xx)<<p20<<setw(xx)<<p10<<setw(xx)<<p5<<endl;
                                    break;
                            }
                            for(int p2=0;p2<=100;p2++){
                                 int Cash = pd2*200+pd1*100+p50*50+p20*20+p10*10+p5*5+p2*2;
                                if(Cash == Amount){
                                    Ways++;
                                    cout<<pd2<<setw(xx)<<pd1<<setw(xx)<<p50<<setw(xx)<<p20<<setw(xx)<<p10<<setw(xx)<<p5<<setw(xx)<<p2<<endl;
                                    break;
                                }
                                for(int p1=0;p1<=200;p1++){
                                    int Cash = pd2*200+pd1*100+p50*50+p20*20+p10*10+p5*5+p2*2+p1;
                                    //cout<<"p1 is "<<p1<<" Amound it "<<Amount<<" Cash is "<<Cash<<endl;
                                    if(Cash == Amount){
                                        Ways++;
                                        cout<<pd2<<setw(xx)<<pd1<<setw(xx)<<p50<<setw(xx)<<p20<<setw(xx)<<p10<<setw(xx)<<p5<<setw(xx)<<p2<<setw(xx)<<p1<<endl;
                                        break;
                                    }
                                }

                            }


                        }

                    }

                }

            }

        }

    }
    cout<<Ways<<" Ways Possible "<<endl;
}
