#include "Paragraph.hpp"
#include "globals.hpp"

int main(int argc, char *argv[]) {
    try {
        std::srand(static_cast<unsigned>(std::time(nullptr)));

        if (argc != 3) {
            throw std::invalid_argument(
                "Usage: lorem-gen <paragraph_count> <sentence_count>");
        }

        int paragraph_count = std::atoi(argv[1]);
        int sentence_count = std::atoi(argv[2]);

        if (paragraph_count <= 0 || sentence_count <= 0) {
            throw std::invalid_argument(
                "Invalid argument: paragraph_count and sentence_count must be "
                "positive integers.");
        }

        std::vector<Paragraph> paragraphs;

        for (int i = 0; i < paragraph_count; ++i) {
            Paragraph par;
            for (int j = 0; j < sentence_count; ++j) {
                par.pick_and_add_sentence();
            }
            paragraphs.push_back(par);
        }

        for (std::vector<Paragraph>::iterator par_iter = paragraphs.begin();
             par_iter != paragraphs.end(); ++par_iter) {
            std::vector<std::string> sentences = par_iter->get_sentences();
            for (std::vector<std::string>::iterator sent_iter =
                     sentences.begin();
                 sent_iter != sentences.end(); ++sent_iter) {
                std::cout << *sent_iter << " ";
            }
            std::cout << "\n\n";
        }

        std::cout << Paragraph::get_info() << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << "Invalid argument exception: " << e.what() << std::endl;
    } catch (const std::exception &exception) {
        std::cerr << "Exception caught: " << exception.what() << std::endl;
    } catch (...) {
        std::cerr << "Caught unknown exception" << std::endl;
    }

    return 0;
}
