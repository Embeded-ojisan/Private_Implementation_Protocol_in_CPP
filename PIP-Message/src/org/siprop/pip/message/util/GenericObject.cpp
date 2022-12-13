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

public:
    void setMatcher(Match matchExpression)
    {
        if(nullptr == matchExpression)
        {
            throw Invalid_argument("null arg!");
        }

        this->matchExpression = matchExpression;
    }
    
    Match getMatcher()
    {
        return this->matchExpression;
    }

/* C++にはClassクラスやforNameが存在しないため実装せず
	public static Class getClassFromName(String className) {
		try {
			return Class.forName(className);
		} catch (Exception ex) {
			InternalErrorHandler.handleException(ex);
			return null;
		}
	}

	public static boolean isMySubclass(Class other) {
		try {
			return GenericObject.class.isAssignableFrom(other);
		} catch (Exception ex) {
			InternalErrorHandler.handleException(ex);
		}
		return false;
	}

	public static Object makeClone(Object obj) {
		if (obj == null)
			throw new NullPointerException("null obj!");
		Class c = obj.getClass();
		Object clone_obj = obj;
		if (immutableClasses.contains (c))
			return obj;
		else if (c.isArray ()) {
			Class ec = c.getComponentType();
			if (! ec.isPrimitive())
				clone_obj = ((Object []) obj).clone();
			else {
				if (ec == Character.TYPE)
					clone_obj = ((char []) obj).clone();
				else if (ec == Boolean.TYPE)
					clone_obj = ((boolean []) obj).clone();
				if (ec == Byte.TYPE)
					clone_obj = ((byte []) obj).clone();
				else if (ec == Short.TYPE)
					clone_obj = ((short []) obj).clone();
				else if (ec == Integer.TYPE)
					clone_obj = ((int []) obj).clone();
				else if (ec == Long.TYPE)
					clone_obj = ((long []) obj).clone();
				else if (ec == Float.TYPE)
					clone_obj = ((float []) obj).clone();
				else if (ec == Double.TYPE)
					clone_obj = ((double []) obj).clone();
			}
		} else if (GenericObject.class.isAssignableFrom (c))
			clone_obj = ((GenericObject) obj).clone();
		else if (GenericObjectList.class.isAssignableFrom (c))
			clone_obj = ((GenericObjectList) obj).clone();
		else if (Cloneable.class.isAssignableFrom (c)) {
			// If a clone method exists for the object, then
			// invoke it
			try {
				Method meth = c.getMethod("clone", (Class[]) null);
				clone_obj = meth.invoke(obj,(Object[]) null);
			} catch (SecurityException ex) {
			} catch (IllegalArgumentException ex) {
				InternalErrorHandler.handleException(ex);
			} catch (IllegalAccessException ex) {
			} catch (InvocationTargetException ex) {
			} catch (NoSuchMethodException ex) {
			}
		}
		return clone_obj;
	}
*/

    

}