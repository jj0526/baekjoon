/*The Antique Comedians of Malidinesia prefer comedies to tragedies. Unfortunately, 
most of the ancient plays are tragedies. Therefore the dramatic advisor of ACM has decided to 
transfigure some tragedies into comedies. Obviously, this work is very hard because the basic
 sense of the play must be kept intact, although all the things change to their opposites. 
 For example the numbers: if any number appears in the tragedy, it must be converted to its
 reversed form before being accepted into the comedy play.

Reversed number is a number written in arabic numerals but the order of digits is reversed. 
The first digit becomes last and vice versa. For example, if the main hero had 1245 strawberries 
in the tragedy, he has 5421 of them now. Note that all the leading zeros are omitted. 
That means if the number ends with a zero, the zero is lost by reversing (e.g. 1200 gives 21). 
Also note that the reversed number never has any trailing zeros.

ACM needs to calculate with reversed numbers. Your task is to add two reversed numbers 
and output their reversed sum. Of course, the result is not unique 
because any particular number is a reversed form of several numbers 
(e.g. 21 could be 12, 120 or 1200 before reversing). 
Thus we must assume that no zeros were lost by reversing (e.g. assume that the original number was 12).
*/
/*
The input consists of N cases. The first line of the input contains only positive integer N. 
Then follow the cases. Each case consists of exactly one line with two positive integers searpated by space. 
These are the reversed numbers you are to add. Two integers are less than 100,000,000.
*/
/*3
24 1   42 + 1 = 43
4358 754   8534 + 457 = 8991
305 794    503 + 497 = 1000 */
/*34
1998
1*/

#include <stdio.h>
#include <math.h>

int main()
{

    int num[1000][10];  //real nums
    int temp[1000][10]; // temp
    int times;          // how many times they're typing 2*times
    int count;
    int jari[1000][10];
    int sum[1000][1];   // the sum of reversed nums
    int reversed_sum[1000][10]; // the reversed of the sum

    scanf("%d", &times);

    for (int i = 0; i < times; i++)
    {
        scanf("%d%d", &num[i][0], &num[i][1]);
    }
    for (int j = 0; j < times; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            temp[i][0] = num[i][0] / pow(10, i + 1); // getting the num of digit
            count++;

            if (temp[i][0] <= 0)
            {
                temp[i][0] = num[i][0];

                for (int k = 0; k < count; k++) // getting the digits of it
                {
                    jari[i][k] = temp[i][0] % 10;
                    temp[i][0] = temp[i][0] / 10;
                }
                for (int k = 0; k < count; k++) // reversing it
                {
                    num[i][0] = jari[i][k] * pow(10, count - k - 1);
                }
                break;
            }
        }
    }
    for (int j = 0; j < times; j++) 
    {
        for (int i = 0; i < 8; i++) 
        {
            temp[i][1] = num[i][1] / pow(10, i + 1); // getting the num of digit

            count++;

            if (temp[i][1] <= 0)
            {
                temp[i][1] = num[i][1];
                for (int k = 0; k < count; k++) // getting the digits of it
                {
                    jari[i][k] = temp[i][1] % 10; //when num[i][1] = 81 jari[i][0] = 1 jari[i][1] = 8
                    temp[i][1] = temp[i][1] / 10;
                }
                for (int k = 0; k < count; k++) // reversing it
                {
                    num[i][1] = jari[i][k] * pow(10, count - k - 1);
                }
                break;
            }
        }
    }

    for (int i = 0; i < times; i++) // making all temps to 0
    {
        for (int j = 0; j < times; j++ )
        {
            temp[i][j] = 0;
        }
    }

    for (int i = 0; i < times; i++) // adding reversed numbers
    {
        sum[i][0] = num[i][0] + num[i][1];
    }
    for (int i = 0; i < times; i++) // getting digs of the sum and then reversing it
    {
        for (int j = 0; j < 9; j++)
        {
            temp[i][0] = sum[i][0] % 10;
            temp[i][0] = temp[i][0] / 10;
            count++;
            if (temp[i][0] <= 0)
            {
                break;
            }
        }
        for (int k = 0; k < count; k++)
        {
            reversed_sum[i][0] = temp[k][0] * pow( 10, count - k + 1 );
        }
    }
    for (int i = 0; i < times; i++)
    {
        printf("%d\n", reversed_sum[i][0]);
    }

    return 0;

}