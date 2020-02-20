#include <iostream>

using namespace std;

class Kadr{
    public:
    char* name;
    int tseh,rozriad;
    Kadr();
    Kadr(char* n,int a,int b){
        name = n;
        tseh = a;
        rozriad = b;
    }
    Kadr(const Kadr&);
    ~Kadr(){}
    void set(char* n,int a,int b){
        name = n;
        tseh = a;
        rozriad = b;
    }
    void setName(char* n){
        name = n;
    }
    void setTseh(int a){
        tseh = a;
    }
    void setRozriad(int b){
        rozriad = b;
    }
    char* getName(){
        return name;
    }
    int getTseh(){
        return tseh;
    }
    int getRozriad(){
        return rozriad;
    }
    char *name(void){return name;}
};

int main(){
    Kadr k("Gus",0,6);
    cout<<k.getName()<<endl
        <<k.getTseh()<<endl
        <<k.getRozriad()<<endl;
    
    
}
