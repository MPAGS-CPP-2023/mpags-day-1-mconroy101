# include <iostream>
# include <string>
# include <vector>

int main(int argc, char* argv[]){
    
    char in_char{'x'};
    std::string out_str{""};

    // Convert C-style integer and array of strings to C++ vector and output
    const std::vector<std::string> cmdLineArgs {argv, argv+argc};

    for (int i{1}; i < cmdLineArgs.size(); ++i)
    {
        if (cmdLineArgs[i] == "-h" or cmdLineArgs[i] == "--help") 
        {
            std::cout << "This is a help message.\n\nEnter a cipher to encode and then press CTRL+ D." << std::endl;
        }

        else if (cmdLineArgs[i] == "--version")
        {
            std::cout << "Version: 1.0.1" << std::endl;
        }

        else if (cmdLineArgs[i] == "-i")
        {
            std::string input_file = cmdLineArgs[i+1];
            std::cout << "Input file: " << input_file << std::endl;
            ++i;
        }

        else if (cmdLineArgs[i] == "-o")
        {
            std::string output_file = cmdLineArgs[i+1];
            std::cout << "Output file: " << output_file << std::endl;
            ++i;
        }
        else 
        {
            std::cout << "Argument " << cmdLineArgs[i] << " not recognised." << std::endl;
            break;
        }
    }

    // Take each letter from user input and in each case:
    while(std::cin >> in_char)
    {
        // - Convert to upper case
        if (std::isalpha(in_char))
        {
        out_str += std::toupper(in_char);
        continue;
        }
        // - Change numbers to words

        switch (in_char)
        {
            case '1' :
                out_str += "ONE";
                break;

            case '2' :
                out_str += "TWO";
                break;

            case '3' :
                out_str += "THREE";
                break;

            case '4' :
                out_str += "FOUR";
                break;

            case '5' :
                out_str += "FIVE";
                break;

            case '6' :
                out_str += "SIX";
                break;

            case '7' :
                out_str += "SEVEN";
                break;

            case '8' :
                out_str += "EIGHT";
                break;

            case '9' :
                out_str += "NINE";
                break;

            case '0' :
                out_str += "ZERO";
                break;

            default :
                break;
        }
        // - Ignore any other (non-alpha) characters
        // - In each case, add result to a string variable
    }

    // print out the new string
    std::cout << out_str << std::endl;

}
