# RWG - your random words generator

> ## “Honor your inner child by losing yourself in simple pleasures.” - Kim del Valle Walker

We, a friend of mine and I, needed twenty randomly generated words. Instead of simply searching for a generator on the internet, we
decided to play around a little and code one ourselves. RWG randomly generates a specific amount of words. The user may ask the generator for up to 2000 words. It will print the requested amount of words as long as the user's input is valid. 

<img width="506" alt="RWG - exemplary output" src="https://user-images.githubusercontent.com/121381385/211149329-fc0f9b2a-e804-4a9d-b7dc-0c4acbfbb105.png">

1. `Git clone` the current repository.
      
        git clone https://github.com/lspohle/PRIVATE_rwg.git
2. Replace 'requested_amount' by the amount of words you wish. Run the following command to `compile` and `execute`.
      
        gcc -Wall -Werror -Wextra *.c -o executable && ./executable requested_amount && rm executable

# Opportunities presented by RWG
- You may adjust the amount of words to choose from by modifying RWG's '[library.txt](https://github.com/lspohle/PRIVATE_rwg/blob/main/library.txt)' and the global variable 'MAX_AMOUNT' declared in '[generator.h](https://github.com/lspohle/PRIVATE_rwg/blob/main/generator.h)'.
- You may use a compiler for C of your choice (clang or gcc, for instance).
