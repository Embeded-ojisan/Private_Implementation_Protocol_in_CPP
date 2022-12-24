

class PIPMessage
    : public MessageObject,
        public Cloneable,
        public Serializable
{
private:
    static std::string DEFAULT_ENCODING;

    std::list unrecognizedHeaders;

    std::list headers;

public:
    PIPMessage() {};

}

std::string PIPMessage.DEFAULT_ENCODING = "UTF-8";