#include <iostream>
#include "sequences.h"

int main() {
    Sequence s ("header", "ACGT", dna);
    s.print();

    Nucleotide t ("header", "ACGUT");
    t.print();

    Nucleotide u ("header", "ACGU");
    u.print();

    Nucleotide a = u.reverse();
    a.print();

    Nucleotide b = a.complement();
    b.print();

    return 0;
}
