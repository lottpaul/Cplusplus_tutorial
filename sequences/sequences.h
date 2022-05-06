//
// Created by plott on 4/29/22.
//

#ifndef SEQUENCES_SEQUENCES_H
#define SEQUENCES_SEQUENCES_H
#include <string>
#include <iostream>
#include <set>
#include <map>
#include <fstream>
#include <algorithm>

enum seq_type {dna, rna, amino, unknown};

const std::set<char> amino_seq = {'A', 'C', 'D', 'E', 'F',
                                  'G', 'H', 'I', 'K', 'L',
                                  'M', 'N', 'P', 'Q', 'R',
                                  'S', 'T', 'V', 'W', 'Y',
                                  '.', '-', '*'
};

const std::set<char> nuc_seq = {'A', 'C', 'T', 'G',
                                'R', 'Y', 'S', 'W',
                                'K', 'M', 'B',
                                'D', 'H', 'V', 'N',
                                '.', '-', 'U'
};

const std::map<std::string, char>  codon_table_standard = {{"TTT", 'F'}, {"TTC", 'F'}, {"TTA", 'L'}, {"TTG", 'L'},
                                                           {"CTT", 'L'}, {"CTC", 'L'}, {"CTA", 'L'}, {"CTG", 'L'},
                                                           {"ATT", 'I'}, {"ATC", 'I'}, {"ATA", 'I'}, {"ATG", 'M'},
                                                           {"GTT", 'V'}, {"GTC", 'V'}, {"GTA", 'V'}, {"GTG", 'V'},
                                                           {"TCT", 'S'}, {"TCC", 'S'}, {"TCA", 'S'}, {"TCG", 'S'},
                                                           {"CCT", 'P'}, {"CCC", 'P'}, {"CCA", 'P'}, {"CCG", 'P'},
                                                           {"ACT", 'T'}, {"ACC", 'T'}, {"ACA", 'T'}, {"ACG", 'T'},
                                                           {"GCT", 'A'}, {"GCC", 'A'}, {"GCA", 'A'}, {"GCG", 'A'},
                                                           {"TAT", 'Y'}, {"TAC", 'Y'}, {"TAA", '*'}, {"TAG", '*'},
                                                           {"CAT", 'H'}, {"CAC", 'H'}, {"CAA", 'Q'}, {"CAG", 'Q'},
                                                           {"AAT", 'N'}, {"AAC", 'N'}, {"AAA", 'K'}, {"AAG", 'K'},
                                                           {"GAT", 'D'}, {"GAC", 'D'}, {"GAA", 'E'}, {"GAG", 'E'},
                                                           {"TGT", 'C'}, {"TGC", 'C'}, {"TGA", '*'}, {"TGG", 'W'},
                                                           {"CGT", 'R'}, {"CGC", 'R'}, {"CGA", 'R'}, {"CGG", 'R'},
                                                           {"AGT", 'S'}, {"AGC", 'S'}, {"AGA", 'R'}, {"AGG", 'R'},
                                                           {"GGT", 'G'}, {"GGC", 'G'}, {"GGA", 'G'}, {"GGG", 'G'},
                                                           };

const std::map<char, char> nucleotide_complement = {{'A', 'T'}, {'T', 'A'},
                                                    {'C', 'G'}, {'G', 'C'},
                                                    {'U', 'A'}, {'N', 'N'},
                                                    {'R', 'Y'}, {'Y', 'R'},
                                                    {'S', 'S'}, {'W', 'W'},
                                                    {'K', 'M'}, {'M', 'K'},
                                                    {'B', 'V'}, {'V', 'B'},
                                                    {'D', 'H'}, {'H', 'D'},
                                                    {'-', '-'}, {'.', '.'},
                                                  };

const std::map<char, std::string> one_aa =  {{'A', "Ala"}, {'C', "Cys"}, {'D', "Asp"}, {'E', "Glu"}, {'F', "Phe"},
                                             {'G', "Gly"}, {'H', "His"}, {'I', "Ile"}, {'K', "Lys"}, {'L', "Leu"},
                                             {'M', "Met"}, {'N', "Asn"}, {'P', "Pro"}, {'Q', "Gln"}, {'R', "Arg"},
                                             {'S', "Ser"}, {'T', "Thr"}, {'V', "Val"}, {'W', "Trp"}, {'Y', "Tyr"},
                                             };

class Nucleotide;


class Sequence {
public:
    Sequence();
    Sequence(std::string header, std::string seq);
    Sequence(std::string header, std::string seq, seq_type typ);
    void import_fasta(std::string& fn);
    void print();
    std::string& get_sequence();
    std::string& get_header();
    std::string get_subsequence(int start, int end);
private:

protected:
    std::string seq_header;
    std::string sequence;
    int length;
    seq_type type;
};

class Protein: public Sequence {

public:
    Protein(std::string& header, std::string& seq);
    Nucleotide untranslate();
};

class Nucleotide: public Sequence {
    int a;
    int c;
    int g;
    int t;
public:
    Nucleotide();
    Nucleotide(std::string header, std::string seq):Sequence(header, seq){};
    Nucleotide(std::string header, std::string seq, seq_type typ):Sequence(header, seq, typ){};
    Protein translate(int frame);
    Nucleotide reverse();
    Nucleotide complement();
    Nucleotide reverse_comlement();
    Nucleotide transcribe();

};




#endif //SEQUENCES_SEQUENCES_H
