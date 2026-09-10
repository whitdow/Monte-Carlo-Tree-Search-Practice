/*
 * My working plan is to build a MCTS algorithm to play a basic game to understand
 * the basic implimentation of the algorithm--and how to manage saving states
 * during the roll-out phase and returning to the main game state
 * after backprop
 *
 *
 *
 *
*/

#include <string>
#include <vector>
#include <queue>

class player {

    public:
        /*
         * Player needs a thinking process
         *      When the move queue has gotten low enough, the player calls
         *      a thinking function that generates another n moves from the current node
         * Player needs a move-selection process
         *      adds moves to queue after thinking process
         * Player needs to play moves--return string representing move
         *      player plays the next move in queue
         *      if player::move notices that there is only one move in the queue
         *      it calls a thinking function to generate five more moves
         *      before returning its move string
         *
        */


    private: 
        std::queue<std::string> moves;
        Monte_Carlo_Tree brain;

};

class Monte_Carlo_Tree {
    
    

    private:

        struct Node {
            std::vector<Node*> children;

        };

};