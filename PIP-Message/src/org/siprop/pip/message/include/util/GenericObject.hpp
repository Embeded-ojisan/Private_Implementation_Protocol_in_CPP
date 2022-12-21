#include <unordered_set>

class GenericObject
{
private:
    static std::string      SEMICOLON        = Separators.SEMICOLON;
    static std::string      COLON            = Separators.COLON;
    static std::string      COMMA            = Separators.COMMA;
    static std::string      SLASH            = Separators.SLASH;
    static std::string      SP               = Separators.SP;
    static std::string      EQUALS           = Separators.EQUALS;
    static std::string      STAR             = Separators.STAR;
    static std::string      NEWLINE          = Separators.NEWLINE;
    static std::string      RETURN           = Separators.RETURN;
    static std::string      LESS_THAN        = Separators.LESS_THAN;
    static std::string      GREATER_THAN     = Separators.GREATER_THAN;
    static std::string      AT               = Separators.AT;
    static std::string      DOT              = Separators.DOT;
    static std::string      QUESTION         = Separators.QUESTION;
    static std::string      POUND            = Separators.POUND;
    static std::string      AND              = Separators.AND;
    static std::string      LPAREN           = Separators.LPAREN;
    static std::string      RPAREN           = Separators.RPAREN;
    static std::string      DOUBLE_QUOTE     = Separators.DOUBLE_QUOTE;
    static std::string      QUOTE            = Separators.QUOTE;
    static std::string      HT               = Separators.HT;
    static std::string      PERCENT          = Separators.PERCENT;

    static std::unordered_set<std::string> immutableClasses{
        "String", "Character",
		"Boolean", "Byte", "Short", "Integer", "Long",
		"Float", "Double"
    };

    static int              indentation;
    static std::string      stringRepresentation;
    static Match            matchExpression;

	// コンストラクタ
	GenericObject();

	std::string getIndentation();

public:
    void setMatcher(Match matchExpression);
    
    Match getMatcher();

    void sprint(int);
}