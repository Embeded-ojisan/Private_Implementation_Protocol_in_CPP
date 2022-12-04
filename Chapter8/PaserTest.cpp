

class PaserTest
{
public:
    loadText(std::string fileName)
    {
        std::ifsteram in(fileName);
        char buf[1024];



    }
}

int main(int argc, char *argv[])
{
    

    try
    {
        if(argc < 1)
        {
            std::cout << "ERR: 読み込むファイル名を指定してください" << std::endl;
            return -1;
        }


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}