#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <assert.h>

#define adjweight(r, c) adjweight[R*n+c]

using namespace std;

unordered_set<string> stopwords = {
    "most", "wouldn't", "he", "whom", "does", "didn't", "again", "into", "needn't", "am", "both", "that'll", "aren't", "shouldn't", "now", "is",
    "ma", "wasn't", "hasn't", "under", "here", "ain", "between", "don", "while", "couldn", "with", "there", "be", "until", "ours", "will", "such",
    "him", "mustn't", "wasn't", "can", "herself", "weren", "should've", "hadn't", "of", "had", "shan", "ve", "which", "re", "my", "when",
    "because", "himself", "through", "then", "couldn't", "few", "to", "just", "o", "you", "so", "don't", "yourself", "the", "but", "me", "you'd",
    "from", "she's", "it's", "do", "yourselves", "out", "below", "ll", "on", "your", "she", "how", "and", "won't", "hadn", "hers", "didn't", "themselves",
    "doesn", "been", "were", "at", "d", "over", "a", "more", "who", "should", "his", "isn't", "up", "before", "some", "any", "off", "have", "own", "our",
    "we", "not", "doesn't", "an", "aren", "mightn", "down", "other", "these", "it", "each", "i", "during", "if", "myself", "mustn", "they", "same", "them",
    "very", "wouldn't", "theirs", "weren't", "nor", "haven", "needn", "having", "shan't", "doing", "all", "than", "as", "by", "no", "only", "their", "that",
    "shouldn", "against", "won", "its", "her", "m", "did", "y", "mightn't", "you'll", "above", "are", "being", "itself", "once", "s", "you've", "was", "what",
    "yours", "haven't", "further", "after", "where", "this", "ourselves", "about", "you're", "for", "those", "hasn't", "has", "or", "why", "too", "in", "isn't"
};



void read_sentences(
    const char * const filename,
    int * const np,
    int * const wordCount,
    string ** const originalp
)
{
    int n = 0;
    int orig_size = 5;
    string *original;
    string tmp;

    original = (string*) malloc(orig_size * sizeof(*original));
    assert(original);
    while (cin >> tmp) {
        if (original[n].length() == 0) {
            original[n] += tmp;
        } else {
            original[n] += ' ';
            original[n] += tmp;
        }

        if (n == orig_size) {
            orig_size *= 2;
            original = (string*) realloc(original, orig_size * sizeof(*original));
            assert(original);
        }
    }

    original = (string*) realloc(original, n * sizeof(*original));
    *originalp = original;
    *np = n;
}

int main(int argc, char * argv[])
{
    vector<string> * content;
    string * origional;
    float * adjweight;
    float * weightsums;
    float * scores;
    int n;
}
