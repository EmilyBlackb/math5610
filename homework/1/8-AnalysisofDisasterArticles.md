
# Some disasters attributable to bad numerical computing

<http://www-users.math.umn.edu/~arnold//disasters/>

## The Patriot Missile Failure

In 1991 an American Patriot Missile battery failed to detect an incoming Iraqi Scud missile resulting in the death of 28 soldiers and several injuries. The American Patriot Missile battery failed to detect the Scud missle due to a calculation error in the code that was propagated and intensified as the the Missile battery ran over long periods of time. The error was due to the conversion from converting the time to a binary code. Since the code converted the 1/10 of a second to a 24-bit binary, the tail end was cut off resulting in 100 hours a 0.34 second error. The longer the Missile battery ran, the larger the error was. Some of the code had been improved, however, this resulted in more error since this meant that the errors generated did not cancel each other. 

## The Explosion of the Ariane 5

In 1196 the Ariane rocket exploded 40 seconds after lift off due to a software error caused by converting from a 64-bit float to a 16-bit signed integer in the SRI software system. Since the number converted was larger than the largest 16-bit signed integer (32,767), the number failed to convert correctly resulting the loss of guidance and altitude information which ultimately led to the Ariane rocket exploding.

## The sinking of the Sleipner A offshore platform

In 1991, the Sleipner A platform sprang a leak in its concrete plateform due to a finite element analysis error causing a structure to be designed that was did not sufficiently address the shear stresses on the structure. The Sleipner A platform sank to the bottom of the ocean resulting in a loss of $700 million dollars and a 3.0 seismic event. The structure failure could be traced back to a tricell, a concrete frame where cells of the Sleiper A platform meet. The finite element approximation of the linear elastic model of the tricell was inaccurate leading to the shear stresses being underestimated by 47% so the concrete walls were created thinner than needed. Careful, reanalysis predicted that the structure would result in failure at 62 m, only 3 meters away from where the plateform failed.
