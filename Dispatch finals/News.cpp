

#include <iostream>
#include <unistd.h>// function for typewrite 
#include <string>
#include <thread>//function for pause
#include <chrono>// declaration of seconds and milliseconds
using namespace std;
void typewrite(string text, int speed = 1000){
    for ( char c : text){
        std::cout << c << flush;
        
        usleep(speed);
    }
}

void news(){
        typewrite("\nVideos flooded social media and our newsroom");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nShowing what many thought to be. . . ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nThe death of Mecha man. . . again. ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nFor nearly fifty years ba Mecha man has protected Los Angeles. Built by an ordinary civilian with ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nno superpowers. This first suit was dubbed by some fans as Mecha Man ‘Prime.’");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nThree generations of pilot, their identities kept secret, have given everything to protect this ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\ncommunity. . . Including their lives. After the tragic passing of prime, the next Mecha man, ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nknown as  Astral , teamed up with the star studded superhero group known as the brave brigade, ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nLeading to an unprecedented period of peacr in the southland. After years of loyal service, tragedy struck again when - - ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nShroud, a former brave brigade member turned villian, killed the pulor of Mecha Man in cold blood.");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nBut yet again, as hope was lost, a third generation of Mecha Man emerged. A mecha man for the modern era. ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nA bulwark against organized crime in the greated Los angeles area, until, today.");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nEarlier today, Mecha Man broke his silence And addresses the media. ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nWalks into the stage in front of dozens of cameras, reporters and lights*");
         this_thread::sleep_for(chrono::seconds(3));
                 typewrite("\nYou: There's been a alot of speculation about my health and the state of the Mecha Man suit, ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nand I'm ready to put that speculation to rest.");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nThe suit has been damages beyond my ability to repair, ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nSo I will be stepping back from superhero work. ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nEffective immediately. ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nReporter gibberish*");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nYou: one at a time, please. ");
         this_thread::sleep_for(chrono::seconds(2));
                 typewrite("\nReporter1: Do you have anything to say to your fans? ");
                  std::cout<<" "<<endl;
                  std::cout<<"=====CHOICE======"<<endl;
                  std::cout<<"W = Thank you"<<endl;
                  std::cout<<"A = I did my best"<<endl;
                  std::cout<<"D = It was all for you"<<endl;
                 char a;
                  std::cin>>a;
        if(a == 'w' || a== 'W'){
                typewrite("\nEverything I've done, every sacrifice me and my family have made has been for the people of Los Angeles. . . ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nNext question. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nReporter 2: Does this mean you're retiring as Mecha Man? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite(" \nWord on the street is you're donezo. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: are you a hundred years old? Why're you talking like that?");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nReporter 2: Answer the question, buddy boy. Are you retiring? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nMy readers need the skinny and i am to deliver");
                 std::cout<<" "<<endl;
        }
        else if( a == 'a'|| a== 'A'){
                typewrite("\n I suppose I want them to know I did my best. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n I worked as long as i could as hard as i could and. . .  ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n That's all anyone can do.");
                typewrite("\nNext question. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nReporter 2: Does this mean you're retiring as Mecha Man? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Word on the street is you're donezo. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: are you a hundred years old? Why're you talking like that?");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nReporter 2: Answer the question, buddy boy. Are you retiring? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nMy readers need the skinny and i am to deliver");
                std:: cout<<" "<<endl;

        }
        else if( a == 'w'|| a== 'W'){
                typewrite("\n I just want to say thank you for the support. . . ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n I hope to be worthy of it.  ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nNext question. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nReporter 2: Does this mean you're retiring as Mecha Man? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Word on the street is you're donezo. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: are you a hundred years old? Why're you talking like that?");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nReporter 2: Answer the question, buddy boy. Are you retiring? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nMy readers need the skinny and i am to deliver");
                std:: cout<<" "<<endl;
        

        }
        else{
                typewrite("\nEverything I've done, every sacrifice me and my family have made has been for the people of Los Angeles. . . ");
                typewrite("\nNext question. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nReporter 2: Does this mean you're retiring as Mecha Man? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Word on the street is you're donezo. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: are you a hundred years old? Why're you talking like that?");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nReporter 2: Answer the question, buddy boy. Are you retiring? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\nMy readers need the skinny and i am to deliver");
                 std::cout<<" "<<endl;
        }
        int w;
        std:: cout<<"=====CHOICE====="<<endl;
         std::cout<<"W = No comment "<<endl;
         std::cout<<"A = Pretty much. "<<endl;
         std::cout<<"D = Not yet. "<<endl;
         std::cin>>w;
        if (w == 'w' || w == 'W'){
                typewrite("\n You: I'm not looking to comment on that just yet. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n That's the only skinny I can give you");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Alright, just one more, please. I gotta get back to uh, just, just one more. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Preferably someone from this century");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: So. Shroud kills your father, goes to jail fifteen years, breaks out and immediately");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n dupes you into a trap");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Where he destroys the Mecha man suit and puts you in a coma for months. . . ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: I didn't hear a question in there. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: Two parter. First, why didn't shroud kill you? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You haven't been conscious for months. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n It'd be easy money taking you out. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: Ok, Shroud wanted the Astral Pulse and Mecha Man gone");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n He got both I'm not sure I mattered much. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: Right. You're unimportant. Which leads me to my next question.  ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Most heroes avenge their family. You, did the opposite. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You killed their legacy");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n How disappointed would your dad be if he were here right now? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Your father, your grandfather, they must he rolling over in their graves. ");
                 std::cout<<" "<<endl;
        }
        else if ( w == 'a' || w == 'A' ){
                typewrite("\n You: well, I dont have a suit, and I don't have any superpowers so, year, short of a miracle. . .  ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Pretty much.  ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 2: Is pretty much the same as definitively? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: Pretty much is the same as pretty much, buddy boy. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Alright, just one more, please. I gotta get back to uh, just, just one more. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Preferably someone from this century");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: So. Shroud kills your father, goes to jail fifteen years, breaks out and immediately");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n dupes you into a trap");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Where he destroys the Mecha man suit and puts you in a coma for months. . . ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: I didn't hear a question in there. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: Two parter. First, why didn't shroud kill you? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You haven't been conscious for months. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n It'd be easy money taking you out. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: Ok, Shroud wanted the Astral Pulse and Mecha Man gone");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n He got both I'm not sure I mattered much. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: Right. You're unimportant. Which leads me to my next question.  ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Most heroes avenge their family. You, did the opposite. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You killed their legacy");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n How disappointed would your dad be if he were here right now? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Your father, your grandfather, they must he rolling over in their graves. ");
                 std::cout<<" "<<endl;
        }
        else if ( w == 'd' || w == 'D'){
                typewrite("\n You: Look, I'm not retiring, Not yet at least.  ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: Not yet. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: Pretty much is the same as pretty much, buddy boy. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Alright, just one more, please. I gotta get back to uh, just, just one more. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Preferably someone from this century");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: So. Shroud kills your father, goes to jail fifteen years, breaks out and immediately");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n dupes you into a trap");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Where he destroys the Mecha man suit and puts you in a coma for months. . . ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: I didn't hear a question in there. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: Two parter. First, why didn't shroud kill you? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You haven't been conscious for months. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n It'd be easy money taking you out. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: Ok, Shroud wanted the Astral Pulse and Mecha Man gone");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n He got both I'm not sure I mattered much. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: Right. You're unimportant. Which leads me to my next question.  ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Most heroes avenge their family. You, did the opposite. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You killed their legacy");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n How disappointed would your dad be if he were here right now? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Your father, your grandfather, they must he rolling over in their graves. ");
                 std::cout<<" "<<endl;
        }
        else{
                 typewrite("\n You: I'm not looking to comment on that just yet. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n That's the only skinny I can give you");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Alright, just one more, please. I gotta get back to uh, just, just one more. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Preferably someone from this century");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: So. Shroud kills your father, goes to jail fifteen years, breaks out and immediately");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n dupes you into a trap");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Where he destroys the Mecha man suit and puts you in a coma for months. . . ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: I didn't hear a question in there. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: Two parter. First, why didn't shroud kill you? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You haven't been conscious for months. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n It'd be easy money taking you out. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You: Ok, Shroud wanted the Astral Pulse and Mecha Man gone");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n He got both I'm not sure I mattered much. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Reporter 3: Right. You're unimportant. Which leads me to my next question.  ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Most heroes avenge their family. You, did the opposite. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n You killed their legacy");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n How disappointed would your dad be if he were here right now? ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Your father, your grandfather, they must he rolling over in their graves. ");
                std:: cout<<" "<<endl;
        }
        int c;
        std:: cout<<"=====CHOICE====="<<endl;
        std:: cout<<"W = LEAVE"<<endl;
        std:: cout<<"A = ANSWER"<<endl;
        std:: cout<<"D = ATTACK"<<endl;
        std:: cin>>c;
        if(c =='w' || c == 'W'){
               std::  cout<<"Leaves*"<<endl;
                std:: cout<<"! Everyone will remember that"<<endl;
        }
        else if (c == 'a' || c== 'A'){
                typewrite("\n You: I think he'd be proud. . . Cause I'm alive");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Which, as you is sensitively pointed out, he isn't. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n I think he knows that I sacrificed everything. . . And that i did my best. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Being Mecha man. . . Protecting my community. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Was the greatest honor I'll ever have. . . ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Now I have to live knowing that. ");
                this_thread::sleep_for(chrono::seconds(2));
                typewrite("\n Thank you for coming. ");
                this_thread::sleep_for(chrono::seconds(2));
                std:: cout<<"! Everyone will remember that"<<endl;
        }
        else if( c == 'd'|| c == 'D'){
              std::   cout<<"Attacks him*"<<endl;
                this_thread::sleep_for(chrono::seconds(2));
              std::   cout<<"! Everyone will remember that"<<endl;
                this_thread::sleep_for(chrono::seconds(2));
                std:: cout<<"! Kicks him and beats him repeatedly *"<<endl;
        }
       

}

int main()
{
    news();

    return 0;
}
