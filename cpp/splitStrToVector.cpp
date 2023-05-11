/******************************************************************
Function: splitShadow

Purpose: This is a function to slipt shadow file into vector
guest2:$6$DMwTDAZpDTPRbBLv$Spw8Xe2Fo51V0cWG.oFysrgqEq.d7RP7stQ/x.M.IIM7ufhPr4PW30kTqANUi5sclSHFCVyOItXGUizXzonv10:19418:7:7:7:::
    0. Username
    1. Password struct $method$salt$hashedPasswd
    2. Change
    3. Minimum
    4. Maximum
    5. Warning
    6. Inactive
    7. Expire

In: 1. shadowFmt

Out: vector 
*******************************************************************/
std::vector<std::string> splitShadow(const std::string &shadowFmt)
{

    std::string delimiter = ":";
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::string token;
    std::vector<std::string> res;
    unsigned int i = 0;

    while (((pos_end = shadowFmt.find(delimiter, pos_start)) != std::string::npos) && i < 6)
    {
        token = shadowFmt.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
        i++;
    }

    res.push_back(shadowFmt.substr (pos_start));

    for (auto j : res)
    {
        std::cout << j << std::endl;	
    }
    return res;

}

