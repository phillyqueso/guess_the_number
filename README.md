# guess_the_number - exactly what it sounds like it is.

## Made this game with Benji on a flight back from Denver/Breck to Houston 2025-01-19

 Play by play: No internet on the flight. Benji's laptop had no compilers, so we switched to poppas.
 In trying to decide on what language to code this game in. We ended up starting with trusty C. Again, no internet. So couldn't count on downloading crates, npm packages, etc... my go tos on the usual.
 We got stuck on reading stdin, we tried getchar, scanf, and fumbled without being able to look anything up. We ultimately decided to rely on my better memory of writting exactly this type of thing in c++ using std::cin back in the mid 90s.
 On we went. We managed to read user input, and could suddenly play the game by hard coding the answer. No randomness, couldn't remember how to seed.
### We learned types, stdin/stdout, library inclusion, compiling/run cli commands.
### `$ g++ main.cpp -o main`
#### extra: we learned how to make a loop.
