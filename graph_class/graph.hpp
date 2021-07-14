#progma once 
#include <set>
#include <vector>
#include <parallel/algorithm>

#include <iostream>
#include <fstream>
#include <unordered_map>
#include "util.hpp"
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
    mem_adjlist_t() : adj(NULL), len_out(0), len_in(0) {}
    mem_adjlist_t( vid_t *adj ) : adj(adj), len_out(0), len_in(0) {}

    vid_t *begin() { return adj; }
    vid_t *end() { return adj + len_out + len_in;}

     
};



