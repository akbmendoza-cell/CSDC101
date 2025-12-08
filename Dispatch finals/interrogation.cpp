#include <iostream>
#include <thread>//function for pause
#include <chrono>// declaration of seconds and milliseconds
using namespace std;

void scene_apartment_interrogation(){
    cout<<"Robert: Obviously, I love him. He's my Dad. "<<endl;
    this_thread::sleep_for(chrono::seconds(3));// delay command for each outputs
    cout<<"Soothing Voice: Hmm..."<<endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout<<"Robert: What does that hmm mean? Just say what you wanna say? "<<endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout<<"Soothing voice: It's just, When you add obviously it feels a little less obvious. "<<endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout<<"Soothing Voice: So, I'll ask again..."<<endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout<<"Soothing Voice: How do you really feel about your father? "<<endl;
    this_thread::sleep_for(chrono::seconds(3));
    char a, w;
    cout<<"A = I love my dad."<<endl;
   
    cout<<"W = Didn't know him well."<<endl;
    
    cout<<"D = He's gone"<<endl;
    cout<<" ";
    cin>>a;

     if (a == 'A' || a =='a'){
        cout<<"Soothing voice: It's as if, maybe, It's a little more complicated than you feel comfortable admitting.. "<<endl;
        this_thread::sleep_for(chrono::seconds(4));
        cout<<"Which is completely understandable."<<endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout<<"Robert: look, I love my dad, alright? I love my dad. That's the truth. "<<endl;
        this_thread::sleep_for(chrono::seconds(4));
        cout<<"Soothing voice: loved "<<endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout<<"Robert: That's what I said. "<<endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout<<"Soothing voice: you said loved... "<<endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout<<"Your dad's dead, so you don't love him, you loved him. "<<endl;
        this_thread::sleep_for(chrono::seconds(3));
    }
     else if(a == 'W' || a == 'w'){
        cout<<"Soothing voice: It's as if, maybe, It's a little more complicated than you feel comfortable admitting.. "<<endl;
        this_thread::sleep_for(chrono::seconds(4));
        cout<<"Which is completely understandable."<<endl;
        this_thread::sleep_for(chrono::seconds(4));
        cout<<"Robert: Didn't really know him well... he wasn't around much"<<endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout<<"Soothing voice: Well, you're gonna see him even less now, cause he's dead. "<<endl;
     }
     else if(a == 'D'|| a == 'd'){
        cout<<"Soothing voice: It's as if, maybe, It's a little more complicated than you feel comfortable admitting.. "<<endl;
        this_thread::sleep_for(chrono::seconds(4));
        cout<<"Which is completely understandable."<<endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout<<"Robert: Look… he's gone. "<<endl;
        this_thread::sleep_for(chrono::seconds(4));
        cout<<"Soothing voice: That's a bit of an understatement… "<<endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout<<"Robert: How so? "<<endl;
        this_thread::sleep_for(chrono::seconds(4));
        cout<<"Soothing voice: well, he's more than gone, cause he's fuckin' dead. "<<endl;
        this_thread::sleep_for(chrono::seconds(4));
        cout<<"That's the most gone you can be. "<<endl;
        this_thread::sleep_for(chrono::seconds(4));
         cout<<"Robert: just so sensitive. "<<endl;
        this_thread::sleep_for(chrono::seconds(3));
         cout<<"Listen, if i didn't love him, we wouldn't be here, right? "<<endl;
        this_thread::sleep_for(chrono::seconds(3));
         cout<<"Soothing voice: we don't have to get into it. "<<endl;
        this_thread::sleep_for(chrono::seconds(3));
         cout<<"Robert: nope we're in it now. "<<endl;
        this_thread::sleep_for(chrono::seconds(3));
        

     }
    

}

int main() {
  /*  std::cout << "First message" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Pause for 2 seconds

    std::cout << "Second message after pause" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));  // Pause for 500 milliseconds

    std::cout << "Third message after another pause" << std::endl;
*/
  
  scene_apartment_interrogation();
    return 0;
}

