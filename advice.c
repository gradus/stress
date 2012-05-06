#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 0
#define MAX 22

typedef char * string;

int getrand(int min,int max){

  return(rand()%(max-min)+min);

}

int main(void)
{
  string advice[23];  // Make 23 pieces of advice
  advice[0] = "\nSome of the secret joys of living are not found by rushing from point A to point B, but by inventing some imaginary letters along the way.\n";
  advice[1] = "\nThe greatest weapon against stress is our ability to choose one thought over another\n";
  advice[2] = "\nThe time to relax is when you don't have time for it.\n";
  advice[3] = "\nFor fast-acting relief, try slowing down.\n";
  advice[4] = "\nThere's never enough time to do all the nothing you want.\n";
  advice[5] = "\nStress is an ignorant state.  It believes that everything is an emergency.\n";
  advice[6] = "\nThere is more to life than increasing its speed\n";
  advice[7] = "\nThe field of consciousness is tiny.  It accepts only one problem at a time.\n";
  advice[8] = "\nSlow down and everything you are chasing will come around and catch you.\n";
  advice[9] = "\nStress is poison.\n";
  advice[10] = "\nTension is who you think you should be.  Relaxation is who you are.\n";
  advice[11] = "\nEvery now and then go away, have a little relaxation, for when you come back to your work your judgment will be surer.\n";
  advice[12] = "\nSometimes we're tempted to create what we think a smart, popular, or 'normal' person would make.\nBut our work is best when we're just being our own peculiar selves.\n";
  advice[13] = "\nMistakes are a fact of life. It is the response to error that counts.\n";
  advice[14] = "\nIt's odd that you can get so anesthetized by your own pain or your own problem that you don't quite fully share the hell of someone close to you.\n";
  advice[15] = "\nYou are where you are right now b/c of your best thinking. If you want something different,change your thinking.\n";
  advice[16] = "\nWe are what we pretend to be so we must be careful what we pretend to be.\n";
  advice[17] = "\nThe difference between the impossible and the possible lies in a person's determination.\n";
  advice[18] = "\nDon't let life discourage you; everyone who got where he is had to start where he was.\n";
  advice[19] = "\nAct as if what you do makes a difference. It does\n";
  advice[20] = "\nAttitude is a little thing that makes a big difference.\n";
  advice[21] = "\nNever regret. If it's good, it's wonderful. If it's bad, it's experience.\n";
  advice[22] = "\nBrain cells create ideas. Stress kills brain cells. Stress is not a good idea.\n";

  int p=0, i=0;
  srand(time(NULL));

  for(i=0;i<getrand(1,22); i++) p=getrand(MIN,MAX);
  puts(advice[p]);
  return 0;
}

