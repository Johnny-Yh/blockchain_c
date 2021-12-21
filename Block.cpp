#include <time.h>
#include <string>
#include "Utils.cpp"
using namespace std;

class Block
{
    public:
    // 时间戳
    time_t Timestamp;
    // 区块数据
    string Data;
    // 上一个区块的哈希
    string PrevBlockHash;
    // 当前区块的哈希
    string Hash;
    // 设置当前区块的哈希
    void SetHash();
    // 无参构造函数 只在创世区块使用
    Block();
    // 有参构造函数 创建新区块时使用
    Block(string data,string prevblockhash);

};
Block::Block(){
    Data = "Genesis Block";
    PrevBlockHash = "";
    Timestamp = time(0);
    SetHash();
}

Block::Block(string data,string prevblockhash){
    Data = data;
    PrevBlockHash = prevblockhash;
    Timestamp = time(0);
    SetHash();
}

void Block::SetHash(){
    Hash = sha256(PrevBlockHash+to_string((long long)Timestamp)+Data);
}