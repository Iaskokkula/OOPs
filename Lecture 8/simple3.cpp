#include<iostream>
using namespace std;
class temple_run{
    private:
    int score;
    public:
    void left(void){
        this->score +=1;
    }
    void right(void){
        this->score = 1;
    }
    void get_score(void){
        cout<<"your score is "<<score<<endl;
    }

    // constructor -----this is called when object is created 
    temple_run(){
        this->score=0;
        cout<<"Game started with score and id of player is "<<score<<" and " <<this<<endl;
        
    }
    // constructor overloading 
    temple_run(int l){
        this->score = l;
        cout<< "the game started with score "<<score<<endl;
    cout<<"Game started with score and id of player is "<<score<<" and " <<this<<endl;

    }
    ~temple_run(){
        cout<<"Game finished for player with id "<<this<<endl;
    }
    friend void bonus(temple_run* p6);
    //  friend void bonus(temple_run *t);
};
// void temple_run :: left(void){
//     this->score ++;
// }
// void temple_run :: right(void){
//     this->score ++;
// }
// void temple_run :: get_score(void){
//     cout<<"Your score is: "<< this->score<<endl;
// }
void bonus(temple_run* p6){
    //p6.score=p6.score+5;
    p6->score=p6->score+50;
     
}

int main(){
    temple_run p1;
    temple_run p2(5);
    bonus(&p2);

    // p1.left();
    // p1.get_score();
    // p1.right();
    
    // // bonus(&p1);
    p2.get_score();
    return 0;
}