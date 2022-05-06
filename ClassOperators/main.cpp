#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class Seq{
    std::string s;
public:
    Seq(std::string& seq);
//    bool operator<(const Seq& a) const{
//        return this->s < a.s;
//    }
//    friend std::ostream& operator<<(std::ostream& out, const Seq& seq);
};

Seq::Seq(std::string& seq){
    s = seq;
}

class Kmers{
    std::vector<Seq> kmers;
public:
    void add(Seq& s);
    void print_ordered();
};

void Kmers::add(Seq& s){
    kmers.push_back(s);
}

void Kmers::print_ordered(){
    std::sort(kmers.begin(), kmers.end());
//    for(auto i: kmers){
//        std::cout << i << std::endl;
//    }
}

//std::ostream& operator<< (std::ostream &out, const Seq& seq){
//    out << seq.s;
//    return out;
//}

void print_sorted_vector(std::vector<std::string> seqs){
    std::sort(seqs.begin(), seqs.end());
    for(auto i: seqs){
        std::cout << i << std:: endl;
    }
}


int main() {
    std::vector<std::string> seqs {"ACT", "CGT", "CCC", "TTT", "NACT", "NNAD", "NVHB", "AAA", "ABC"};
    print_sorted_vector(seqs);
    Kmers k;
    for(auto i: seqs){
        Seq s(i);
        k.add(s);
    }
    k.print_ordered();

    return 0;
}
