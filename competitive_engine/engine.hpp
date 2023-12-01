#pragma once

#include "engine_base.hpp"
#include <atomic>
#include <unordered_map>

struct PosData{
    U16 move;
    double eval;
    int count;
};

class Engine : public AbstractEngine {

    // add extra items here. 
    // Note that your engine will always be instantiated with the default 
    // constructor.
    
    public:
    void find_best_move(const Board& b) override;
    std::unordered_map<std::string, PosData> repitition_table;

};
