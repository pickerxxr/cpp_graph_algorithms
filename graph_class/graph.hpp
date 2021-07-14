#progma once 
#include <set>
#include <vector>
#include <parallel/algorithm>

#include <iostream>
#include <fstream>
#include <unordered_map>
#include "util.hpp"
#include "dense_bitset.hpp"
#include "dense_bitset.hpp"

/*
This mem_adjlist_t class is the entry in the index array
*/


class mem_adjlist_t
{
public:
    vid_t *adj;  // this is the link to the column array
    vid_t len_out;
    vid_t len_in;

public:
    
};



