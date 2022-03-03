This is an implementation of Rock, Paper, Scissors, Lizard Spock game from the Big band theory 

#########################################
### GAME RULES                        ###
#########################################
- Scissors cuts Paper.
- Paper covers Rock.
- Rock crushes Lizard.
- Lizard poisons Spock.
- Spock smashes Scissors.
- Scissors decapitate Lizard.
- Lizard eats Paper.
- Paper disproves Spock.
- Spock vaporizes Rock.
- Rock crushes Scissors.

This implementation makes use of a 5x5 matrix to compute the results 
with the intention to make the flow logic simpler. 

```
    Player = j
    CPU = i
    T = Tie
    W = User Win
    L = User Loses

    ✊✋✌️🦎🖖
  ✊|T L W W L
  ✋|W T L L W
  ✌️|L W T W L
  🦎|L W L T W
  🖖|W L V L T
```
