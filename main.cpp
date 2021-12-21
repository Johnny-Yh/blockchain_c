#include "Blockchain.cpp"
using namespace std;

int main(){
    Blockchain a;
    a.Addblock("Send 1 BTC to Ivan");
    a.Addblock("Send 2 more BTC to Ivan");

    for(int i = 0; i < a.blocks.size(); ++i){
        cout<<"Prev.hash:"<< a.blocks[i].PrevBlockHash<< endl;
        cout<<"Data:"<< a.blocks[i].Data<< endl;
        cout<<"Hash:"<< a.blocks[i].Hash<< endl;
    }
}