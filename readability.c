#include<stdio.h>
#include<math.h>
#include<cs50.h>
#include<ctype.h>





//prototype for a custome function
int count_letters, count_words, count_scentences(string text);


int main(void)
{
    // Get text from user
    string text = get_string("TEXT: ");

    //count letters, words, scentences (string text);


    //convert letters, words and scentences counts into intiger through Coleman-Liau index


    //print off index=X (gradeX)
    
    int index = 0;
    
    if (index < 1)
     {
         printf("Before G1\n");
     }

    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }

    else
    {
        printf("Grade %i\n", index);
    }


}



int count_letters, count_words, count_scentences(string text);
{
    //count number of letters
    int letters, scentences = 0;
    int words = 1;

    for(i = 0; strlen(text) > i; i++)

        if( isalpha text[i] );

            {
                letters++;
            }

        if ( text[i] == ' ' );

            {
                words++;
            }

        if ( text[i] == '!' || '?' || '.');

            {
                scentences++;
            }


    float zletters = letters * 100 / words;
    //need to calculate in to letters per 100 words


    float yscentences = scentences * 100 / words;
    //need to calculate to how many scentences per 100 words


    float ColemanLiau_index = 0.0588 * zletters - 0.296 * yscentences - 15.8;

    //round float Coleman-Liau index to int
    int index = round (ColemanLiau_index);

}

