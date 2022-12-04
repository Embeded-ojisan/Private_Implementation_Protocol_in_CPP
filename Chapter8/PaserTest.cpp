

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
    char* message[];

    if(argc < 1)
    {
        std::cout << "ERR: 読み込むファイル名を指定してください" << std::endl;
        return -1;
    }

    message = this.loadText(args[0]);
    std::cout << "メッセージ読み込み成功" << std::endl;

    try
    {
        PIPMessage pipMessage;
        StringMsgParser parse;
        pipMesage = parser.PIMessage(message);
        std::cout
            << "メッセージパース成功："
            << pipMessage.getClass().getName();
            << std::endl;
    }
    catch(const PraserException& e)
    {
        std::cerr << e.what() << '\n';
    }
}