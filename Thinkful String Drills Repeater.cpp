std::string repeater(std::string str, int n)
{
    std::string s = str;

    if (n >= 1) {
        for (int i = 1; i < n; i++)
            s += str;
        return s;
    }
    else return "";
}