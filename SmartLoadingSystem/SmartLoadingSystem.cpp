#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;


string choice;

void intro();
void choice_1();
void choice_2();
void choice_3();
void choice_4();
void error();
void subscribe();

int main() {
intro();
system("pause>0");
return 0;
}
void choice_1 () { //Get 2 GB POWER EVERY DAY FOR ALL SITES & APPS (14 GB) + 6 GB + FREE UNLI Tiktok EVERY DAY, 7DAYS, P149!
    while(1) {
    system("cls");
    if(choice=="1") {
        subscribe();
    }else if(choice=="0"){
        intro();
        }
    }
}
void choice_2() { //Hot Deals
    system("cls");
    cout<<"1) Load P144 to unlock this HOT DEAL!\n"<<"2) Sunday Funday: FREE 1 GB STORIES\n"<<"0) Back\n\n"<<"Please enter your choice: ";
    cin>>choice;
    if (choice=="1"){
       subscribe();
    }else if(choice=="2") {
        system("cls");
        cout<<"Share your weekend highlights with FREE 1 GB STORIES for 1 day! Get it now!\n"<<"1)Subscribe\n"<<"2)Cancel\n"<<"0) Back\n\n"<<"Please enter your choice: ";
        cin>>choice;
            while(1) {
                if(choice=="1") {
                   subscribe();
                }else if(choice=="2") {
                    intro();
                }else choice_2();
            }
    } else if(choice=="0") {
         intro();
    }else choice_2();
}
void choice_3() { //Enjoy SHAREABLE DATA + FREE UNLI TiktTok EVERYDAY DAY for 7 Days
    system("cls");
    cout<<"Enjoy SHAREABLE DATA + FREE UNLI TiktTok EVERYDAY DAY for 7 Days\n"<<"1) 8 GB + Unli Allnet Texts, P99\n"<<"2) 12GB + Unli Allnet Calls & Texts, P149\n"<<"0) Back\n\n"<<"Please enter your choice: ";
    cin>>choice;
    while(1) {
        if (choice=="1"){
            system("cls");
            cout<<"Get 8 GB SHAREABLE DATA FOR ALL SITES &APPS +UNLI TikTok EVERYDAY DAY + Unli Allnet Texts, 7 days, P99!\n"<<"1) Subscribe\n"<<"2)  Want 12 GB MORE + Unli Allnet Calls! Add P50!\n"<<"0) Back\n\n"<<"Please enter your choice:";
            cin>>choice;
            while(1) {
                if(choice=="1"){
                    subscribe();
                }else if(choice=="2"){
                    system("cls");
                    cout<<"Get 12 GB SHAREABLE DATA FOR ALL SITES & APPS + UNLI TikTok EVERY DAY +Unli Allnet Calls & Texts, 7 Days, P149!\n"<<"1) Subscribe\n"<<"0) Back\n\n"<<"Please enter your choice: ";
                    cin>>choice;
                    if(choice=="1"){
                        subscribe();
                    }else if(choice=="0"){
                        choice_3();
                    }else choice_3();

            }else if(choice=="0"){
            choice_3();
            }else intro();
            }

        } else if(choice=="2") {
            system("cls");
            cout<<"Get 12 GB SHAREABLE DATA FOR ALL SITES & APPS + UNLI TikTiok EVERY DAY+ Unli Allnet Calls & Texts, 7 Days, P 149!\n"<<"1) Subscribe\n"<<"0) Back\n\n"<<"Please enter your choice: ";
            cin>>choice;
            while(1) {
                if(choice=="1"){
                    subscribe();
                }else if (choice=="0") {
                    system("cls");
                    choice_3();
                } else choice_3();
            }
        }else if(choice=="0") {
                intro();
        }else choice_3();
    }
}
void choice_4() {//FREE TIKTOK with:
    system("cls");
    cout<<"FREE TIKTOK with:\n\n"<<"1) GIGA POWER\n"<<"2) GIGA VIDEO\n"<< "3) GIGA STORIES\n"<<"4) GIGA GAMES\n"<<"5) ALL DATA\n"<<"0) Back\n\n"<<"Please enter your choice:";
    cin>>choice;
    while(1) {
        if(choice=="1") {
                system("cls");
              cout<<"FREE TIKTOK with:\n"<<"1) GIGA POWER\n"<<"2) GIGA POWER++\n"<<"0) Back \n\n"<<"Please enter you choice: ";
              cin>>choice;
              while(1) {
                if (choice=="1") {
                        system("cls");
                    cout<<"Get 2 GB POWER EVRY DAY FOR ALL SITES & APPS PLUS:\n"<<"1) 6 GB, 7 Days, P 149\n"<<"2) 24 GB, 30 Days, P 499\n"<<"0) Back\n\n"<<"Please enter your choice: ";
                    cin>>choice;
                    while(1) {
                        if(choice=="1") {
                            system("cls");
                            cout<<"Get 2 GB POWER EVERY DAY FOR ALL SITES & APPS (14 GB) + 6 GB  + FREE UNLI TikTok EVERY DAY, 7 Days, P149!\n"<<"1) Subscribe\n"<<"2) Want 24 GB MORE & 30 Days! Add P350!\n"<<"0) Back\n\n"<<"Please enter your choice: ";
                            cin>>choice;
                            while(1) {
                                if(choice=="1"){
                                    subscribe();
                                }else if(choice=="2"){
                                    system("cls");
                                    cout<<"Get 2 GB POWER EVERY DAY FOR ALL SITES & APPS (60 GB)+ 24 GB + FREE Unli TikTok EVERY DAY, 30 Days, P499!\n"<<"1) Subscribe\n"<<"0) Back\n\n"<<"Please enter your choice: ";
                                    cin>>choice;
                                    while(1) {
                                        if(choice=="1") {
                                            subscribe();
                                        }else if(choice=="0") {
                                            choice_4();
                                        }else intro();
                                    }
                                }
                            }
                        } else if (choice=="0") {
                             choice_4();
                        }else intro();
                    }
                }else if(choice=="2") {
                    system("cls");
                  cout<<"Get 2GB POWER EVERYDAY FOR ALL SITES & APPS + Unli Allnet Calls & Text PLUS:\n"<<"1) 2GB, 3 Days, P99\n"<<"2) 6GB, 7 Days, P199\n"<<"3) 24 GB, 30 Days, P699\n"<<"0) Back\n"<<"Please enter your choice: ";
                  cin>>choice;
                  while(1) {
                     if(choice=="1") {
                            system("cls");
                         cout<<"Get 2 GB POWER EVERY DAY (6GB) + 2GB + Unli Allnet Calls & Texts + FREE 1 GB TikTok EVERY DAY, 3 Days,P99!\n"<<"1) Subscribe\n"<<"2)Want 6 GB MORE & 7 Days! Add P100!\n"<<"0) Back\n\n"<<"Please enter your choice: ";
                         cin>>choice;
                         while(1) {
                            if(choice=="1") {
                                subscribe();
                            }else if (choice=="2") {
                                system("cls");
                                cout<<"Get 2 GB POWER EVERY DAY (14 GB) + 6 GB+ Unli Allnet Calls & Texts + FREE UNLI TikTok EVERY DAY, 7 Days, P199!\n"<<"1)Subscribe\n"<<"0)Back\n\n"<<"Please enter your choice:";
                                cin>>choice;
                                while(1) {
                                    if(choice=="1") {
                                        subscribe();
                                    } else choice_4();
                                }
                            }else if (choice=="0") {
                                choice_4();
                            }else intro();
                         }
                    }else if(choice=="2") {
                        system("cls");
                        cout<<"Get 2 GB POWER EVERY DAY (14 GB) + 6 GB + Unli Allnet Calls & Texts+ FREE UNLI Tiktok EVERY DAY, 7 Days, P 199\n"<<"1) Subscribe\n"<<"2) Want 24 GB MORE & 30 Days! Add P500!\n"<<"0) Back\n\n"<<"Please enter your choice: ";
                        cin>>choice;
                        while(1) {
                            if(choice=="1") {
                                subscribe();
                            }else if (choice=="2") {
                                system("cls");
                                cout<<"Get 2GB POWER EVERY DAY (60 GB) +24 GB + Unli Allnet Calls& Texts + FREE UNLI TikTok EVERY DAY, 30 Days,P699!\n"<<"1) Subscribe\n"<<"0) Back\n\n"<<"Please enter your choice: ";
                                cin>>choice;
                                while(1) {
                                    if(choice=="1") {
                                        subscribe();
                                    }else if (choice=="0") {
                                    choice_4();
                                    }else intro();
                                }
                            }else if(choice=="0") {
                                choice_4() ;
                            }
                            else intro();
                        }
                     }else if (choice=="3") {
                         system("cls");
                         cout<<"Get 2GB POWER EVERY DAY (60 GB) + 24 GB + Unli Allnet Calls & Texts + FREE UNLI TikTok EVERY DAY, 30 Days, P699!\n"<<"1) Subscribe\n"<<"0) Back\n\n"<<"Please enter your choice: ";
                         cin>>choice;
                         while(1) {
                            if(choice=="1") {
                                subscribe();
                            }else if (choice=="0") {
                            choice_4();
                            }else intro();
                         }
                     } else if( choice=="0") {
                     choice_4();
                     }else intro();
                  }
                    while(1) {
                        if(choice=="1") {
                            subscribe();
                        }else if (choice=="0") {
                            choice_4();
                        }else intro();
                    }
                }
              }
        }else if(choice=="2") { //Not yet Available
                system("cls");
                cout<<"FREE TIKTOK with\n"<<"1) GIGA VIDEO\n"<<"2) GIGA VIDEO+\n"<<"0) Back\n\n"<<"Please enter your choice: ";
                while(1) {
                    if(choice=="1") {

                    }else if(choice=="2")
                }
        }else if(choice=="3") { //Not yet Available

        }else if(choice=="4") {//Not yet Available

        }else if (choice=="5") {//Not yet Available

        } else choice_4();
    }

}
void error() {
    char the[]={'T','H','E'};
    char number[]={'N','U','M','B','E','R'};
    char you[]={'Y','O','U'};
    char entered[]={'E','N','T','E','R','E','D'};
    char is[]= {'I','S'};
    char invalid[]={'I','N','V','A','L','I','D','!'};

    system("cls");
    for (int i=0; i<10; i++) {
        cout<<"\n\t\t\t";
    }
    cout<<"\t";
    for(int i=0; i<3; i++) {
        cout<<the[i]<<"\a";
        Sleep(100);
    }
    cout<<"\t";
    for(int i=0; i<6; i++) {
        cout<<number[i]<<"\a";
         Sleep(100);
    }
    cout<<"\t";
     for(int i=0; i<3; i++) {
        cout<<you[i]<<"\a";
         Sleep(100);
    }
    cout<<"\t";
    for(int i=0; i<7; i++) {
        cout<<entered[i]<<"\a";
        Sleep(100);
    }
    cout<<"\t";
    for (int i=0; i<2; i++) {
        cout <<is[i]<<"\a";
        Sleep(100);
    }
    cout<<"\t";
    for(int i=0; i<8; i++) {
        cout<<invalid [i]<<"\a";
        Sleep(100);
    }
    cout<<"\n\n\n";
    system("pause");
}
void subscribe() {
    system("cls");
    cout<<"Thank You! A text confirmation will be sent shortly.Discover MORE promos on the GigaLife App & get MORE points to redeem FREE promos.";
    cout<<"\n1)Get the GigaLife App NOW!\n";
    cin>>choice;
     while(1) {
            if (choice=="1") {
                system("cls");
                cout<<"Thank You! A text with the download link will be sent shortly. Simple. Easy. Rewarding. That's the Gigalife App!";
                Sleep(1000);
                intro();
            }else intro();
        }
}
void intro(){ //Dashboard
system("cls");
cout<<"Bal: ";
cout<<"\nGPT: ";
cout<<"\n1)2GB POWER  EVERY DAY,7D";
cout<<"\n2)Hot Deals";
cout<<"\n3)NEW POWER ALL";
cout<<"\n4)FREE TIKTOK FOR ALL";
cout<<"\n5)DOUBLE GIGA/DATA";
cout<<"\n6)ALL DATA";
cout<<"\n7)ALLNET:OTH";
cout<<"\n8)Bal:Svcs\n\n";
cout<<"Please enter your choice: \a";
cin>>choice;

if(choice=="1") {
    choice_1();
}else if(choice=="2") {
    choice_2();
}else if(choice=="3") {
    choice_3();
}else if(choice=="4") {
    choice_4();
    intro();
}else if(choice=="5") {
    cout<<"Hello World!";
    intro();
}else if(choice=="6") {
    cout<<"Hello World!";
    intro();
}else if(choice=="7") {
    cout<<"Hello World!";
    intro();
}else if(choice=="8") {
    cout<<"Hello World!";
    intro();
}else intro();

}
