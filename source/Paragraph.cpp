#include "Paragraph.hpp"

/* static */
const std::vector<std::string> Paragraph::sentence_bank{
    "Lorem ipsum dolor sit amet.",
    "Consectetur adipiscing elit.",
    "Mauris condimentum.",
    "Lacus in placerat commodo.",
    "Libero felis pulvinar orci.",
    "Eget interdum orci quam vel enim.",
    "Curabitur id orci eu tortor ullamcorper lacinia.",
    "Curabitur turpis orci.",
    "Consectetur vitae iaculis a.",
    "Tincidunt in odio.",
    "Pellentesque molestie mi vel felis mollis tincidunt.",
    "Phasellus consectetur eleifend congue.",
    "In hac habitasse platea dictumst.",
    "Proin pretium elementum nulla sit amet pellentesque.",
    "Vestibulum non elementum dui.",
    "A pharetra orci.",
    "Mauris in varius nulla."};

/* static */
std::vector<std::string>::size_type Paragraph::get_sentence_bank_size() {
    return sentence_bank.size();
}

/* static */
std::size_t Paragraph::total_sentence_count = 0;

/* static */
std::size_t Paragraph::total_paragraph_count = 0;

/* static */
std::string Paragraph::get_info() {
    return "Bank size: " + std::to_string(get_sentence_bank_size()) +
           "; Total sentences: " + std::to_string(total_sentence_count) +
           "; Total paragraphs: " + std::to_string(total_paragraph_count);
}

void Paragraph::pick_and_add_sentence() {
    ++total_sentence_count;
    std::string sentence = sentence_bank.at(
        static_cast<std::size_t>(std::rand()) % get_sentence_bank_size());
    own_sentences.push_back(sentence);
    return;
}

std::vector<std::string> Paragraph::get_sentences() {
    return this->own_sentences;
}
