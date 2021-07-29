// The tower of Hanoi is a famous puzzle where we have three rods and N disks. 
// The objective of the puzzle is to move the entire stack to another rod. 
// You are given the number of discs N. Initially, these discs are in the rod 1. 
// You need to print all the steps of discs movement so that all the discs reach the 3rd rod. 
// Also, you need to find the total moves.

void towerOfHanoi(int N, int from, int to, int aux, long long &moves)
{
    if (N==1)
    {
        cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        moves++;
        return;
    }
    towerOfHanoi(N-1, from, aux, to, moves);
    moves+=1;
    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
    towerOfHanoi(N-1, aux, to, from, moves);
}
public:
// You need to complete this function

// avoid space at the starting of the string in "move disk....."
long long toh(int N, int from, int to, int aux){
    long long moves = 0;
    towerOfHanoi(N, from, to, aux, moves);
    return moves;
    
    }