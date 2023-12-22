#ifndef PARAGRAPH__HPP
#define PARAGRAPH__HPP

#include "globals.hpp"

class Paragraph {
   private:
    static const std::vector<std::string> sentence_bank;
    static std::size_t total_sentence_count;
    static std::size_t total_paragraph_count;
    std::vector<std::string>own_sentences;

   public:
    static std::vector<std::string>::size_type get_sentence_bank_size();
    static std::string get_info();

    inline Paragraph() {
        ++total_paragraph_count;
    }

    void pick_and_add_sentence();
};

#endif