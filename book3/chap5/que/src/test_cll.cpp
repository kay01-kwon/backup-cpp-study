#include "clinked_list.cpp"

int main()
{
    CList<string> playList;
    playList.add("Stayin Alive");
    playList.display();
    cout<<"\n";

    playList.add("Le Freak");
    cout<<playList.front();
    cout<<"\n";
    
    playList.add("Jive Talkin");
    playList.display();
    cout<<"\n";
    
    playList.add("Sam Smith");
    playList.display();
    cout<<"\n";
    
    playList.add("Alec Benjamin");
    playList.display();
    cout<<"\n";
    
    playList.add("Disco Inferno");
    playList.display();
    cout<<"\n";
    
    cout<<playList.front()<<"\n";

    playList.display();
    cout<<"\n";

    playList.advance();
    cout<<playList.front()<<"\n";
    playList.display();
    cout<<"\n";

    return EXIT_SUCCESS;

}
