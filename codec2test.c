#include <string>
#include <iostream>

using namespace std;

string CMD_ENCODE = "./codec2/build_linux/src/c2enc";
string CMD_DECODE = "./codec2/build_linux/src/c2dec";

void encode_file(
        string aInputFilePath, 
        string aOutputFileName, 
        string aBitRate )
{
    /* We base off this basic command:
     *
     *  $ ./src/c2enc 2400 ../raw/hts1a.raw hts1a_c2.bit
     *
     * Deriving the following format: 
     *
     *  "<CMD_ENCODE> <aBitRate> <aInputFilePath> <aOutputFilename>"
     *
     **/
    string aCommandStr = CMD_ENCODE + " " + aBitRate + " " + 
                                            aInputFilePath + " " + 
                                            aOutputFileName;

    system(aCommandStr.c_str());

    return;
}

void decode_file(
        string aInputFilePath, 
        string aOutputFileName, 
        string aBitRate )
{
    /* We base off this basic command:
     *
     * $ ./src/c2dec 2400 hts1a_c2.bit hts1a_c2_2400.raw  
     *
     * Deriving the following format: 
     *
     *  "<CMD_DECODE> <aBitRate> <aInputFilePath> <aOutputFilename>"
     *
     **/
    string aCommandStr = CMD_DECODE + " " + aBitRate + " " + 
                                            aInputFilePath + " " + 
                                            aOutputFileName;

    system(aCommandStr.c_str());

    return;
}

/* The main function below tests the functions we created above.
 *  Note that these functions can exist independently. */
int main()
{
    /* Test encode a file */
    encode_file( "./codec2/wav/hts1a.wav",
                 "hts1a.bit",
                 "2400" );

    /* Test decode the file we just encoded */
    decode_file( "hts1a.bit",
                 "hts1a.raw",
                 "2400" );
    return 0;
}
