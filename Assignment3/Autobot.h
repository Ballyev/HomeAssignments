//Ballyyev Eziz st135568@student.spbu.ru Class Transformers
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include <iostream>
#include <string>

#include "Transformer.h"

struct AutobotConfig : public TransformerConfig {
        bool const haveMatrixOfLeadership;
        std::string const motto;
};

class Autobot : public Transformer {
    public:
        Autobot(AutobotConfig config);
        Autobot(std::string& motto);
        void shantMotto();
        std::string getMotto();
        void setMotto(std::string motto);
        bool haveMatrixOfLeadership();
        void setHaveMatrixOfLeadership(bool haveMatrixOfLeadership);
        friend std::ostream& operator<<(std::ostream& os, const Autobot& obj);
        bool operator>(const Autobot& other) const;
        bool operator<(const Autobot& other) const;

    private:
        std::string _motto;
        bool _haveMatrixOfLeadership;
};
#endif