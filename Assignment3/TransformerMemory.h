//Ballyyev Eziz st135568@student.spbu.ru Class Transformers
#ifndef TRANSFORMER_MEMORY_H
#define TRANSFORMER_MEMORY_H

#include <string>

class TransformerMemory {
    public:
        TransformerMemory(int capacity);
        void logAction(const std::string& action);
        std::string getLogRecord(int index = -1) const;
        ~TransformerMemory();

    private:
        int _capacity;
        int _index = 0;
        std::string* _log;
};
#endif