NB.  Phrases from Chapter 7, Section B of J Phrases.

m0=: ]                          NB.Identity
m1=: m6@m7                      NB.Three-o'clock rotation
m2=: m4@m6                      NB.Six-o'clock rotation
m3=: m4@m7                      NB.Nine-o'clock rotation
m4=: |.@]                       NB.Horizontal reflection
m5=: m2@m7                      NB.Counterdiagonal reflection
m6=: |."_1@]                    NB.Vertical reflection
m7=: |:@]                       NB.Diagonal reflection
d8=: m0`m1`m2`m3`m4`m5`m6`m7 @. [  NB.i d8 y gives mi y (all rotates and reflects)
