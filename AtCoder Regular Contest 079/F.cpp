// for each vertex i, we want to assign number ai to it, 
// such that ai is the smallest number that does not appear in a_v1, ..., a_vk
// here a_v1, ..., a_vk are the destinations of edges from vertex i.

// In this type of graph, there is exactly one cycle, 
// and from cycle vertex, a tree may grow
// Since there are only N edges and it is weakly connected

// For each forest vertex, we can uniquely determine their Grundy Number

// For a cycle vertex, the two candidates are the two smallest integers do not appear
// Choose an arbitrary cycle vertex x, 
// Once we fix a_x, we can determine all Grundy Number along the cycle.
// Then we can verify if the Grundy Numbers we get are valid.