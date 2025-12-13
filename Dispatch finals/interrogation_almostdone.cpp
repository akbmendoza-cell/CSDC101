#include <iostream>
#include <unistd.h>// function for typewrite 
#include <string>
#include <thread>//function for pause
#include <chrono>// declaration of seconds and milliseconds
using namespace std;
bool isMercyful = false;


void typewrite(string text, int speed = 50000){
    for ( char c : text){
        cout << c << flush;
        
        usleep(speed);
    }
}

void scene_apartment_interrogation(){
   typewrite("\nWelcome to Dispatch");
   this_thread::sleep_for(chrono::seconds(1));
   typewrite("\nExclusively made by Aljosh Mendoza");
   this_thread::sleep_for(chrono::seconds(1));
      typewrite("\nDocumented and flowchart by Kent Steven Abillion");
   this_thread::sleep_for(chrono::seconds(1));
   typewrite("\nNOTE: input a command not among the choices will result in bad outcomes. . .");
   this_thread::sleep_for(chrono::seconds(1));
   cout<<"."<<endl;
   this_thread::sleep_for(chrono::seconds(1));
   cout<<"."<<endl;
   this_thread::sleep_for(chrono::seconds(1));
   cout<<"."<<endl;
   this_thread::sleep_for(chrono::seconds(1));
   cout<<"."<<endl;
   this_thread::sleep_for(chrono::seconds(1));
   typewrite("\nRobert: Obviously, I love him. He's my Dad. ");
    this_thread::sleep_for(chrono::seconds(2));// delay command for each outputs
    typewrite("\nSoothing Voice: Hmm...");
    this_thread::sleep_for(chrono::seconds(2));
    typewrite("\nRobert: What does that hmm mean? Just say what you wanna say? ");
    this_thread::sleep_for(chrono::seconds(2));
    typewrite("\nSoothing voice: It's just, When you add obviously it feels a little less obvious. ");
    this_thread::sleep_for(chrono::seconds(2));
    typewrite("\nSoothing Voice: So, I'll ask again...");
    this_thread::sleep_for(chrono::seconds(2));
    typewrite("\nSoothing Voice: How do you really feel about your father? ");
    this_thread::sleep_for(chrono::seconds(2));
    cout<<" "<<endl;
    char a, w;
    cout<<"A = I love my dad."<<endl;
   
    cout<<"W = Didn't know him well."<<endl;
    
    cout<<"D = He's gone"<<endl;
    cout<<" ";
    cin>>a;

     if (a == 'A' || a =='a'){
        typewrite("\nSoothing voice: It's as if, maybe, It's a little more complicated than you feel comfortable admitting.. ");
        this_thread::sleep_for(chrono::seconds(2));
        typewrite("\n Which is completely understandable.");
        this_thread::sleep_for(chrono::seconds(2));
        typewrite("\nRobert: look, I love my dad, alright? I love my dad. That's the truth. ");
        this_thread::sleep_for(chrono::seconds(2));
        typewrite("\nSoothing voice: loved ");
        this_thread::sleep_for(chrono::seconds(2));
        typewrite("\nRobert: That's what i said. ");
        this_thread::sleep_for(chrono::seconds(2));
        typewrite("\nSoothing voice: you said loved... ");
        this_thread::sleep_for(chrono::seconds(2));
        typewrite("\n Your dad's dead, so you don't love him, you loved him. ");
        this_thread::sleep_for(chrono::seconds(2));
        typewrite("\nRobert: why would i be trying to find the man who killed him if I didn't love him? ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n Why would we be in any of this— this— ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nNose starts to bleed*");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: shit. My nose is bleeding. Thought i was getting emotionally snotty.");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nSoothing voice: No, it's probably from when i kicked you in the face.  ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: yeah. Thanks for reminding me. So Here's gonna happen. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n I'm going to hang you off the side of this building, and you're gonna tell me where shroud is, or ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n i'm going to drop you to your death. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Come on, I thought we were having a breakthrough. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nRobert: Hey, we did. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Ya know, for being a real piece of shit, you're pretty easy to talk to. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n But the only breakthrough I need right now, is the location of shroud. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nSoothing voice: I'm not telling you shit you fuckin' loser. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nRobert: See. This is more like, how I thought this would go...");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: I hope shroud kills you just like he killed your father");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n I hope he fuckin' spanks your little daddy issue bitch ass to death. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n Are we outside? ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n It smells like what outside smells");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nThreatens to drop him*");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Fuckfuckfuck- wait! Wait! Wait! Wait");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Hey! Hey! I have neighbors");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Use your inside voice and just tell me where shroud is? ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Okay, okay, uh uh- Steel- Steel Mill. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nThreatens to drop him again*");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n Llewelyn uh, Llewelyn Steel Works okay? Fuck. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: You're sure about that? ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Yes! Please, that's all i know! ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nSoothing voice: HELP! HEEEL-MMM ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Stop screaming, goddamnit");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: HELP! HEEEL-MMM ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Hey, hey, I will pull you up if you quiet the fuck down. ");
         this_thread::sleep_for(chrono::seconds(3));
         cout<<" "<<endl;
    }
     else if(a == 'W' || a == 'w'){
        typewrite("\nSoothing voice: It's as if, maybe, It's a little more complicated than you feel comfortable admitting.. ");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\n Which is completely understandable.");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\nRobert: Didn't really know him well... he wasn't around much");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\nSoothing voice: Well, you're gonna see him even less now, cause he's dead. ");
        this_thread::sleep_for(chrono::seconds(4));
                 typewrite("\nRobert: why would i be trying to find the man who killed him if I didn't love him? ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Why would we be in any of this— this— ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nNose starts to bleed*");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nRobert: shit. My nose is bleeding. Thought i was getting emotionally snotty.");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nSoothing voice: No, it's probably from when i kicked you in the face.  ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nRobert: yeah. Thanks for reminding me. So Here's gonna happen. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n I'm going to hang you off the side of this building, and you're gonna tell me where shroud is, or ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n i'm going to drop you to your death. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Come on, I thought we were having a breakthrough. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nRobert: Hey, we did. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Ya know, for being a real piece of shit, you're pretty easy to talk to. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n But the only breakthrough I need right now, is the location of shroud. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nSoothing voice: I'm not telling you shit you fuckin' loser. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nRobert: See. This is more like, how I thought this would go...");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: I hope shroud kills you just like he killed your father");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n I hope he fuckin' spanks your little daddy issue bitch ass to death. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n Are we outside? ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n It smells like what outside smells");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nThreatens to drop him*");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Fuckfuckfuck- wait! Wait! Wait! Wait");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Hey! Hey! I have neighbors");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Use your inside voice and just tell me where shroud is? ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Okay, okay, uh uh- Steel- Steel Mill. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nThreatens to drop him again*");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n Llewelyn uh, Llewelyn Steel Works okay? Fuck. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: You're sure about that? ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Yes! Please, that's all i know! ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nSoothing voice: HELP! HEEEL-MMM ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Stop screaming, goddamnit");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: HELP! HEEEL-MMM ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Hey, hey, I will pull you up if you quiet the fuck down. ");
         this_thread::sleep_for(chrono::seconds(3));
         cout<<" "<<endl;
     }
     else if(a == 'D'|| a == 'd'){
        typewrite("Soothing voice: It's as if, maybe, It's a little more complicated than you feel comfortable admitting.. ");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\n Which is completely understandable.");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\nRobert: Look... he's gone. ");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\nSoothing voice: That's a bit of an understatement... ");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\nRobert: How so? ");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\nSoothing voice: well, he's more than gone, cause he's fuckin' dead. ");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\n That's the most gone you can be. ");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\nRobert: just so sensitive. ");
        this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n Listen, if i didn't love him, we wouldn't be here, right? ");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\nSoothing voice: we don't have to get into it. ");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\nRobert: nope we're in it now. ");
        this_thread::sleep_for(chrono::seconds(4));
                 typewrite("\nRobert: why would i be trying to find the man who killed him if I didn't love him? ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Why would we be in any of this— this— ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nNose starts to bleed*");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nRobert: shit. My nose is bleeding. Thought i was getting emotionally snotty.");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nSoothing voice: No, it's probably from when i kicked you in the face.  ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nRobert: yeah. Thanks for reminding me. So Here's gonna happen. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n I'm going to hang you off the side of this building, and you're gonna tell me where shroud is, or ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n i'm going to drop you to your death. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Come on, I thought we were having a breakthrough. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nRobert: Hey, we did. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Ya know, for being a real piece of shit, you're pretty easy to talk to. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n But the only breakthrough I need right now, is the location of shroud. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nSoothing voice: I'm not telling you shit you fuckin' loser. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nRobert: See. This is more like, how I thought this would go...");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: I hope shroud kills you just like he killed your father");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n I hope he fuckin' spanks your little daddy issue bitch ass to death. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n Are we outside? ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n It smells like what outside smells");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nThreatens to drop him*");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Fuckfuckfuck- wait! Wait! Wait! Wait");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Hey! Hey! I have neighbors");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Use your inside voice and just tell me where shroud is? ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Okay, okay, uh uh- Steel- Steel Mill. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nThreatens to drop him again*");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n Llewelyn uh, Llewelyn Steel Works okay? Fuck. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: You're sure about that? ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Yes! Please, that's all i know! ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nSoothing voice: HELP! HEEEL-MMM ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Stop screaming, goddamnit");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: HELP! HEEEL-MMM ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Hey, hey, I will pull you up if you quiet the fuck down. ");
         this_thread::sleep_for(chrono::seconds(3));
         cout<<" "<<endl;
        

     }
     else {
       typewrite("\nSoothing voice: It's as if, maybe, It's a little more complicated than you feel comfortable admitting.. ");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\n Which is completely understandable.");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\nRobert: Didn't really know him well... he wasn't around much");
        this_thread::sleep_for(chrono::seconds(4));
        typewrite("\nSoothing voice: Well, you're gonna see him even less now, cause he's dead. ");
        this_thread::sleep_for(chrono::seconds(4));
                 typewrite("\nRobert: why would i be trying to find the man who killed him if I didn't love him? ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Why would we be in any of this— this— ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nNose starts to bleed*");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nRobert: shit. My nose is bleeding. Thought i was getting emotionally snotty.");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nSoothing voice: No, it's probably from when i kicked you in the face.  ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nRobert: yeah. Thanks for reminding me. So Here's gonna happen. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n I'm going to hang you off the side of this building, and you're gonna tell me where shroud is, or ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n i'm going to drop you to your death. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Come on, I thought we were having a breakthrough. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nRobert: Hey, we did. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Ya know, for being a real piece of shit, you're pretty easy to talk to. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\n But the only breakthrough I need right now, is the location of shroud. ");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nSoothing voice: I'm not telling you shit you fuckin' loser. ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nRobert: See. This is more like, how I thought this would go...");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: I hope shroud kills you just like he killed your father");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n I hope he fuckin' spanks your little daddy issue bitch ass to death. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n Are we outside? ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n It smells like what outside smells");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nThreatens to drop him*");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Fuckfuckfuck- wait! Wait! Wait! Wait");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Hey! Hey! I have neighbors");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\n Use your inside voice and just tell me where shroud is? ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Okay, okay, uh uh- Steel- Steel Mill. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nThreatens to drop him again*");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\n Llewelyn uh, Llewelyn Steel Works okay? Fuck. ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: You're sure about that? ");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: Yes! Please, that's all i know! ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nSoothing voice: HELP! HEEEL-MMM ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Stop screaming, goddamnit");
         this_thread::sleep_for(chrono::seconds(3));
         typewrite("\nSoothing voice: HELP! HEEEL-MMM ");
         this_thread::sleep_for(chrono::seconds(2));
         typewrite("\nRobert: Hey, hey, I will pull you up if you quiet the fuck down. ");
         this_thread::sleep_for(chrono::seconds(3));
         cout<<" "<<endl;

     }
    cout<<" A = let him drop"<<endl;
    cout<<" D = Pull him Back"<<endl;
    cin>> w;

    if(w == 'a'|| w == 'A'){
         typewrite("\nRobert: Sir. If you want something to scream about, I'll give you something to scream about");
         this_thread::sleep_for(chrono::seconds(4));
         typewrite("\nDrops him*");
          cout<<" "<<endl;
         this_thread::sleep_for(chrono::seconds(2));
                  cout<<"! He will remember that. "<<endl;
         this_thread::sleep_for(chrono::seconds(2));
         isMercyful = true;
         
    }
    else if(w == 'd'|| w == 'D'){
       typewrite("\nRobert: honestly it was nice talking to someone about this stuff. ");
         this_thread::sleep_for(chrono::seconds(4));
                   cout<<"pulls him back* "<<endl;
                   cout<<" "<<endl;
         this_thread::sleep_for(chrono::seconds(2));
                  cout<<"! He will remember that. "<<endl;
         this_thread::sleep_for(chrono::seconds(2));
         isMercyful = false;
    }
    else{
      typewrite("\nRobert: Sir. If you want something to scream about, I'll give you something to scream about");
         this_thread::sleep_for(chrono::seconds(4));
         cout<<"Drops him*"<<endl;
         cout<<" "<<endl;
         this_thread::sleep_for(chrono::seconds(2));
         cout<<"! He will remember that. "<<endl;
         this_thread::sleep_for(chrono::seconds(2));
         isMercyful = false;
    }
    


}

int main() {
  scene_apartment_interrogation();
    return 0;
}
