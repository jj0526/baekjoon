/*Ethel suspected that the North Side Alliance (NSA) were spying on her communications with her sister Lucy. 
In order to thwart the NSA’s attempts, Ethel encrypted all of their communications using a Caesar cipher.

A Caesar cipher is an encryption method where each letter in the plaintext is shifted by an offset in order 
to produce the encrypted text. For example, given the offset value of 2, A becomes C, B becomes D, Y becomes A, and so on.

Your task is to decrypt Ethel’s encrypted messages given that the offset is calculated by a^b.*/

/*The first line contains three integers n, a, and b. n is the number of characters in the encrypted message, including spaces. 
The numbers a and b are used to calculate the offset a^b, with 0 ≤ a ≤ 231 and 0 ≤ b ≤ 216, however at least a or b will 
be greater than 0 in each input.

The second line contains n characters representing the encrypted message. It is guaranteed to only contain 
upper-case letters (A-Z) or spaces, and is immediately followed by a newline.*/

/*The output should consist of a single line with the decrypted message in upper-case characters. 
Note that space are preserved between the encrypted and decrypted messages. This should immediately be followed by a newline.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    long long n; // n letters
    long long a; // offset : a^b
    long long b;

    scanf("%lld %lld %lld", &n, &a, &b);

    char *input = (char *)malloc((n+1)*sizeof(char));

    char ch;

    scanf("%c%[^\n]", &ch, input);

    long long sub1 = 1;
    for (long long i = 0; i<b; i++){
        sub1 = (sub1 * (a%26))%26;
    }

    int sub2 = (int)(sub1 % 26);

    for (int i = 0; i<n; i++){
        if (input[i]!=' '){
            input[i] = input[i] - sub2;
            while (('A'>input[i])||(input[i]>'Z')){
                input[i]+=26;
            }
        }
    }

    printf("%s", input);

    free(input);

    return 0;

}