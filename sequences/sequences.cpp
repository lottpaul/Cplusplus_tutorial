//
// Created by plott on 4/29/22.
//

#include "sequences.h"

Sequence::Sequence() {
    seq_header = "";
    sequence = "";
    length =0;
    type = unknown;
}

Sequence::Sequence(std::string header, std::string seq, seq_type typ){
    seq_header = header;
    sequence = seq;
    length = seq.size();
    type = typ;
}

Sequence::Sequence(std::string header, std::string seq){
    seq_header = header;
    sequence = seq;
    length = seq.size();

    auto found_u = seq.find('U');
    auto found_t = seq.find('T');
    if (found_u!=std::string::npos) {
        if (found_t!=std::string::npos){
            type=unknown;
        }
        else{
            type = rna;
        }
    }
    else if (found_t!=std::string::npos){
        type = dna;
    }
}

void Sequence::print(){
    std::cout << "> "  << seq_header << std::endl;
    std::cout << sequence << std::endl;
    switch (type){
        case dna:
            std::cout << "Type: DNA"<< std::endl;
            break;
        case rna:
            std::cout << "Type: RNA" << std::endl;
            break;
        case amino:
            std::cout << "Type: Amino Acid" << std::endl;
            break;
        default:
            std::cout << "Type: Unknown" << std::endl;
    }
}

std::string& Sequence::get_sequence(){
    return sequence;
}

std::string& Sequence::get_header(){
    return seq_header;
}

Protein::Protein(std::string &header, std::string &seq) {
    seq_header = header;
    sequence = seq;
    length = seq.size();
    type = amino;
}

Nucleotide Nucleotide::reverse(){
    std::string rev_seq = sequence;
    std::reverse(rev_seq.begin(), rev_seq.end());
    std::string new_header = seq_header + " - Reverse";

    return Nucleotide(new_header, rev_seq, type);
}

Nucleotide Nucleotide::complement(){
    std::string s = sequence;
    std::string new_header = seq_header + " Complement";
    for(auto i=0; i<s.size(); i++){
        char n = s[i];
        std::cout << n << std::endl;
        /*
        s[i] == nucleotide_complement[n] //Error because we are using operator[] which can also change a varianble-
                                         // but we have defined nucleotide_complement as const
        */
        s[i] = nucleotide_complement.at(n);

    }

    return Nucleotide(new_header, s, type);
}

//Nucleotide::Nucleotide(std::string header, std::string seq){
//    seq_header = header;
//    sequence = seq;
//    length = seq.size();
//
//    auto found_u = seq.find('U');
//    auto found_t = seq.find('T');
//    if (found_u!=std::string::npos) {
//        if (found_t!=std::string::npos){
//            type=unknown;
//        }
//        else{
//            type = rna;
//        }
//    }
//    else if (found_t!=std::string::npos){
//        type = dna;
//    }
//}

//void Sequence::import_fasta(std::string& fn) {
//    std::ifstream infile(fn);
//    if (infile.is_open()){
//        std::string line;
//        while(std::getline(infile, line)){
//            line.erase(std::remove(line.begin(), line.end(), '\n'), line.end());
//            if (line.size() == 0){
//                continue;
//            }
//            else if (line[0] == '<') {
//                seq_header = line;
//            }
//            else {
//                sequence.append(line);
//            }
//        }
//    }
//    return;
//}

