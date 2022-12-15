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
	GenericObject()
	{
		indentation = 0;
		stringRepresentation = "";
	}

	std::string getIndentation()
	{
		char* chars[indentation] = {' '};
		return std::string(chars);
	}

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

	public void merge(Object mergeObject) {
		if (!mergeObject.getClass().equals(this.getClass()))
			throw new IllegalArgumentException("Bad override object");
		// Base case.
		if (mergeObject == null)
			return;
		Class myclass = this.getClass();
		while (true) {
			Field[] fields = myclass.getDeclaredFields();
			for (int i = 0; i < fields.length; i++) {
				Field f = fields[i];
				int modifier = f.getModifiers();
				if (Modifier.isPrivate(modifier)) {
					continue;
				} else if (Modifier.isStatic(modifier)) {
					continue;
				} else if (Modifier.isInterface(modifier)) {
					continue;
				}
				Class fieldType = f.getType();
				String fieldName = f.getName();
				String fname = fieldType.toString();
				try {
					// Primitive fields are printed with type: value
					if (fieldType.isPrimitive()) {
						if (fname.compareTo("int") == 0) {
							int intfield = f.getInt(mergeObject);
							f.setInt(this, intfield);
						} else if (fname.compareTo("short") == 0) {
							short shortField = f.getShort(mergeObject);
							f.setShort(this, shortField);
						} else if (fname.compareTo("char") == 0) {
							char charField = f.getChar(mergeObject);
							f.setChar(this, charField);
						} else if (fname.compareTo("long") == 0) {
							long longField = f.getLong(mergeObject);
							f.setLong(this, longField);
						} else if (fname.compareTo("boolean") == 0) {
							boolean booleanField = f.getBoolean(mergeObject);
							f.setBoolean(this, booleanField);
						} else if (fname.compareTo("double") == 0) {
							double doubleField = f.getDouble(mergeObject);
							f.setDouble(this, doubleField);
						} else if (fname.compareTo("float") == 0) {
							float floatField = f.getFloat(mergeObject);
							f.setFloat(this, floatField);
						}
					} else {
						Object obj = f.get(this);
						Object mobj = f.get(mergeObject);
						if (mobj == null)
							continue;
						if (obj == null) {
							f.set(this, mobj);
							continue;
						}
						if (obj instanceof GenericObject) {
							GenericObject gobj = (GenericObject) obj;
							gobj.merge(mobj);
						} else {
							f.set(this, mobj);
						}
					}
				} catch (IllegalAccessException ex1) {
					ex1.printStackTrace();
					continue; // we are accessing a private field...
				}
			}
			myclass = myclass.getSuperclass();
			if (myclass.equals(GenericObject.class))
				break;
		}
	}
*/


}