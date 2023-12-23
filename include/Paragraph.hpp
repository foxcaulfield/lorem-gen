#ifndef PARAGRAPH__HPP
#define PARAGRAPH__HPP

#include "globals.hpp"

class Paragraph {
   private:
    static const std::vector<std::string> sentence_bank;  // Static vector to store sentences
    static std::size_t total_sentence_count;  // Static variable to track the total number of sentences
    static std::size_t total_paragraph_count;  // Static variable to track the total number of paragraphs
    std::vector<std::string> own_sentences;  // Vector to store sentences for each paragraph

   public:
    // Returns the size of the sentence bank
    static std::vector<std::string>::size_type get_sentence_bank_size();

    // Returns information about the sentence bank, total sentences, and total paragraphs
    static std::string get_info();

    // Constructor to increment the total paragraph count
    inline Paragraph() {
        ++total_paragraph_count;
    }

    // Picks a random sentence from the sentence bank and adds it to the paragraph
    void pick_and_add_sentence();

    // Returns the sentences in the paragraph
    std::vector<std::string> get_sentences();
};

#endif
