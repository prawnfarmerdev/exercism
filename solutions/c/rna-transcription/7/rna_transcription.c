#include "rna_transcription.h"
#include <stdlib.h>
#include <string.h>

char *to_rna(const char *dna) {

  int dnasize = strlen(dna);

  char *rna = malloc(dnasize + 1);
  rna[0] = '\0';
  int pos = 0;

  if (!dna)
    return NULL;

  for (int i = 0; i < dnasize; i++) {
    switch (dna[i]) {

    case 'G':
      rna[i] = 'C';
      break;
    case 'C':
      rna[i] = 'G';
      break;
    case 'T':
      rna[i] = 'A';
      break;
    case 'A':
      rna[i] = 'U';
      break;
    default:
      rna[0] = '\0';
      break;
    }
    pos = i;
  }
  rna[pos + 1] = '\0';
  return rna;
}
