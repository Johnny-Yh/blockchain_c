#include <vector>
#include <string>
#include "Block.cpp"
using namespace std;

class Blockchain{
    public:
    // 区块链
    vector<Block> blocks;
    // 区块链构造函数
    Blockchain();
    // 向区块链中添加新区块
    void Addblock(string data);
};

Blockchain::Blockchain(){
    Block temp;
    blocks.emplace_back(temp);
}

void Blockchain::Addblock(string data){
    Block temp(data,blocks[blocks.size()-1].Hash);
    blocks.emplace_back(temp);
}