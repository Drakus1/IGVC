/**
 *  @file astar.h
 *  @author shae, CS5201 Section A
 *  @date Apr 19, 2016
 *  @brief Description:
 *  @details Details:
 */

#ifndef ASTAR_H_
#define ASTAR_H_

#include "updatepriorityqueue.h"
#include "typewkey.h"

template<typename typekey, typename Heuristic>
std::vector<std::pair<size_t, size_t>> Astar(occupancyGrid[],
    TypeWkey<typekey> start, TypeWkey<typekey> goal, const Heuristic& heuristic);
template<typename typekey>
const std::vector<std::pair<size_t, size_t>>& reconstruct_path(
    std::vector<std::pair<size_t, size_t>>& moves,
    const unordered_map<TypeWkey<typekey>, TypeWkey<typekey> >& parents,
    const TypeWkey<typekey>& current, size_t width, size_t hieght);

#include "astar.hpp"
#endif /* ASTAR_H_ */
