#include <string>
#include <vector>

// Given a pointer, returns a human-readable name. Useful for debugging, since
// names are easier to remember and recognise than memory addresses. Algorithm
// could be adapted to any programming language, and work on any ID that can be
// turned into a number. 0 results in "Null", and Names of inputs that are close
// together often rhyme.
std::string name_of(const void* input) {
    using std::vector;
    using std::string;

    static const vector<string> beginnings {"N", "Al", "Aver", "B", "Ch", "D",
        "Ell", "Ev", "F", "G", "Gr", "H", "Iv", "J", "K", "L", "M", "Mr ",
        "Ms ", "Mx ", "P", "Pr", "Qu", "R", "S", "T", "Tr", "V", "W", "Z"};

    static const vector<string> middles {"u", "a", "ai", "ay", "e", "ee", "el",
        "en", "i", "ing", "o", "oo", "ou", "or"};

    static const vector<string> ends {"ll", "b", "ck", "cy", "d", "dy", "gh",
        "gia", "r", "l", "le", "liet", "lie", "mer", "nd", "ny", "rd", "sly",
        "son", "ss", "thy", "te", "tt", "xon", "y", "yton", "zz", ""};

    unsigned long int id = (unsigned long int)input;
    string result;

    result += beginnings[id % beginnings.size()];
    id /= beginnings.size();

    result += middles[id % middles.size()];
    id /= middles.size();

    result += ends[id % ends.size()];
    id /= ends.size();

    return result;
}
